#ifndef NOISE_H_INCLUDED
#define NOISE_H_INCLUDED

#include "Headcrab.h"

void noise   (int , int , int[][DOG]);                 //  noise suppression algorithm
int rounder (double);                                  //  correct number rounding
int anglecor (double, double, int );                   //  suppressing noise angle
int bordercor (double, double, double , int);          //  suppressing noise edge

#endif // NOISE_H_INCLUDED
