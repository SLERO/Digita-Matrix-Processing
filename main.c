#include <stdio.h>
#include <stdlib.h>
#include "DiScanDis.h"
#include "Crotale.h"
#include "Noise.h"

int main()
{
    int raw[CAT][DOG];
    char terror[CAT][MAUS];
    char horror[MAUS];        // or little and size maus + 1 ?
    FILE * anna, * margo;

    anna = discoverer(SOURCE, "r", anna);
    scaner(anna, raw);                           // filling an array witch values from file
    fclose(anna);
    noise(CAT,DOG,raw);
    crotale(terror, raw);                        //  converting numbers to symbols
    margo = discoverer(DESTINATION,"w",margo);
    display(margo,terror);                       // demonstration and writing to the results file
    fclose(margo);
    printf("Complete!");
    return 0;
}
