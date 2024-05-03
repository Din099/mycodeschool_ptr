//mycodeschool
//Pointers as function returns in C/C++
#include<stdio.h>
#include<stdlib.h>
void PrintHW()
{
    printf("Hello World!\n");
}
int *Add(int *a, int *b)// called fuunction returns pointer to integer
{
    int *c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
    //int c = (*a) + (*b);
    //return &c;
}
int main()
{
    int a = 2, b = 4;
    int* ptr = Add(&a,&b);
    PrintHW();
    printf("Sum = %d\n", *ptr);
}