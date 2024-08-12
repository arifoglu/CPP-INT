#include <iostream>
using namespace std;

void change(int *num)
{
    *num = 11;
    cout << num <<endl;
}

int main(){
    int x = 10;
    change(&x);
    cout << x <<endl;

    
    return 0;
}