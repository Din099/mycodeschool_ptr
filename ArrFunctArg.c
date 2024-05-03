//mycodescool
//Array are always passed to function by reference
#include<stdio.h>
void print(char* C)
{
    
    while(*C != '\0')//can use C[i] or *(C+i)
    {
        printf("%c",*C);//can use C[i]
       C++;
    }
}
int main()
{
    char C[20] =  "Hello";
    print(C);
}