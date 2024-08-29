#include <iostream>
using namespace std;

int main(){
    int a = 4;
        cout << "Memory address "<< &a << " value of a = " << a <<endl;
    int* b = &a;
        cout << "Memory address "<< b << " value of b = " << *b <<endl;
    *b = 5;
        cout << "Memory address "<< &a << " value of a = " << a <<endl;
        cout << "Memory address "<< b << " value of b = " << *b <<endl;

    int& c = a;
        cout << "Memory address "<< &c << " value of c = " << c <<endl;
    c = 6;    
        cout << "Memory address "<< &a << " value of a = " << a <<endl;
        cout << "Memory address "<< b << " value of b = " << *b <<endl;
        cout << "Memory address "<< &c << " value of c = " << c <<endl;
    
    int* d = &c;  
        cout << "Memory address "<< d << " value of d = " << *d <<endl;
    *d = 7;    
        cout << "Memory address "<< &a << " value of a = " << a <<endl;
        cout << "Memory address "<< b << " value of b = " << *b <<endl;
        cout << "Memory address "<< &c << " value of c = " << c <<endl;
        cout << "Memory address "<< d << " value of d = " << *d <<endl;
        
    return 0;
}