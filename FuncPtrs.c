//mycodeschool
//Function pointers in C/C++
#include<stdio.h>
#include<stdlib.h>
int Add (int a, int b)
{
    return a+b;
}
int main()
{
    int c;
    //pointer to function that should take (int, int) as an argument/parameter and return int    
    int (*p)(int, int);
    p = Add;//equivalent to p = &Add
    c = p(2,3);//derefencing and executing the function Add ==> c = (*p)(2,3)
    // equivalent to c = (*p)(2,3);
    printf("%d\n", c);
}