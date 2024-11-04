#include <iostream>

int addNumbers(int first_param, int second_param){
    int result = first_param+second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param){
    int result = first_param*second_param;
    return result;
}
int main(){
    int sum;
    sum = addNumbers(24,9);
    std::cout<<"Sum:"<< sum << std::endl;
    std::cout<<"Sum:"<< addNumbers(43,-9) << std::endl;

    std::cout<<"Sum:"<< multiplyNumbers(43,-9) << std::endl;
    return 0;
}
 