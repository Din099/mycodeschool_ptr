//mycodeschool
//Pointers and dynamic memory Stack vs Heap
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;//goes on stack
    int *p;
    p = (int *)malloc(sizeof(int));//Memory block allocated on Heap memory section
    *p = 10;
    printf("%d\n",*p);
    free(p);
    p = (int *)malloc(20*sizeof(int));//dynamically allocating the memory
    for(int i=0; i<20; i++)
    {
        printf("%d\n",p[i]);
    }
}