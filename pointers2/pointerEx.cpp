#include <iostream>
using namespace std;

int main(){
    int myArray[] = {1,2,3,4,5};
    int* ptr = myArray;
    cout << myArray[0]<<endl; // => index0 = 1;
    cout << myArray<<endl;    // => addres of Array = 0x16fb
    cout << *myArray<<endl;   // => index0 = 1;
    cout << ptr <<endl;       // => addres of Array = 0x16fb
    cout << *ptr <<endl;      // => index0 = 1;
    cout << myArray[1]<<endl; // => index1 = 2;
    cout << *(ptr+1) <<endl;  // => index1 = 2;
    cout << &myArray[0]<<endl;// => address of Array0 = 0X16fb

    return 0;
}