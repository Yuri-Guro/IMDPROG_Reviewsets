#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many Meows?: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << " Meow" << endl;
    }
    return 0;
}