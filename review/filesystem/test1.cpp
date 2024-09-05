#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("test.txt",ios::out);// write (ios::out)
    if(myfile.is_open()){
        myfile << "Hello\n";
        myfile << "World!\n";
    }
    myfile.close();

    return 0;
}