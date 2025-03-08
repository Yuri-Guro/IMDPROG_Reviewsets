#include <iostream>
#include <string>

using namespace std;

void posa(string &a, string &b) {
    string c = a;
    a = b;
    b = c;
}

int main() {
    string a = "Amouri";
    string b = "Spot";

    cout << "Bago Pinagpalit:" << endl;
    cout << "Pusa ni James: " << a << " " << "Pusa ni Belle: " << b << endl;

    posa(a, b);

    cout << "Pagkatapos Pinagpalit:" << endl;
    cout << "Pusa ni James: " << a << " " << "Pusa ni Belle: " << b << endl;

    return 0;
}