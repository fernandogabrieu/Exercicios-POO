#include <iostream>

using namespace std;

class Fracao
{
private:
    int a,b;
public:
    Fracao (int a)
    {
        this->a = a;
        this->b = 1;
        cout << a<<"/"<<b << endl;
    }
    Fracao (int a,int b)
    {
        this->a = a;
        this->b = b;
        cout << a<<"/"<<b << endl;
    }
    int getA(){return this->a;}
    int getB(){return this->b;}
    Fracao operator*(Fracao B)
    {
        return Fracao(getA()*B.getA(),getB()*B.getB());
    }
    Fracao operator/(Fracao B)
    {
        return Fracao(getA()*B.getB(),getB()*B.getA());
    }
};

int main()
{
    Fracao A = Fracao(1,2), B = Fracao(1,2);
    A*B;
    A/B;
    return 0;
}
