#include <iostream>
using namespace std;

int main(){
    int a = 5;
    cout << "a = "<< a << " Addres of a = "<< &a << endl;
    
    int* ptr = &a;
    cout << "a = "<< a << " Pointer of a = "<< ptr << endl;
    cout << "a = "<< *ptr << endl;

    *ptr = 10;
    cout << "a = "<< a << " Addres of a = "<< &a << endl;

    int b ;
    int* ptr2 = &b ;
    *ptr2 = 12;
    cout <<" Addres of b "<< &b << " " << *ptr2 <<endl; 

    return 0;
}