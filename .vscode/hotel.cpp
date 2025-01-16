#include "hotel.h"
#include <iostream>

Hotel::Hotel(std::string id, std::string nom, std::string ville)
    : _id(id), _nom(nom), _ville(ville) {}

// Getters
std::string Hotel::getId() const { return _id; }
std::string Hotel::getNom() const { return _nom; }
std::string Hotel::getVille() const { return _ville; }
std::vector<Chambre> Hotel::getChambres() const { return _chambres; }

// Ajouter une chambre
void Hotel::ajouterChambre(const Chambre& chambre) {
    _chambres.push_back(chambre);
}

// Supprimer une chambre par numéro
bool Hotel::supprimerChambre(int numero) {
    for (auto it = _chambres.begin(); it != _chambres.end(); ++it) {
        if (it->getNumero() == numero) {
            _chambres.erase(it);
            return true;
        }
    }
    return false;
}

// Affichage des informations de l'hôtel
void Hotel::afficherHotel() const {
    std::cout << "Hôtel: " << _nom << " (" << _id << "), Ville: " << _ville << std::endl;
    std::cout << "Chambres disponibles: " << _chambres.size() << std::endl;
    for (const auto& chambre : _chambres) {
        chambre.afficherChambre();
    }
}
