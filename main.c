#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[25];
    int i;
    int s;
    int number;
    for (i=0;i<20;i++){
        printf("Add a number to your list\n");
        scanf(" %d",&numbers[i]);
        number == numbers[i];
        for (s=0;s<sizeof(numbers);s++){
            if (numbers[s] == number){
                printf("This number already exists\n");
                break;
            }
            else{
                printf("This number was added successfully\n");
                break;
            }
        }
    }
    for (i=0; i<20; i++){
      printf("%d, ",numbers[i]);
    }
    int len = sizeof (numbers)/sizeof (numbers[0]);
    int fsum = sum(numbers, len);
    printf("The sum is %d", fsum);
    return 0;
}
int sum(int numbers[],int len)
{
    int fsum=0;
    for(int i=0;i<len;i++){
        fsum = fsum + numbers[i];
    }
    return fsum;
}
