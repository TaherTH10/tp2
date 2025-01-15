#include<iostream>
#include"client.h"
client::client(std::string identifiant,std::string nom,std::string prenom): _identifiant(identifiant),_nom(nom),_prenom(prenom) {}
std::string client::getidentifiant() const{return _identifiant;}
std::string client::getnom() const{return _nom;}
std::string client::getprenom() const{return _prenom;}
void client::setidentifiant(std::string id){_identifiant=id;}
void client::setnom(std::string n){_nom=n;}
void client::setprenom(std::string pre){_prenom=pre;}
