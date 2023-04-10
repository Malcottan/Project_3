#include <iostream>
using namespace std;

main(){
    int a,w = 1;
    cin >> a;
    if (a > 0){
        while(a != 1){
            w = a * w;
            a--;
        }
        cout << w << endl;
    } else {

        if (a == 0 or a == 1){
        cout << "1" << endl;
        }
    }
}