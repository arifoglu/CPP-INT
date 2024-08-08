#include <iostream>
using namespace std;

void example(int& x){
    x++;
}

int main(){
    int a = 10;
    int* b = &a;
    cout << a << " " << b<<endl;
    cout << a << " " << *&a<<endl;
    cout << b << " " << *b<<endl;

    return 0;
}