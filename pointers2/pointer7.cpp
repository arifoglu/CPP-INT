#include <iostream>
#include <memory>
using namespace std;

int main(){
    unique_ptr<int> unptr1 = make_unique<int>(25);
    cout << unptr1 <<endl;
    cout << *unptr1 <<endl;
    
    // if we want to share this unique pointer we have to move this pointer s ownership
    unique_ptr<int> unptr2 = std::move(unptr1);
    cout << unptr2 <<endl;
    cout << *unptr2 <<endl;

    // after moving pointers ownership ,first pointers is being NULL
    cout << unptr1 <<endl; // NULL 0x0
   

    return 0;
}