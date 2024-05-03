//mycodeschool
//Character arrays and pointers
#include<stdio.h>
#include<string.h>
int main()
{
    // char c[5];
    // c[0] = 'J';
    // c[1] = 'O';
    // c[2] = 'H';
    // c[3] = 'N';
    // c[4] = '\0';
    char C[]="John";
    int len = strlen(C);
    printf("Length = %d\n", len);
    //length will not count the Null character '\0' in C
    printf("Size of C is %d\n",sizeof(C));
    //sizeof(C) will count all the characters including Null character hence size of C is 5 and length is 4.
}