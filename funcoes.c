#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CalcDelta(int a, int b, int c)
{
    int delta = (b*b)-(4*a*c);
    return delta;
}

float Raiz1(int d,int b, int a)
{
    float raiz1 = (sqrt(d)-b)/(2*a);
    return raiz1;
}


float Raiz2(int d,int b, int a)
{
    float raiz2 = (-sqrt(d)-b)/(2*a);
    return raiz2;
}

