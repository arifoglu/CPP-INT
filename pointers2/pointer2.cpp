#include <iostream>
using namespace std;

void printNumber(int* numberPtr){
    cout << *numberPtr << endl;
}
void printLetter(char* letterPtr){
    cout << *letterPtr << endl;
}
void print(void* ptr,char type){
    switch(type){
        case 'i' : cout << *(int*)ptr<<endl; break;
        case 'c' : cout << *(char*)ptr<<endl; break;
    }
}
int main(){
    int number = 5;
    cout << "&number = " << &number <<endl;
    printNumber(&number);

    char letter = 'a';
    cout << "&letter = "<< static_cast<void*> (&letter) <<endl;
    printLetter(&letter);

    print(&number,'i');
    print(&letter,'c');
    return 0;
}