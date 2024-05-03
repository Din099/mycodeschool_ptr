//mycodeschool
//Array as function argument
#include<stdio.h>
int SumOfElements(int* A, int size)//int *A is same as int A[]
{
    int sum =0; 
    for(int i=0;i<size;i++)
    {
        sum += A[i];//A[i] is same as *(A+i)
    }
    return sum;
}
int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = SumOfElements(A, size);// A is same as &Ap[]
    printf("Sum of Elements = %d\n", total);
}