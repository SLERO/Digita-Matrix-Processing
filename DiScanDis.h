#ifndef DISCANDIS_H_INCLUDED
#define DISCANDIS_H_INCLUDED

#include <stdio.h>        // ? FILE
#include "Headcrab.h"

FILE * discoverer (char * , char *, FILE *);           //  file opener
void scaner  (FILE * , int [][DOG]);                   //  reading values from file
void display (FILE * , const char [][MAUS]);           //  outputting results to console with parallel writing to a file





#endif // DISCANDIS_H_INCLUDED
