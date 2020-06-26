#include <iostream>

int main(){

    double num1 , num2;

    //2数の入力
    std::cout << "Import number_1" << std::endl;
    std::cin >> num1;
    std::cout << "Import number_2" << std::endl;
    std::cin >> num2;

    //四則演算結果の表示
    std::cout << "Summation is " << num1 + num2 << std::endl << "Difference is " << num1 - num2 << std::endl << "Product is " << num1 * num2 << std::endl << "Quotient is " << num1 / num2 << std::endl;

    return 0;

}