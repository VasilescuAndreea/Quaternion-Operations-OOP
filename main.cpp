#include <iostream>
#include <cmath>
#include <string>

using namespace std;


class NumarCuaternion{
    double parteReala;
    double parteImaginaraI;
    double parteImaginaraJ;
    double parteImaginaraK;

public:
    NumarCuaternion(){
    }

    NumarCuaternion(double parteReala, double parteImaginaraI, double parteImaginaraJ, double parteImaginaraK)
    {
        this->parteReala = parteReala;
        this->parteImaginaraI = parteImaginaraI;
        this->parteImaginaraJ = parteImaginaraJ;
        this->parteImaginaraK = parteImaginaraK;
    }

    NumarCuaternion(NumarCuaternion &cpy) :NumarCuaternion(cpy.parteReala,  cpy.parteImaginaraI, cpy.parteImaginaraJ, cpy.parteImaginaraK){}

    ~NumarCuaternion(){
    }

    void setParteReala(double parteReala){
        this->parteReala = parteReala;
    }
    void setParteImaginaraI(double setParteImaginaraI){
        this->parteImaginaraI = setParteImaginaraI;
    }
    void setParteImaginaraJ(double setParteImaginaraJ){
        this->parteImaginaraJ = setParteImaginaraJ;
    }
    void setParteImaginaraK(double setParteImaginaraK){
        this->parteImaginaraK = setParteImaginaraK;
    }



    double getParteReala(){
        return parteReala;
    }
    double getParteImaginaraI(){
        return parteImaginaraI;
    }
    double getParteImaginaraJ(){
        return parteImaginaraJ;
    }
    double getParteImaginaraK(){
        return parteImaginaraK;
    }

    string afisare(){
        string out = "";
        out += to_string(parteReala);
        out += afisareParte(parteImaginaraI, 'i');
        out += afisareParte(parteImaginaraJ, 'j');
        out += afisareParte(parteImaginaraK, 'k');
        out += '\n';
        return out;
    }

    private: string afisareParte(double parte, char lit){
        string out = "";
        if(parte > 0){
            out = " + " + to_string(parte) + lit;
        }
        if(parte < 0){
            out = " - " + to_string(-parte) + lit;
        }
        return out;
    }

};

NumarCuaternion operator + (NumarCuaternion x1, NumarCuaternion x2){
    NumarCuaternion rezultat = NumarCuaternion(x1.getParteReala() + x2.getParteReala(),
                     x1.getParteImaginaraI() + x2.getParteImaginaraI(),
                     x1.getParteImaginaraJ() + x2.getParteImaginaraJ(),
                     x1.getParteImaginaraK() + x2.getParteImaginaraK());
    return rezultat;
}

NumarCuaternion operator - (NumarCuaternion x1, NumarCuaternion x2){
    NumarCuaternion rezultat = NumarCuaternion(x1.getParteReala() - x2.getParteReala(),
                     x1.getParteImaginaraI() - x2.getParteImaginaraI(),
                     x1.getParteImaginaraJ() - x2.getParteImaginaraJ(),
                     x1.getParteImaginaraK() - x2.getParteImaginaraK());
    return rezultat;
}

NumarCuaternion operator * (NumarCuaternion x1, NumarCuaternion x2){
    NumarCuaternion rezultat = NumarCuaternion(x1.getParteReala() * x2.getParteReala() - x1.getParteImaginaraI() * x2.getParteImaginaraI() - x1.getParteImaginaraJ() * x2.getParteImaginaraJ() - x1.getParteImaginaraK() * x2.getParteImaginaraK(),
                     x1.getParteReala() * x2.getParteImaginaraI() + x2.getParteReala() * x1.getParteImaginaraI() + x1.getParteImaginaraJ() * x2.getParteImaginaraK() - x1.getParteImaginaraK() * x2.getParteImaginaraK(),
                     x1.getParteReala() * x2.getParteImaginaraJ() - x1.getParteImaginaraI() * x2.getParteImaginaraK() + x1.getParteImaginaraJ() * x2.getParteReala() + x1.getParteImaginaraK() * x2.getParteImaginaraI(),
                     x1.getParteReala() * x2.getParteImaginaraK() + x1.getParteImaginaraI() * x2.getParteImaginaraJ() - x1.getParteImaginaraJ() * x2.getParteImaginaraI() + x1.getParteImaginaraK() * x2.getParteReala());
    return rezultat;
}

NumarCuaternion operator * (double d, NumarCuaternion nr){
    NumarCuaternion rezultat = NumarCuaternion(d * nr.getParteReala(), d * nr.getParteImaginaraI(), d * nr.getParteImaginaraJ(), d * nr.getParteImaginaraK());
    return rezultat;
}

NumarCuaternion operator / (NumarCuaternion x1, NumarCuaternion x2){
    NumarCuaternion rezultat = NumarCuaternion(x1.getParteReala() * x2.getParteReala() - x1.getParteImaginaraI() * x2.getParteImaginaraI() - x1.getParteImaginaraJ() * x2.getParteImaginaraJ() - x1.getParteImaginaraK() * x2.getParteImaginaraK(),
                     x1.getParteImaginaraI() * x2.getParteReala() + x1.getParteReala() * x2.getParteImaginaraI() + x1.getParteImaginaraJ() * x2.getParteImaginaraK() - x1.getParteImaginaraK() * x2.getParteImaginaraJ(),
                     x1.getParteReala() * x2.getParteImaginaraJ() - x1.getParteImaginaraI() * x2.getParteImaginaraK() + x1.getParteImaginaraJ() * x2.getParteReala() + x1.getParteImaginaraK() * x2.getParteImaginaraI(),
                     x1.getParteReala() * x2.getParteImaginaraK() + x1.getParteImaginaraI() * x2.getParteImaginaraJ() - x1.getParteImaginaraJ() * x2.getParteImaginaraI() + x1.getParteImaginaraK() * x2.getParteImaginaraI());
    return rezultat;
}

NumarCuaternion operator ~ (NumarCuaternion x1){
    NumarCuaternion rezultat = NumarCuaternion(x1.getParteReala(), -x1.getParteImaginaraI() , -x1.getParteImaginaraJ(), -x1.getParteImaginaraK());
    return rezultat;
}

void operator >> (istream& in, NumarCuaternion& nr)
{
    double value;

    cout << "r:";
    in>>value;
    nr.setParteReala(value);

    cout << "i:";
    in>>value;
    nr.setParteImaginaraI(value);

    cout << "j:";
    in>>value;
    nr.setParteImaginaraJ(value);

    cout << "k:";
    in>>value;
    nr.setParteImaginaraK(value);
}

ostream& operator << (ostream& out, NumarCuaternion& nr)
{
    out << nr.afisare();
    return out;
}


int main() {
    NumarCuaternion nr1(6 , 8, 0, 0);
    NumarCuaternion nr2(2 , 4, 1, 5);
    NumarCuaternion suma, diferenta, produs, impartire, copiere, conjugata;

    cout << "Modulul unui numar cuaternion: ";
    cout << sqrt(nr1.getParteReala()*nr1.getParteReala() + nr1.getParteImaginaraI()*nr1.getParteImaginaraI() + nr1.getParteImaginaraJ() * nr1.getParteImaginaraJ() + nr1.getParteImaginaraK() * nr1.getParteImaginaraK())<<endl;

    suma = nr1 + nr2;
    cout << "Suma a doua numere cuaternion: ";
    cout << suma;

    diferenta = nr1 - nr2;
    cout << "Diferenta a doua numere de tip cuaternion: ";
    cout << diferenta;

    produs = nr1 * nr2;
    cout << "Produsul a doua numere cuaternion: ";
    cout << produs;

    impartire = nr1 / nr2;
    cout << "Impartirea a doua numere cuaternion: ";
    cout << impartire;

    conjugata = ~nr1;
    cout << "Conjugata numarului n1 este: ";
    cout << conjugata;

    copiere = NumarCuaternion(suma);
    cout << copiere;

    NumarCuaternion x = NumarCuaternion();
    NumarCuaternion y = NumarCuaternion();
    NumarCuaternion z = NumarCuaternion();
    NumarCuaternion d = NumarCuaternion();
    NumarCuaternion r = NumarCuaternion();
    NumarCuaternion sol1 = NumarCuaternion();
    NumarCuaternion sol2 = NumarCuaternion();

    /* AICI AM VRUT SA FAC SOLUTIILE ECUATIEI, INSA NU AM GASIT FORMULA PENTRU EXTRAGEREA RADACINII PATRATE A UNUI NUMAR DE TIP CUATERNION
     * CERINTA PE CARE AM INLOCUIT-O ULTERIOR CU CONJUGATA UNUI NUMAR CUATERNION
    cin >> x;
    cin >> y;
    cin >> z;
    cout << x;
    d = y*y + (4.0)*x*z;
    r = sqrt(d);
    sol1 = ((-1.0)*y+r)/2*x;
    sol2 = ((-1.0)*y-r)/2*x;
    cout<<"Solutia 1: "<< sol1<<"endl";
    cout<<"Solutia 2: "<<sol2;
    */
    
    return 0;
}
