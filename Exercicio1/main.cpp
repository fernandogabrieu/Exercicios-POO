#include <iostream>
#include <math.h>

using namespace std;

class Ponto{
    double x, y;
public:
    Ponto(double X, double Y)
    {
        x = X;
        y = Y;
    }
    double getX(){return x;};
    double getY(){return y;};

    double distanciaParaPonto(Ponto p)
    {
        return sqrt(pow(p.x - x,2)+pow(p.y - y,2));
    }
};

class Reta{
    double A, B, C;
public:
    Reta(Ponto p1, Ponto p2)
    {
        A = p1.getY()- p2.getY();
        B = p2.getX() - p1.getX();
        C = p1.getX()*p2.getY() - p1.getY()*p2.getX();
    }
    double getA(){return A;};
    double getB(){return B;};
    double getC(){return C;};

    double distanciaParaPonto(Ponto p)
    {
        return fabs(A*p.getX()+B*p.getY()+C)/sqrt(pow(A,2) + pow(B,2));
    }
};

int main()
{
    double x, y;
    cout << "Ponto A> ";
    cin >> x >> y;
    Ponto A(x,y);

    cout << "Ponto B> ";
    cin >> x >> y;
    Ponto B(x,y);

    cout << "Ponto C> ";
    cin >> x >> y;
    Ponto C(x,y);

    Reta RC(A,B);
    cout << "distancia AB = " << A.distanciaParaPonto(B) << endl;
    cout << "R: " << RC.getA() << "x + " << RC.getB() << "y + " << RC.getC() << " = 0" << endl;
    cout << "Distancia RC = " << RC.distanciaParaPonto(C);



    return 0;
}
