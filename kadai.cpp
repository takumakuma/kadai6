#include <iostream>

int main(){

   char string1[256];
   char string2[256];

   std::cout << "Imput first sentence" << std::endl;
   std::cin >> string1;
   std::cout << "Imput second sentence" << std::endl;
   std::cin >> string2;
   std::cout << string1 << string2 <<std::endl;
    return 0;

}