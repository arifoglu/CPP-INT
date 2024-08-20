#include <iostream>
using namespace std;

int getMin(int numbers[],int size){
    int min = numbers[0];
    for(int i = 0;i < size;i++){
        if(numbers[i]< min){
            min = numbers[i];
        }
    }
    return min;
}
int getMax(int numbers[],int size){
    int max = numbers[0];
    for(int i = 0;i < size;i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}
int main(){
    int numeros[5] = { 2,5,-2,34,41 };
    cout << "Min of this array is : " << getMin(numeros,5)<<endl;
    cout << "Max of this array is : " << getMax(numeros,5)<<endl;

    return 0;
}