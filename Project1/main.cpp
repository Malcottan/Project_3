#include <iostream>
using namespace std;

int main(){
    int w = 1,e = 1;
    while(true){
        cout << w << " * " << e << " = " << w*e << endl;
        e++;
        if(e == 11){
            w++;
            e = 1;
            if(w == 11){
                break;
            }
        }
    }
}