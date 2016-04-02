#include "../../include/commands/ls.h"

void ls(FILE* fd_in, FILE* fd_out, char *directory, char *options)
{
	Options etat;
	readOptions(options, &etat);

	DIR *repertoire;

	struct dirent *flux;
	struct stat statbuf;
	int file;

	//POUR etatColonne
	//int ligne = -1;
	
	//POUR etatDetails
	struct passwd *userInfo;
	struct group *groupInfo;
	struct tm *timeInfo;


	if ((repertoire = opendir(directory)) == NULL)
	{
		perror(directory);
		exit(-1);
	}

	while ((flux = readdir(repertoire)))
	{
		file = openFile(flux->d_name);
		if (file == -1)
		{
			perror(flux->d_name);
			exit(-1);
		}

		if (fstat(file,&statbuf) == -1)
		{
			perror("stat");
			exit(-1);
		}

		//-----------------SWITCH AVEC LES DIFFERENTES OPTIONS-----------------//

		switch (etat)
		{

			case etatNormal:

				//SI DOSSIER = COULEUR BLEUE
				if (S_ISDIR(statbuf.st_mode))
				{
					//SET bleue puis PRINTF le nom puis SET couleur normale
					bogoprintf(fd_out, "%s%s%s  ",BLUE,flux->d_name,NORMAL);
				}
				else
				{	
					bogoprintf(fd_out, "%s  ",flux->d_name);
				}
				break;

			case etatDetails:

				// AFFICHAGE MODE
				if ((statbuf.st_mode & S_IFSOCK)==S_IFSOCK) bogoprintf(fd_out, "s");
				else if ((statbuf.st_mode & S_IFLNK)==S_IFLNK) bogoprintf(fd_out, "l");
				else if ((statbuf.st_mode & S_IFREG)==S_IFREG) bogoprintf(fd_out, "-");
				else if ((statbuf.st_mode & S_IFBLK)==S_IFBLK) bogoprintf(fd_out, "b");
				else if ((statbuf.st_mode & S_IFDIR)==S_IFDIR) bogoprintf(fd_out, "d");
				else if ((statbuf.st_mode & S_IFCHR)==S_IFCHR) bogoprintf(fd_out, "c");	
				else if ((statbuf.st_mode & S_IFIFO)==S_IFIFO) bogoprintf(fd_out, "p");	
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IRUSR) ? "r" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IWUSR) ? "w" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IXUSR) ? "x" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IRGRP) ? "r" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IWGRP) ? "w" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IXGRP) ? "x" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IROTH) ? "r" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IWOTH) ? "w" : "-");
			    bogoprintf(fd_out,  (statbuf.st_mode & S_IXOTH) ? "x" : "-");

			    bogoprintf(fd_out, " %d\t",(int)statbuf.st_nlink);

				userInfo=getpwuid(statbuf.st_uid);
				bogoprintf(fd_out, "%s",userInfo->pw_name);

				groupInfo=getgrgid(statbuf.st_gid);
				bogoprintf(fd_out, " %s",groupInfo->gr_name);

				bogoprintf(fd_out, " %8d",(int)statbuf.st_size);

				timeInfo=localtime(&statbuf.st_mtime);
				bogoprintf(fd_out, " %4d-%02d-%02d %02d:%02d",timeInfo->tm_year+1900,timeInfo->tm_mon+1,timeInfo->tm_mday,timeInfo->tm_hour,timeInfo->tm_min);

				if ((statbuf.st_mode & S_IFDIR)==S_IFDIR)
				{
					bogoprintf(fd_out, " %s%s%s\n",BLUE,flux->d_name,NORMAL);
				}
				else if ((statbuf.st_mode & S_IXUSR))
				{
					bogoprintf(fd_out, " %s%s%s\n",GREEN,flux->d_name,NORMAL);
				}
				else {
					bogoprintf(fd_out, " %s\n",flux->d_name);
				}
				

				break;

			case etatDossiers:

				if (S_ISDIR(statbuf.st_mode))
				{
					//SET bleue puis PRINTF le nom puis SET couleur normale
					bogoprintf(fd_out, "%s%s%s  ",BLUE,flux->d_name,NORMAL);
				}
				break;

			case etatDetailsDossiers:

				if (S_ISDIR(statbuf.st_mode))
				{
					bogoprintf(fd_out, "d");
					bogoprintf(fd_out,  (statbuf.st_mode & S_IRUSR) ? "r" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IWUSR) ? "w" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IXUSR) ? "x" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IRGRP) ? "r" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IWGRP) ? "w" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IXGRP) ? "x" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IROTH) ? "r" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IWOTH) ? "w" : "-");
				    bogoprintf(fd_out,  (statbuf.st_mode & S_IXOTH) ? "x" : "-");

				    bogoprintf(fd_out, " %d\t",(int)statbuf.st_nlink);

					userInfo=getpwuid(statbuf.st_uid);
					bogoprintf(fd_out, "%s",userInfo->pw_name);

					groupInfo=getgrgid(statbuf.st_gid);
					bogoprintf(fd_out, " %s",groupInfo->gr_name);

					bogoprintf(fd_out, " %8d",(int)statbuf.st_size);

					timeInfo=localtime(&statbuf.st_mtime);
					bogoprintf(fd_out, " %4d-%02d-%02d %02d:%02d",timeInfo->tm_year+1900,timeInfo->tm_mon+1,timeInfo->tm_mday,timeInfo->tm_hour,timeInfo->tm_min);


					bogoprintf(fd_out, " %s%s%s\n",BLUE,flux->d_name,NORMAL);

					break;

			}
		}



	}
	//SAUT DE LIGNE A LA FIN
	bogoprintf(fd_out, "\n");

}

int openFile(char *filename)
{
    return open(filename, O_RDONLY);
}

void readOptions(char *options, Options *etat)
{
        /**
         * Compares options and different types of options handled
         * And updates etat accordingly
         */
        if (strcmp(options, "-l")==0)
        {
                *etat=etatDetails;
        }
        else if (strcmp(options, "-d")==0)
        {
                *etat=etatDossiers;
        }
        else if (strcmp(options, "")==0)
        {
                *etat=etatNormal;
        }
        else if ((strcmp(options, "-dl")==0) || (strcmp(options, "-ld")==0) || (strcmp(options, "-d-l")==0) || (strcmp(options, "-l-d")==0))
        {
                *etat=etatDetailsDossiers;
        }
        else
        {
                /**
                 * Error if the options isn't handled
                 * Precise which options were at fault
                 * And quits the program
                 */
                printf("ls: invalid option -- \"%s\"\n",options);
                printf("Get more information on the README.md document.");
                exit(-1);
        }

}

void concatenateTables(char *tab1, char *tab2)
{
        /**
         * Gets the size of each table
         *
         */
        int taille1=0, taille2=0;

        while(tab1[taille1] != '\0')
        {
                taille1++;
        }

        while(tab2[taille2] != '\0')
        {
                taille2++;
        }

        /**
         * Resets the memory of the table 
         * Sets it to the addition of both tables' size
         */
        tab1 = realloc(tab1, (taille1 + taille2)*sizeof(char));

        int i = taille1;
        int j = 0;


        while(tab2[j] != '\0')
        {
                tab1[i] = tab2[j];
                i++;
                j++;
        }
}

/*
int main(int argc, char *argv[])
{
	char *optionTest = "";

	char *options = NULL;
	options = malloc(sizeof(char));
	if (options == NULL)
	{
		perror("options");
		exit(-1);
	}

	int iOptions = -1;
	int iParam = -1;
	int i;

	if (argc >1)
	{
		for (i=1; i<argc; i++)
		{
			if(argv[i][0] == '-')
			{
				iOptions = i;
				concatenateTables(options,argv[i]);
			}
			else {
				iParam = i;
			}
		}

		if (iOptions == -1)
		{
			if (iParam == -1)
			{
				ls("./","");
			}
			else
			{
				ls(argv[iParam],"");
			}
		}
		else {
			if (iParam == -1)
			{
				ls("./",options);
			}
			else
			{
				ls(argv[iParam],options);
			}
		}
	}
	//SI pas d'arguments => on execute dans le dossier courant
	else
	{
		ls("./",optionTest);
	}
	return 0;
}
*/