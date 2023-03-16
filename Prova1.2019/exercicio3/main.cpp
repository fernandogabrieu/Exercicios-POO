#include <iostream>

using namespace std;

//a)
class Arquivo{
protected:
    string caminho;

public:
    Arquivo(string c)
    {
        caminho = c;
    }

    virtual void abrir() = 0;
};

//b)

class ArquivoTexto : public Arquivo{

private:
    string conteudo;
    int nLetras;

public:
    ArquivoTexto(string co):Arquivo(caminho)
    {
        conteudo = co;
    }
    void abrir()
    {
        cout << conteudo;
    }
};

//c)

class Multimidia : public Arquivo{
private:
    bool colorido;
    Multimidia(bool x) : Arquivo(caminho)
    {
        colorido = true;
    }
};

//d)

class Imagem : public Multimidia{
private:
    int altura, largura, matriz[1024][1024];

};

int main(){

    cout << "Hello world!" << endl;
    return 0;
}
