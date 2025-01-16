
class chambre {
    private:
int _numero;
std::string _type;
double _prix;
public:
chambre(int numero,std::string type,double prix);
int getnumero() const;
std::string gettype() const;
double getprix() const;

void setnumero(int n);
void settype(std::string ty);
void setprix(double pr);

};