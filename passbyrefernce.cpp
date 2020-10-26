#include <iostream>

using namespace std;

class ABC
{
   public:
       int data;
       void getdata()
       {
           cout<<"Enter number:";
           cin>>data;
           cout<<"You entered:"<<data<<endl;
       }
       void putdata(ABC &obj)
       {
           obj.data= -obj.data;
           cout<<"Now number is changed to:"<<obj.data;
       }
};

int main()
{
    ABC obj1;
    obj1.getdata();
    obj1.putdata(obj1);
}
