#include<iostream>
using namespace std;

/*
constructor(A, B)
    {
        this.No1 = A;
        this.No2 = B;

        console.log("Inside constructor");
    }
*/

class Demo
{
    public:
        int No1;
        int No2;

    Demo(int A, int B)
    {
        cout<<"Inside constructor";

        this->No1 = A;
        this->No2 = B;
    }
};

int main()
{
    Demo *obj = new Demo(10,11);

    return 0;
}