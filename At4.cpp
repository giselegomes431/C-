/* Faça um programa que gera um numero aleatorio de 1 a 1000. O usuario de tentar
acertar qual o numero foi gerado, a cada tentativa o programa deverá informar se o
chute é menor ou maior que o numero gerado. O programa acaba quando o usuario acerta
o numero gerado. O programa deve informar em quantas tentativas o numero foi descoberto.

Gisele */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int aleatorio;
    int tentativa;
    int contador = 0;

    srand(time(0));
    aleatorio = 1 + rand() % 1000;

    cout << "================ BEM-VINDO AO JOGO ================" << endl
         << endl;
    cout << "                     OBJETIVO:" << endl;
    cout << " ACERTAR O NUMERO ALEATORIO GERADO PELO COMPUTADOR" << endl
         << endl;

    do
    {
        cout << endl
             << "***************************************************" << endl
             << endl;
        cout << "               Qual eh o numero? ";
        cin >> tentativa;

        if (tentativa < aleatorio)
            cout << "\n+++++++++++++ O NUMERO CERTO EH MAIOR +++++++++++++" << endl
                 << endl;

        else if (tentativa > aleatorio)
            cout << "\n------------- O NUMERO CERTO EH MENOR -------------" << endl
                 << endl;

        contador++;
    } while (tentativa != aleatorio);

    cout << endl
         << "============= PARABENS, VOCE GANHOU!! =============";
    cout << "\n\n  O numero foi descoberto depois de " << contador << " tentativas!";
    cout << endl
         << endl
         << "======================= FIM =======================";

    return 0;
}
