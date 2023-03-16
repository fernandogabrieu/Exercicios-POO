#include <iostream>

using namespace std;

class Console{

    int geracao;  /*método privado*/

public:
    Console(int gen)
    {
        geracao = gen;
        cout << "X";
    }
    int getGeracao()
    {
        return this -> geracao;

    }

};

class SNES : public Console{  /*SNES herda de Console*/

public:
    int geracao;
    char model = 'a';
    SNES(char m) : Console(int gen)
    {
        model = m;
        geracao = Console.getGeracao();
        if(model = 'a')
            cout << "Y4";
        else
            cout << "YZ"
    }
};

int main()
{
    SNES meusnes;
    cout << meusnes.getGeracao();
    SNES *nintendo = new SNES();
    return 0;
}
