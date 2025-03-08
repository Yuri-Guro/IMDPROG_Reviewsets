#include <iostream>
using namespace std;

int main(){
    int n, i;

    do{
        cout << "How many meows? ";
        cin >> n;
        if (n <= 10){
            for (i = 1; i <=10; i++){
                cout << "Meow" << endl;
            }
        }
        else{
            cout << "Too many meows >:(" << endl;
        
        }
    }
    while(n <= 10);
    return 0;
    
}