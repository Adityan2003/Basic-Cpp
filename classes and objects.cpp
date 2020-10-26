#include <iostream>

using namespace std;

class ABC
{
    private: int number;
    protected: int data;
    public:
        void getdata()
                  {
             cout<<"Enter the first number:";
             cin>>number;
             cout<<"Enter the second number:";
             cin>>data;
        }

        void putdata(){
             cout<<"The first number is "<<number;
             cout<<"The second number is "<<data;
                }
};

int  main()
{
    ABC obj;
    obj.number=10; //number cannot be accessed directly through the main function as it is private
    obj.getdata();
    obj.putdata();
    return 0;
}
