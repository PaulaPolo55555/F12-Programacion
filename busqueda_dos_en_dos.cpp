#include <iostream>
#include <vector> 
    int maximo (int a,int y){   
      if (a>y)
         {
         return a;
         }
      else
         return y;
    }
    int minimo (int a,int b){   
      if (a<b)
         {
         return a;
         }
        else
            return b;
    }
    int busqueda2en2(const std::vector < int > & lista , int n ,int objetivo ) {    
        int i = 0; 
        while (i < n && lista [ i ] < objetivo)
            {
            i = i + 2;
            }
       
        for (int j = maximo(0, i - 1); j <= minimo(i, n - 1); j++)
        {
            if (lista  [j]== objetivo)
            {
                return j;
            }
        }
        return -1; 

    }

int main () {  
    int objetivo;
    int n;
    std::cin >> n;
    std::vector<int> lista(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> lista[i];
        }
        
    std::cin >> objetivo;
          if (objetivo<1000000)
          {
           int resultado = busqueda2en2(lista, n, objetivo);
                 if (resultado != -1)
                     std::cout <<  resultado;
                 else
                    std::cout << -1;
         }else 
            return -1;
    
        return -1;
 }
