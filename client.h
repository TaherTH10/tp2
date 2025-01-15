#include<iostream>
class client {
private:
std::string _identifiant;
std::string _nom;
std::string _prenom;
public:
client(std::string identifiant,std::string nom,std::string prenom);
std::string getidentifiant() const;
std::string getnom() const;
std::string getprenom() const;

void setidentifiant(std::string id);
void setnom(std::string n);
void setprenom(std::string pre);





};
