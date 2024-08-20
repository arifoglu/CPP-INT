#include <iostream>
using namespace std;

int main(){
    int numeros[5];
    for(int i = 0; i < 5 ;i++){
        cout <<"Numeros : ";
        cin >> numeros[i];
    }
    for(int i = 0;i < 5 ;i++){
        //cout << numeros[i] << " ";
        cout << *(numeros+i) << " ";
    }
    return 0;
}