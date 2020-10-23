#include <iostream>

using namespace std;

int main()
{
    string phrase = "Universe";
    cout<< phrase.length()<<"\n";
    cout<< phrase[2]<<"\n";
    phrase[0]='P';                //replace a particular index with something else
    cout<< phrase<<"\n";
    cout<< phrase.find("o")<<"\n";      //find a particular string
    cout<< phrase.find("r",4)<<"\n";    //find a particular string after an index value

    string substring;
    substring = phrase.substr(2,6);    //to access a particular substring of the main string
    cout<< substring;

    return 0;
}
