#include<iostream>
#include"client.h"
int main() {
    client taher("th","bazzi","taher");
    std::cout<<taher.getnom()<<std::endl;
    std::cout<<taher.getidentifiant();
return 0;
}
