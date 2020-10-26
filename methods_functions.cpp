#include <iostream>

using namespace std;

class ABC
{
    public:
        int data;
        void getdata()    //function declared inside the class
        {
           cout<<"Enter number: ";
           cin>>data;
        }
       void putdata();
};
void ABC::putdata()        //function declared outside the class
           {
            cout<<"The number entered is "<<data<<endl;
           }
int main()
{
    ABC obj;
    obj.getdata();
    obj.putdata();
}


