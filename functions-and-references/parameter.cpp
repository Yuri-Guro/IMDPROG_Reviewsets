#include <iostream>
#include <string>

using namespace std;

void cName(string name){
    cout << "My name is " << name << " and I'm a cat" << endl;
}

int cAge(string name, int age){
    cout << "My name is " << name << " and I'm " << age << " years old" << endl;
    return age;
}

int main(){
    cName("Whiskers");
    cName("Mittens");
    cName("Fluffy");
    cName("Amouri");
    
    cAge("Whiskers", 3);
    cAge("Mittens", 5);
    cAge("Fluffy", 2);
    cAge("Amouri", 4);
    return 0;
}