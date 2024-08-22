#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Size : " ;
    cin  >> size;
    //int myArr[size];
    int* myArr = new int[size];


    for(int i = 0; i < size ;i++){
        cout << "Array[" << i <<"] : ";
        cin >> myArr[i];
    }
    
    for(int i = 0; i < size ;i++){
        cout << myArr[i]<<" ";
    }
    cout << endl;
    cout << *myArr <<endl;
    cout << myArr <<endl;
    myArr = NULL;

    return 0;
}