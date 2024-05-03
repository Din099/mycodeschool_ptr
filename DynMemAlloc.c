//mycodeschool
//Dynamic memory allocation in C - malloc calloc realloc free
#include<stdio.h>
#include<stdlib.h>
void UserMalloc()
{
    int *p1;
    p1 = (int*)malloc(sizeof(int));
    *p1 = 100;
    printf("The address of variable using Malloc in Heap is %d\n",p1);
    printf("The value of variable using Malloc is %d\n", *p1);
    free (p1);
}

void UserCalloc()
{
    int* p2;
    p2 = (int *) calloc(5, sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("The variable in calloc are p %d\n", p2[i]);
    }
}

void UserRealloc()
{
    int n;
    int* p3;
    n = 10;
    p3 = (int *)realloc(p3, n);
    for(int i=0; i<n; i++)
    {
        printf("The variable in Realloc are p %d\n", p3[i]);
    }

}
int main()
{
    UserMalloc();
    UserCalloc();
    UserRealloc();
}