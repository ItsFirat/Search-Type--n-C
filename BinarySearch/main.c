#include <stdio.h>
#include <stdlib.h>

int matris[] = {2,3,4,6,7,12,34,67,89};
int BinearySearch(int A[],int , int);

int main()
{
    int number, flag=0;
    int N;
    printf("enter number : ");
    scanf("%d" ,&number);

    N = sizeof(matris) / sizeof(matris[0]);
    flag = BinearySearch(matris,N,number);

    if(flag == 1){
        printf("number found!");
    }
    else{
        printf("not found!");
    }

    return 0;
}
int BinearySearch(int A[],int N , int search){
    int middle, bottom = 0;
    int top = N-1;

    while(top>=bottom){
        middle = (top + bottom)/2;
        if(search > A[middle]){
            bottom = middle + 1;
        }
        else if(search < A[middle]){
            top = middle - 1;
        }
        else{
            return 1;
        }
    }
    return 0;
}

