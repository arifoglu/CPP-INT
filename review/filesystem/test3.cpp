#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream myfile;
    myfile.open("test.txt",ios::in);// to read => ios::in
    if(myfile.is_open()){
        string line;
        while(getline(myfile,line)){
            cout << line <<endl;
        }
        myfile.close();
    }

    return 0;
}