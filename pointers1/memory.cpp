#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int *y = &x;
    cout << "reference of x : "<< &x <<endl; 
    cout << "pointer of x : "<< y <<endl; 
    cout << "variable of x : "<< *y <<endl; 
    cout << "*****************"<<endl;

    int *a = new int(7);
    cout << "The pointer "<< a  << " points to "<< *a <<endl;
    delete a;
    
    return 0;
}