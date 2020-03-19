#include <iostream>
#include<math.h>
using namespace std;


class Numar_Cuaternion{
    double parteReala;
    double parteImaginara;
    double parteImaginaraD;
    double parteImaginaraT;

public:
    Numar_Cuaternion(){
    }
    Numar_Cuaternion(const Numar_Cuaternion &cpy){
        parteReala = cpy.parteReala;
        parteImaginara = cpy.parteImaginara;
        parteImaginaraD  = cpy.parteImaginaraD;
        parteImaginaraT = cpy.parteImaginaraT;
    }
    Numar_Cuaternion(double r, double i, double j, double k)
    {
        parteReala = r;
        parteImaginara = i;
        parteImaginaraD = j;
        parteImaginaraT = k;
    }
    ~Numar_Cuaternion(){
    }

    void setParteReala(double r){
        parteReala = r;
    }
    void setParteImaginara(double i){
        parteImaginara = i;
    }

    void setParteImaginaraD(double j){
        parteImaginaraD = j;
    }
    void setParteImaginaraT(double k){
        parteImaginaraT = k;
    }
    double getParteReala(){
        return parteReala;
    }

    double getParteImaginara(){
        return parteImaginara;
    }

    double getParteImaginaraD(){
        return parteImaginaraD;
    }

    double getParteImaginaraT(){
        return parteImaginaraT;
    }

};

Numar_Cuaternion operator + (Numar_Cuaternion x1, Numar_Cuaternion x2){
    Numar_Cuaternion y(x1.getParteReala() + x2.getParteReala(),
                     x1.getParteImaginara() + x2.getParteImaginara(),
                     x1.getParteImaginaraD() + x2.getParteImaginaraD(),
                     x1.parteImaginaraT() + x2.getParteImaginaraT());
    return y;
}

Numar_Cuaternion operator - (Numar_Cuaternion x1, Numar_Cuaternion x2){
    Numar_Cuaternion y(x1.getParteReala() - x2.getParteReala(),
                     x1.getParteImaginara() - x2.getParteImaginara(),
                     x1.getParteImaginaraD() - x2.getParteImaginaraD(),
                     x1.getParteImaginaraT() - x2.getParteImaginaraT());
    return y;
}

Numar_Cuaternion operator * (Numar_Cuaternion x1, Numar_Cuaternion x2){
    Numar_Cuaternion y(x1.getParteReala() * x2.getParteReala() - x1.getParteImaginara() * x2.getParteImaginara() - x1.getParteImaginaraD() * x2.getParteImaginaraD() - x1.getParteImaginaraT() * x2.getParteImaginaraT(),
                     x1.getParteReala() * x2.getParteImaginara() + x2.getParteReala() * x1.getParteImaginara() + x1.getParteImaginaraD() * x2.getParteImaginaraT() - x1.getParteImaginaraT() * x2.getParteImaginaraT(),
                     x1.getParteReala() * x2.getParteImaginaraD() - x1.getParteImaginara() * x2.getParteImaginaraT() + x1.getParteImaginaraD() * x2.getParteReala() + x1.getParteImaginaraT() * x2.getParteImaginara(),
                     x1.getParteReala() * x2.getParteImaginaraT() + x1.getParteImaginara() * x2.getParteImaginaraD() - x1.getParteImaginaraD() * x2.getParteImaginara() + x1.getParteImaginaraT() * x2.getParteReala());
    return y;
}

Numar_Cuaternion operator / (Numar_Cuaternion x1, Numar_Cuaternion x2){
    Numar_Cuaternion y(x1.getParteReala() * x2.getParteReala() - x1.getParteImaginara() * x2.getParteImaginara() - x1.getParteImaginaraD() * x2.getParteImaginaraD() - x1.getParteImaginaraT() * x2.getParteImaginaraT(),
                     x1.getParteImaginara() * x2.getParteReala() + x1.getParteReala() * x2.getParteImaginara() + x1.getParteImaginaraD() * x2.getParteImaginaraT() - x1.getParteImaginaraT() * x2.getParteImaginaraD(),
                     x1.getParteReala() * x2.getParteImaginaraD() - x1.getParteImaginara() * x2.getParteImaginaraT() + x1.getParteImaginaraD() * x2.getParteReala() + x1.getParteImaginaraT() * x2.getParteImaginara(),
                     x1.getParteReala() * x2.getParteImaginaraT() + x1.getParteImaginara() * x2.getParteImaginaraD() - x1.getParteImaginaraD() * x2.getParteImaginara() + x1.getParteImaginaraT() * x2.getParteImaginara());
    return y;
}

int main() {
    Numar_Cuaternion a(6 , 8, 0, 0);
    Numar_Cuaternion b(2 , 4, 1, 5);
    Numar_Cuaternion c;
    /*cout << c.getParteReala() << endl;
    cout << c.getParteImaginara() << endl;
    Numar_Cuaternion d(c);    //Pentru ce e asta si de ce e pusa de doua ori?

    cout << d.getParteReala() << endl;
    cout << d.getParteImaginara() << endl;
    */

    //VREAU SA FAC PUBLIC: AFISARE SI SA CONTINA TOATE ASTEA
    cout<<"Modulul unui numar cuaternion: ";
    cout<<sqrt(a.getParteReala()*a.getParteReala() + a.getParteImaginara()*a.getParteImaginara() + a.getParteImaginaraD() * a.getParteImaginaraD() + a.getParteImaginaraT() * a.getParteImaginaraT())<<endl;

    c = a + b;
    cout<<"Suma a doua numere cuaternion: ";
    cout<< c.getParteReala()<< " + " << c.getParteImaginara() << "i + "<< c.getParteImaginaraD() << "j + "<< c.getParteImaginaraT() <<" k " << endl;

    c = a - b;
    cout<<"Diferenta a doua numere de tip cuaternion: ";
    cout<< c.getParteReala()<< " + " << c.getParteImaginara() << "i + "<< c.getParteImaginaraD() << "j + "<< c.getParteImaginaraT() <<" k " << endl;

    c = a * b;
    cout<<"Produsul a doua numere cuaternion: ";
    cout<< c.getParteReala()<< " + " << c.getParteImaginara() << "i + "<< c.getParteImaginaraD() << "j + "<< c.getParteImaginaraT() <<" k " << endl;

    c = a / b;
    cout<<"Impartirea a doua numere cuaternion: ";
    cout<< c.getParteReala()<< " + " << c.getParteImaginara() << "i + "<< c.getParteImaginaraD() << "j + "<< c.getParteImaginaraT() <<" k " << endl;

    /*
    Numar_Cuaternion a,b,c,r,d,s,sol;
    cin>>a>>b>>c;
    delta = b*b +(4.0)*a*c;
    r = sqrt(delta);
    s = ((-1.0)*b+r)/2*a;
    sol = ((-1.0)*b-r)/2*a;
    cout<<"solutia 1 este: "<<s;
    cout<<"\n solutia 2 este: "<<sol;
    */
    return 0;
}
