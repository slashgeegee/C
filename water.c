#include<stdio.h>
#include<cs50.h>

int main(void)
{

    printf("minutes: ");
    int mins = GetInt();

    int vol = mins * 12;

    printf("bottles: %i \n", vol);
}
