#include <iostream>
#include <string>

using namespace std;

struct posa{
    string name;
    int age;
    string color;
};

int main() {
    cout << "Mga posa before magpalit" << endl << endl;

    posa belle;

    belle.name = "Spot";
    belle.age = 1;
    belle.color = "Dark Gray na Sobrang Makalawang";

    posa james;

    james.name = "Amouri";
    james.age = 2;
    james.color = "Black na May Makalawang";

    cout << "Name ng Posa ni Belle: " << belle.name << endl;
    cout << "Age ng Posa ni Belle: " << belle.age << endl;
    cout << "Color ng Posa ni Belle: " << belle.color << endl << endl;

    cout << "Name ng Posa ni James: " << james.name << endl;
    cout << "Age ng Posa ni James: " << james.age << endl;
    cout << "Color ng Posa ni James: " << james.color << endl << endl;

    cout << "Mga posa after magpalit" << endl << endl;

    typedef posa cat;

    cat jamesC;

    jamesC.name = "Spot";
    jamesC.age = 1; 
    jamesC.color = "Dark Gray na Sobrang Makalawang";

    cat belleC;

    belleC.name = "Amouri";
    belleC.age = 2;
    belleC.color = "Black na May Makalawang";

    cout << "Name ng Posa ni Belle: " << belleC.name << endl;
    cout << "Age ng Posa ni Belle: " << belleC.age << endl;
    cout << "Color ng Posa ni Belle: " << belleC.color << endl << endl;

    cout << "Name ng Posa ni James: " << jamesC.name << endl;
    cout << "Age ng Posa ni James: " << jamesC.age << endl;
    cout << "Color ng Posa ni James: " << jamesC.color << endl << endl;

    return 0;
}
