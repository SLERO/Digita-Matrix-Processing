#include "Noise.h"

void noise   (int cat , int dog , int terror[][dog])
{
    //double angle =  2;
    //double border = 3;
    double medium = 4;
    int i, z;
    double one, two, three, four, dubrez;
    int intrez;
    int target;

    for (i = 0; i < cat; i++)
        for (z = 0; z < dog; z++)
    {
        if (i == 0 && z == 0)              // upper left angle   step #1
        {
            target = terror[0][0];         // checked value
            one = terror[1][0];            // neighbors value
            two = terror[0][1];
            terror[0][0] = anglecor(one, two, target);
        }
        else if(i == 0 && z == dog - 1)        // upper right angle   step #2
        {
            target = terror[0][dog - 1];   // !!
            one =    terror[0][dog - 2];
            two =    terror[1][dog - 1];
            terror[0][dog] = anglecor(one, two, target);
        }
        else if  (i == cat - 1 && z == 0)     // lower left angle  step #3
        {
            target = terror[cat - 1][0];
            one =    terror[cat - 2][0];
            two =    terror[cat - 1][1];
            terror[cat][0] = anglecor(one, two, target);
        }
        else if  (i == cat - 1 && z == dog - 1)   // lower right angle step #4
        {
            target = terror[cat - 1][dog - 1];
            one    = terror[cat - 1][dog - 2];
            two    = terror[cat - 1][dog - 1];
            terror[cat][dog] = anglecor(one, two, target);

        }


        else if (i == 0 && z > 0 && z < dog - 1)     // TOP border row #0
        {
            target = terror[0][z];

            one =   terror[0 + 1][z];          // [1][z]
            two =   terror[0][z - 1];
            three = terror[0][z + 1];
            terror[0][z] = bordercor(one, two, three, target);
        }
        else if (i == cat - 1 && z > 0 && z < dog - 1)    // LOW border row #19!!!
            {
                target = terror[cat - 1][z];       // [19][z]

            one =   terror[cat - 2][z];        // [18][z]
            two =   terror[cat - 1][z - 1];    // [19][z - 1]
            three = terror[cat - 1][z + 1];    // [19][z + 1]
            terror[cat - 1][z] = bordercor(one, two, three, target);
            }
        else if (i > 0 && i < cat - 1 && z == 0)      // LEFT  column #0
        {
            target = terror[i][0];

            one =   terror[i + 1][0];
            two =   terror[i - 1][0];
            three = terror[i][0 + 1];
            terror[i][0] = bordercor(one, two, three, target);
        }
        else if (i > 0 && i < cat - 1 && z == dog - 1)    // RIGHT  column #29
        {
             target = terror[i][dog - 1];

             one   = terror[i][dog - 2];        // [i][28]
             two   = terror[i - 1][dog];        // [i - 1][29]
             three = terror[i + 1][dog];        // [i + 1][29]
             terror[i][dog - 1] = bordercor(one, two, three, target);
        }

        else                                         // medium content
        {
            target = terror[i][z];
            one   =  terror[i + 1][z];
            two   =  terror[i - 1][z];
            three =  terror[i][z + 1];
            four  =  terror[i][z - 1];
            dubrez = (one + two + three + four) / medium;
            intrez = rounder(dubrez);
            if ((target - 1) != intrez && (target + 1) != intrez)
                terror[i][z] = intrez;
        }

   }

}

int rounder (double rezult)
{
    int chip;
    double dail;
    double check = 0.5;

    chip = (int) rezult;              // get the number of integers
    dail = (double) rezult - chip;    // getting fractional part
    if (dail > check)                 // if the fractional part is greater than 0.5
        return chip + 1;              // rounding plus 1
    else
        return chip;

}

int anglecor (double one , double two, int target)
{
    double dubangl;
    int    intangl;
    int corner = 2;

    dubangl = (one + two) / corner;                             // average in double
    intangl = rounder(dubangl);                                 // correct rounding
    if ((target - 1) != intangl && (target + 1) != intangl)
        return intangl;
    else
        return target;
}
int bordercor (double one, double two, double three ,int target)
{
    double dubbord;
    int intbord;
    int border = 3;

    dubbord = (one + two + three) / border;
    intbord = rounder(dubbord);
    if ((target - 1) != intbord && (target + 1) != intbord)
        return intbord;
    else
        return target;
}
