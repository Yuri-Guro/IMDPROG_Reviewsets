#include <iostream>
#include <string>

using namespace std;

string cName = "Amouri";
string &aName = cName;
string hName = "James";
string &jName = hName;

int main(){
    cout << "Hi, my name is " << jName << " and I have a cat named " << aName << "!" << endl;
    cout << cName << " is a very cute cat!" << endl;
    cout << hName << " Loves " << aName << " very much!" << endl;
    return 0;
}