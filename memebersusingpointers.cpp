#include <iostream>

using namespace std;

class ABC
{
public:
    int data;
    void getdata()
       {
      cout << "Enter data:";
      cin >> data;
      cout <<"The number is";
          }

};

int main(){
   ABC obj;
   int *p;
   obj.data=4;
   p = &obj.data;
   cout<<*p;

   ABC *q;
   q->getdata();
}
