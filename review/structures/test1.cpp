#include <iostream>
using namespace std;

struct SmartPhone{
    string name;
    int storage;
    string color;
    float price;
};

int main(){
    SmartPhone smartphone1;
    smartphone1.name = "iphone 12";
    smartphone1.storage = 64;
    smartphone1.color = "grey";
    smartphone1.price = 999.99;

    cout << "Model : "<<smartphone1.name<<endl;
    cout << "Storage : "<<smartphone1.storage<<endl;
    cout << "Color : "<<smartphone1.color<<endl;
    cout << "Price : "<<smartphone1.price<<endl;
    cout <<"***************"<<endl;

    SmartPhone smartphone2;
    smartphone1.name = "Samsung A12";
    smartphone1.storage = 128;
    smartphone1.color = "blue";
    smartphone1.price = 666.66;
    
    cout << "Model : "<<smartphone1.name<<endl;
    cout << "Storage : "<<smartphone1.storage<<endl;
    cout << "Color : "<<smartphone1.color<<endl;
    cout << "Price : "<<smartphone1.price<<endl;
    cout <<"***************"<<endl;

    return 0;
}