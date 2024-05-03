//mycodeschool
//Function pointers in C/C++ second example
#include<stdio.h>
#include<stdlib.h>
void PrintHW(char* name){
    printf("Hello %s\n", name);
}
int Add (int a, int b)
{
    return a+b;
}
int main()
{
    void (*ptr)(char*);
    ptr = PrintHW;
    ptr("Tom");
}