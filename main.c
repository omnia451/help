#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[25];
    int i;
    int s;
    for (i=0; i<20; i++){
        printf("Add a number to your list\n");
        scanf(" %d", &numbers[i]);
        for (s=0; s<numbers[i]; s++){
            if (numbers[s] == numbers[i]){
            printf("This number already exists\n");
            i == i-2;
            break;
            }
        }
    }
    for (i=0; i<20; i++){
      printf("%d, ", numbers[i]);
    }
    return 0;
}
