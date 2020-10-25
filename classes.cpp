#include <iostream>

using namespace std;

class Book{
   public:
       string title;
       string author;
       int pages;

       Book(){
           title = "no Title";
           author = "no Author";
           pages = 0;
       }

       Book(string aTitle, string aAuthor, int aPages){
           title = aTitle;
           author = aAuthor;
           pages = aPages;
         }
};

int main()
{
    Book book1("Angels and Demons","Dan Brown",400);
    Book book2("The Godfather","Mario Puzo",600);
    Book book3;

    cout << book1.title<<endl;
    cout << book2.title<<endl;
    cout << book3.title;

    return 0;
}
