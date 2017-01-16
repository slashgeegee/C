#include <stdio.h>
#include <cs50.h>

int main()
{


int height;

    do {
        printf("Height:");
         height = GetInt();
         }while ((height < 0) || (height > 23));

    for (int x = 1; x <= height; x++){
        for (int spaces = (height - x);  spaces > 0; spaces--){
        printf(" ");
        }
            for (int hash = 1; hash <= (x + 1); hash++) {
            printf("#");
            }
             printf("\n");
    }
}
