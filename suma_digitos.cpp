#include <iostream>
#include <vector>

int sumar(const std::vector<int>& lista) {
                int suma = 0;
                for (int v : lista) {
                suma += v;
             } 
                return suma;}

int main () {
    std::vector<int> lista;
    long long n;
    int m;
    std::cin >> n; 
        
            while (n>=1 && n<=10000000000){
             m= n%10;
             n= n/10;
             lista.push_back(m);
              }
            int resultado = sumar(lista);

             std::cout  << resultado << std::endl;
    return -1;
}