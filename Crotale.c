#include "Crotale.h"
#include <stdio.h>

void crotale (char terror[][MAUS], const int raw[][DOG])
{
    for (int c = 0; c < CAT; c++)
        for (int d = 0; d < MAUS; d++)
    {
        if (d == DOG)
            terror[c][d] = EDGE;
        else
        {
           switch (raw[c][d])
              {
                 case 0:
                     terror[c][d] = ' ';
                     break;
                 case 1:
                     terror[c][d] = '.';
                     break;
                 case 2:
                     terror[c][d] = ',';
                     break;
                 case 3:
                     terror[c][d] = ':';
                     break;
                 case 4:
                     terror[c][d] = '~';
                     break;
                 case 5:
                     terror[c][d] = '*';
                     break;
                 case 6:
                     terror[c][d] = '=';
                     break;
                 case 7:
                     terror[c][d] = '?';
                     break;
                 case 8:
                     terror[c][d] = '%';
                     break;
                 case 9:
                     terror[c][d] = '#';
                     break;

              }

        }

    }
}
