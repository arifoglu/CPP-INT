#include <iostream>
#include <vector>
using namespace std;

void change(vector<int> &datas){
    for(int i = 0; i < datas.size();i++){
        datas[i]++;
        cout << datas[i];
    }
    cout <<endl;
}

int main(){
    vector<int> data = {1,2,3,4,5};
    cout << &data <<endl;

    change(data);

    for(int x : data){
        cout << x;
    }
    cout <<endl;
    cout << &data <<endl;


    
    return 0;
}