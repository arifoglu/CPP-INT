#include <iostream>
#include <string>
using namespace std;

class User{
    public:
        string name;
};

int main(){
    User *u = new User();
    u->name = "AA";
    cout << "pointer of u : "<< u << ". points of u : "<< u->name <<endl;
    delete u;
    return 0;
}