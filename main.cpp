#include <iostream>
using namespace std;

int main() {
   int primo_numero=0;
    int secondo_numero=0;
    int n;
    cin >> n;
    int i=2;
    if (n>= 2){
        cout << 1 << endl;
        while (i++ < n){
            cout << primo_numero + secondo_numero << endl;
            if (primo_numero < secondo_numero)
                primo_numero += secondo_numero;
            else secondo_numero += primo_numero;
        }
        }else {
        cout << "errore" << endl;
        }
   return 0;
}
