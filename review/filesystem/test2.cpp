#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("test.txt",ios::out);
    if(myfile.is_open()){
        myfile << "Hello\n";
        myfile << "World!\n";
    }
    myfile.close();

    myfile.open("test.txt",ios::app);//append new things => ios::app
    if(myfile.is_open()){
        myfile << "How are you?";
    }
    myfile.close();
    return 0;
}