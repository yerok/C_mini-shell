#ifndef LS_H
#define LS_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <dirent.h>

#include <time.h>
#include <errno.h>
#include <string.h>
#include <pwd.h>
#include <grp.h>
#include <limits.h>

#include <fcntl.h>


#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include "../redirection.h"


#define NORMAL "\x1B[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

/**
 * @brief	Options enumeration
 * Manages the differents kinds of options of our ls command
 *
 */

typedef enum
{
	etatNormal,
	etatDetails,	
	etatDossiers, 
	etatDetailsDossiers	

} Options;

void ls(FILE* fd_in, FILE* fd_out, char *directory, char *options);

/**
 * @brief 	Opens a file with the read only mode
 * 
 * @return 	The file in Integer
 */

int openFile(char *filename);

/**
 * @brief 	Sets the options depending on the entries
 * Also concatenates if there are more than two options and that the concatenation is possible
 * 
 */

void readOptions(char *options, Options *etat);

/**
 * @brief 	Concatenates two tables
 *
 *
 */

void concatenateTables(char *tab1, char *tab2);

#endif