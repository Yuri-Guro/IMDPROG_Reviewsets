#include <iostream>
using namespace std;

void countdown(int n);
void even(int n);
void odd(int n);

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    countdown(n);
    return 0;
}

void countdown(int n) {
    if (n % 2 == 0) {
        even(n);
    } else {
        odd(n);
    }
}

void even(int n) {
    if(n >= 1){
        cout << n << " - Even" << endl;
        odd(n-1);
    }
}

void odd(int n) {
    if(n >= 1){
        cout << n << " - Odd" << endl;
        even(n-1);
    }
}