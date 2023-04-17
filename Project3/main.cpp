#include <iostream>
using namespace std;

int main(){
    cout << 2 << endl;
    cout << 3 << endl;
    cout << 5 << endl;
    cout << 7 << endl;
    int q = 10;
    while(q <= 1000){
        bool isPrime = true;
        for(int w = 2; w < q; w++){
            if(q % w == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            cout << q << endl;
        }
        /*
        if((q % w) != 0){
                cout << q << endl;
            }
            */
        q++;
    }
}