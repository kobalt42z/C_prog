#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct point
{
    int x;
    int y;
} point;

typedef struct polygon
{
    int amount;
    point **points[];
} polygon;

int main(int argc, char const *argv[])
{
    point a = {5, 3};
    point b = {7, 9};
    point c = {6, 9};

    return 0;
}
