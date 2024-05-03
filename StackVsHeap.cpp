//mycodeschool
//pointers and dynamic memory
#include<iostream>
using namespace std;    
int main()
{
    int a;
    int *p;
    p = new int;//reserving space in heap for int type variables
    *p = 10;
    cout<< *p <<endl;
    delete p;//freeing up the space in heap
    p = new int[20];//reserving space in heap for array of 20 integers
    for(int i=0; i<20; i++)
    {
        cout << p[i] << endl;
    }
    delete [] p;
}