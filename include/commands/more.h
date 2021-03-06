/*
    This file is part of Binsh.

    Foobar is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Foobar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Binsh.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <errno.h>
#include <getopt.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include "../utils.h"

#include "../parameters.def"
#include "../typedef.h"

typedef enum{
    etatSpace, // espace
    etatEntree,
    etatExit, // q ou Q
    etatSkipLignes, // s
    etatSkipScreenLignes, // f
    etatLigneNumber // =
} Etat;

int more_lib(int argc, char *argv[]);
void more(char *file, int *nbLigne);
void getEtat(Etat *curEtat, char c, int taille, int nbLigne);
int getLength(char *file);

