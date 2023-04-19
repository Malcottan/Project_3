#include <iostream>
using namespace std;

int main(){
    int q = 2;
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