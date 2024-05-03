//mycodeschool
//Character arrays and pointers - part 2
#include<stdio.h>
#include<string.h> 
void print(const char* C)//const keyword to read-only info from the location pointed by *C and not modifying the contents of string/array.
{
    while(*C != '\0')
    {
        printf("%c",*C);
        C++;
    }
}
int main()
{
    char C[20] = "HELLO";
    print(C);
}