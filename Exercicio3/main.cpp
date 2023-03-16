#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main()
{
    ifstream entrada;  /*abre arquivo para leitura em modo texto */
    entrada.open("E:\\Desktop\\UTF\\4° período (3 faltantes) 2-2019 ~ 3 atuais - pré gg\\- Fundamentos de Orientação a Objetos\\exercicio 3\\entrada.txt");
    if(entrada.is_open()) /* if para ter certeza de que o arquivo foi aberto */
    {
        int linha[];
        multiset <int, greater <int>> mset;
        multiset <int, greater <int>> :: iterator it;
        for(int i=0; getline(entrada, linha); i++)
        {
            for(int j=0; linha[j] != '\0'; j++)
            {
                cout << linha[j];
                mset.insert(linha[j]);
            }
        }
        for(it = mset.begin(); it != mset.end(); it++)
            {
                cout << *it;
            }
    }
    else{
        cout << "O arquivo nao pode ser aberto";
    }

    return 0;
}
