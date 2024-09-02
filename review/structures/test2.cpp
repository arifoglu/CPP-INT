#include <iostream>
using namespace std;

struct SmartPhone{
    string name;
    int storage;
    string color;
    float price;
};

void printSmartphone(SmartPhone smartphone){
    cout << "Model : "<<smartphone.name<<endl;
    cout << "Storage : "<<smartphone.storage<<endl;
    cout << "Color : "<<smartphone.color<<endl;
    cout << "Price : "<<smartphone.price<<endl;
    cout <<endl;
}
int main(){
    SmartPhone smartphone1;
    smartphone1.name = "iphone 12";
    smartphone1.storage = 64;
    smartphone1.color = "grey";
    smartphone1.price = 999.99;

    printSmartphone(smartphone1);

    SmartPhone smartphone2;
    smartphone2.name = "Samsung A12";
    smartphone2.storage = 128;
    smartphone2.color = "blue";
    smartphone2.price = 666.66;

    printSmartphone(smartphone2);
    


    return 0;
}