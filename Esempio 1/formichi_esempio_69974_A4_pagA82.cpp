#include <iostream>

using namespace std;

/*
Programma per il calcolo della data della Pasqua di un anno
specificato
*/
void main(void)
{
    int Y, G, C, X, Z, D, E, N; // dichiarazione della variabili
    
    // richiesta del dato di input
    cout << "Anno: "; cin >> Y;
    // algoritmo per il calcolo della Pasqua
    G = Y % 19 + 1;
    C = Y/100 + 1;
    X = 3 * C/4 - 12;
    Z = (8 * C + 5)/25 - 5;
    D = 5 * Y/4 - X - 10;
    E = (11 * G + 20 + Z - X)% 30;
    if (E == 25 && G > 11)
        E = E + 1;
    if (E == 24)
        E = E + 1;
    N = 44 - E;
    if (N < 21)
        N = N + 30;
    N = N + 7 - (D + N)% 7;
    // visualizzazione del risultato
    if (N > 31)
        cout << N - 31 << " aprile" << endl;
    else
        cout << N << " marzo" << endl;
}
