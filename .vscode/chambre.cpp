#include<iostream>
#include"chambre.h"
chambre::chambre(int numero,std::string type,double prix):_numero(numero),_type(type),_prix(prix) {}
int chambre::getnumero() const{return _numero;}
std::string chambre::gettype()const {return _type;}
double chambre::getprix()const{return _prix;}
void chambre::setnumero(int n){_numero=n;}
void chambre::settype(std::string ty){_type=ty;}
void chambre::setprix(double pr){_prix=pr;}
