#include "reservation.h"
#include <iostream>

// Constructeur avec validation
Reservation::Reservation(Date dateDebut, int nbNuits, std::string idHotel, int idChambre, std::string idClient, double prixParNuit)
    : _dateDebut(dateDebut), _nbNuits(nbNuits), _idHotel(idHotel), _idChambre(idChambre), _idClient(idClient) {
    if (nbNuits <= 0) {
        std::cerr << "Erreur: Le nombre de nuits doit être positif !" << std::endl;
        _nbNuits = 1;
    }
    calculerMontantTotal(prixParNuit);
}

// Getters
Date Reservation::getDateDebut() const { return _dateDebut; }
int Reservation::getNbNuits() const { return _nbNuits; }
std::string Reservation::getIdHotel() const { return _idHotel; }
int Reservation::getIdChambre() const { return _idChambre; }
std::string Reservation::getIdClient() const { return _idClient; }
double Reservation::getMontantTotal() const { return _montantTotal; }

// Setters
void Reservation::setDateDebut(Date newDate) {
    _dateDebut = newDate;
}

void Reservation::setNbNuits(int newNbNuits, double prixParNuit) {
    if (newNbNuits > 0) {
        _nbNuits = newNbNuits;
        calculerMontantTotal(prixParNuit);
    } else {
        std::cerr << "Erreur: Le nombre de nuits doit être positif !" << std::endl;
    }
}

// Fonction pour calculer le montant total
void Reservation::calculerMontantTotal(double prixParNuit) {
    _montantTotal = _nbNuits * prixParNuit;
}

// Affichage des informations de la réservation
void Reservation::afficherReservation() const {
    std::cout << "Réservation - Client: " << _idClient
              << ", Hôtel: " << _idHotel
              << ", Chambre: " << _idChambre
              << ", Date: " << _dateDebut.toString()
              << ", Nombre de nuits: " << _nbNuits
              << ", Montant total: " << _montantTotal << " $" << std::endl;
}
