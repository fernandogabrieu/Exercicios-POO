#include <iostream>
#include <math.h>

using namespace std;

class Figura   //classe abstrata (já que possui métodos virtuais)//
{
public:

    virtual double calcArea() = 0; //método virtual puro//

};

class Circulo : public Figura   //Classe Circulo derivada de Figura//
{

    double raio;

public:

    //Construtor//
    Circulo(double r)
    {
        raio = r;
    }

    //metodos//
    double calcArea()
    {
        return (pow(raio,2)*3.14);
    }
};

class Retangulo: public Figura //Classe Retangulo derivada de Figura//
{
protected:

    double ladoA;  //#//
    double ladoB; //#//

public:
    //Construtor//
    Retangulo(double A, double B)
    {
        ladoA = A;
        ladoB = B;
    }

    //m�todos//
    double calcArea()
    {
        return ladoA*ladoB;
    }
};

class Quadrado : public Retangulo //Classe Quadrado derivada de Retangulo//
{
public:
    //Construtor//
    Quadrado(double L): Retangulo(L, L){}  //quadrado que recebe L, será um "retângulo" de lado L e L.//

};

int main()
{

    Retangulo R(2,3);
    Quadrado Q(7);
    Circulo C(2);
    cout << "Area R: " << R.calcArea() << endl;
    cout << "Area Q: " << Q.calcArea() << endl;
    cout << "Area C: " << C.calcArea() << endl;

    Quadrado Q2 (Q.calcArea());
    cout << "Area Q2: " << Q2.calcArea() << endl;

    return 0;

}
