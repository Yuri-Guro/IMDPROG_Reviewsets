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
    cName("Toothless");
    cName("Bebeng");
    cName("Spot");
    cName("Amouri");
    
    cAge("Toothless", 3);
    cAge("Bebeng", 5);
    cAge("Spot", 2);
    cAge("Amouri", 4);
    return 0;
}