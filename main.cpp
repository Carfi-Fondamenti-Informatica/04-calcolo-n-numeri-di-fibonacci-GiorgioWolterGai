#include <iostream>
using namespace std;

int numero;
    cin >> numero;
    int risultato=0, a=1,b=1;
    if(numero<2) {
        cout << "errore";
    }else{
        cout << "1" << endl;
        cout << "1" << endl;
        for (int j=0; j<=(numero-3); j++) {
            risultato=a+b;
            cout << risultato << endl;
            a=b;
            b=risultato; 
            }
    }
   return 0;
}
