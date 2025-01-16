#include"chambre.h"
#include<vector>

class hotel {
    private:
std::string _identifiant;
std::string _nom;
std::string _ville;
std::vector<chambre> _chambre;
public:
hotel(std::string identifiant,std::string nom,std::string ville);


};