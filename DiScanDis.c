#include "DiScanDis.h"
#include <stdio.h>
#include <stdlib.h>

FILE * discoverer (char * name, char * mode, FILE * morgot)     // opening a file with checking if the operation was triggered
{
    if((morgot = fopen(name,mode)) == NULL)
    {
        fprintf(stderr, "Collaps open %s",name);
        exit(1);
    }
    return morgot;
}
void scaner (FILE * melkor, int raw[][DOG])
{
    for (int a = 0; a < CAT; a++)
        for (int b = 0; b < DOG; b++)
    {
        fscanf(melkor,"%d",&raw[a][b]);   // & on NOT ??   Cleaner or not ?
    }
}
void display (FILE * boromir , const char terror[][MAUS])
{
     for (int e = 0; e < CAT; e++)
    {
        fprintf(stdout,"%s\n",terror[e]);
        fprintf(boromir,"%s\n",terror[e]);
    }
}
