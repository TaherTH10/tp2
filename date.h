#include<iostream>

class date {
public:
 date(int month=1, int day=1,int annee=1);
 int month() const;
 int day() const;
 int annee() const;
 void updateMonth(int month);
 void updateDay(int day);
 void updateAnnee(int annee);
 void next();
 void back();
private:
 int _month;
 int _day;
 int _annee;
};
bool isDate(int month, int day,int annee);
int getDaysInMonth(int month);
int dayOfYear(date d);
std::string toString(date d);