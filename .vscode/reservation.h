#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>
#include "date.h"

class Reservation {
private:
    Date _dateDebut;
    int _nbNuits;
    std::string _idHotel;
    int _idChambre;
    std::string _idClient;
    double _montantTotal;

public:
    // Constructeur
    Reservation(Date dateDebut, int nbNuits, std::string idHotel, int idChambre, std::string idClient, double prixParNuit);

    // Getters
    Date getDateDebut() const;
    int getNbNuits() const;
    std::string getIdHotel() const;
    int getIdChambre() const;
    std::string getIdClient() const;
    double getMontantTotal() const;

    // Setters
    void setDateDebut(Date newDate);
    void setNbNuits(int newNbNuits, double prixParNuit);

    // Fonction pour calculer le montant total
    void calculerMontantTotal(double prixParNuit);

    // Affichage des informations de la réservation
    void afficherReservation() const;
};

#endif // RESERVATION_H
