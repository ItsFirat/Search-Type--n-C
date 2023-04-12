#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matrix[10];
    int i,flag = 0;
    int number;

    for(i=0; i<10; i++){
        int x = 1 + rand() % 20;
        matrix[i] = x;
        printf("%3d", matrix[i]);
    }
    z :
    printf("\nenter number you want to search : \n");
    scanf("%d" ,&number);

    for(i=0; i<10; i++){
        if(number == matrix[i]){
            printf("number found!! %d. order", i+1);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("not found\n");
        goto z;
    }


    return 0;
}
