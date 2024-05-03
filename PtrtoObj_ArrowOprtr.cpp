#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public: 
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;//another way of creating object
    //(*ptr).setData(1,23); is exactly same as
    ptr->setData(1,34);
    //(*ptr).getData();is exatcly same as
    ptr->getData();

    //Array of Objects
    Complex *ptr1 = new Complex[3];
    ptr1->setData(2,24);
    ptr1->getData();
     
    return 0;
}