#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    int n;
    bool primo = true;
    string resultado; 

     std::cin >> n;


    if (n == 2) {
        resultado = "primo";
    }
    else if (n % 2 == 0) {
        resultado = "no primo";
    }
    else {
        int raiz = (int) sqrt(n);

        for (int i = 3; i <= raiz; i++) {
            if (n % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            resultado = "primo";
        } else {
            resultado = "no primo";
        }
    }

    std::cout << resultado;
    return 0;
}