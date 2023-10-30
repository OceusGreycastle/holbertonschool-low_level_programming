#include "stdio.h"
#include "main.h"

/**
 * print_dog - prints the dogs info
 * 
*/

void print_dog(struct dog *d)
{
    if(d)
    {
        if(!(*d).name)
        {
            printf("Name: (nil)\n");
        }
        else
        {
            printf("Name: %f\n", (*d).name);
        }
        printf("Age: %f\n", (*d).age);
        if(!(*d).owner)
        {
            printf("Owner: (nil)\n");
        }
        else
        {
            printf("Owner: %f\n", (*d).owner);
        }
    }
}
