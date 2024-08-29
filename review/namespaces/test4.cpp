#include <iostream>

namespace namespace1{
    int age =  55;
}
namespace namespace2{
    int age =  44;
}
int main(){
    std::cout << namespace1::age <<std::endl;
    std::cout << namespace2::age <<std::endl;

    return 0;
}