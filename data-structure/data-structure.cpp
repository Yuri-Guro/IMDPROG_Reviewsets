#include <iostream>
#include <string>

using namespace std;

struct cat{
    string name;
    int age;
    string color;
};

int main(){
    cat jamesA;
    jamesA.name = "Amouri";
    jamesA.age = 2;
    jamesA.color = "Black na May Kalawang";

    cat jamesB;
    jamesB.name = "Bebeng";
    jamesB.age = 4;
    jamesB.color = "Siamese na walang balahibo";

    cat BelleA;
    BelleA.name = "Spot";
    BelleA.age = 1;
    BelleA.color = "Dark Gray na Sobrang Makalawang";

    cat BelleB;
    BelleB.name = "Toothless";
    BelleB.age = 2;
    BelleB.color = "Black na walang kalawang";


    cout << "Name ng Posa ni James: " << jamesA.name << endl;
    cout << "Age ng Posa ni James: " << jamesA.age << endl;
    cout << "Color ng Posa ni James: " << jamesA.color << endl << endl; 

    cout << "Name ng Posa ni James: " << jamesB.name << endl;
    cout << "Age ng Posa ni James: " << jamesB.age << endl;
    cout << "Color ng Posa ni James: " << jamesB.color << endl << endl;

    cout << "Name ng Posa ni Belle: " << BelleA.name << endl;
    cout << "Age ng Posa ni Belle: " << BelleA.age << endl;
    cout << "Color ng Posa ni Belle: " << BelleA.color << endl << endl;

    cout << "Name ng Posa ni Belle: " << BelleB.name << endl;
    cout << "Age ng Posa ni Belle: " << BelleB.age << endl;
    cout << "Color ng Posa ni Belle: " << BelleB.color << endl << endl;

    return 0;
}