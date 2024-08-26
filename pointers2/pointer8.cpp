#include <iostream>
#include <memory>
using namespace std;

class MyClass {
    public:
        MyClass(){
            cout << "Constructor invoked :"<<endl;
        }
        ~MyClass(){
            cout << "Destructor invoked :"<<endl;
        }
};
int main(){  
    shared_ptr<MyClass> shptr1 = make_shared<MyClass>();   
    cout << "shared count "<< shptr1.use_count()<<endl;
    {
    shared_ptr<MyClass> shptr2 = shptr1;
    cout << "shared count "<< shptr1.use_count()<<endl;
    }
    cout << "shared count "<< shptr1.use_count()<<endl;

    return 0;
}