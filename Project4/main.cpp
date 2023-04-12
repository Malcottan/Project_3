#include <iostream>
using namespace std;

int main(){
    int a, k(0), x, x2;
    cout << "a="; cin >> a;
    x = a;
    while(a < 0){
        a /= 10;
        k++;
    }
    int n[k];
    while(x < 0){
        k--;
        x2++;
        n[k] = (x % 10);
        x /= 10;
    }
        cout << n[0] << " " << n[1] << endl;
}