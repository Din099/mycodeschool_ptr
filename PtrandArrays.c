//mycodeschool 
//Pointers and Arrays
#include<stdio.h>

int main()
{
    int A[]={2,4,5,8,1};
    // printf("%d\n",A);
    // printf("%d\n",&A[0]);
    // printf("%d\n",A[0]);
    // printf("%d\n",*A);

    for(int i=0; i<5;i++)
    {
        printf("%d\n",&A[i]);
        printf("%d\n",A+i);
        printf("%d\n",A[i]);
        printf("%d\n",*(A+i));
    }
}
