#include <iostream>

using namespace std;

class ABC1
{
    private: int number;
    public:
       void getdata()
       {
           cout<<"Enter number: ";
           cin>>number;
           cout<<number<<endl;
       }
       void putdata()
       {
           cout<<"The number entered is "<<number<<endl;
       }
};

int main()
{
    ABC1 obj1[3];
    ABC1 obj;
    for(int i=0;i<3;i++){
         obj1[i].getdata();
         obj1[i].putdata();
    }
}

