#include <iostream>
#include <vector>
#include <string>
std::vector <int> lista;
//creamos la funciòn bubble sort :D
void bubble_sort() {
    int n= lista.size();
    int i;
    int j;
    bool hubo_intercambio= false;
       for (i=0; i<n; i++) 
       {
            for (j=0; j<n-i; j++) //el j es el ìndice de la lista. 
             {
                 if (lista [j]> lista [j+1])
                     {
                     std::swap(lista[j], lista[j+1]); //intercambiamos
                     hubo_intercambio= true;
                      }
            
             }
         if(hubo_intercambio==false) //si ya no hay intercambio es que està ordenada, entonces break de una vez
         {
            break;
          }
        
        
       }
       
    }

void selection_sort(){
            int mindx;
            int i;
            int j;
            int n= lista.size();
             for (i=0; i<n-1; i++)
               {
                mindx=i;//seteamos el mindx en i para que vaya subiendo con cada iteraciòn (tiene q irse corriendo)
                    for (j=i+1 ; j<n; j++) //usamos j para que vaya recorriendo la lista
                    {
                        if (lista [j]< lista [mindx])
                        {
                            mindx=j;
                        }
                        
                    }
                    if (mindx!=i)
                    {
                        std::swap(lista[i], lista[mindx]); //intercambiamos
                    }
                    
              }
            
    }

std::vector <int> mezclar(std::vector <int> izquierda, std::vector <int> derecha){ //definimos nuestra funciòn para mezclar :)
        std::vector <int> resultado;
        int i=0;
        int j= 0;
        while (i< izquierda.size() && j< derecha.size())
        {
                if (izquierda [ i ] <= derecha [ j ] )
                {
                   resultado.push_back(izquierda [ i ]);
                   i= i+1;
                }
                else{
                   resultado.push_back(derecha [ j ]);
                    j++;
                }
            }
            //agregamos los elementos que sobran
            while (i < izquierda.size()) { //si derecha ya se acabò
                resultado.push_back(izquierda[i]);
                 i++;
             }

            while (j < derecha.size()) {
                    resultado.push_back(derecha[j]); //si izquierda ya se acabò
                    j++;
                    }
         return resultado;   
        }
        

std::vector<int> merge_sort (std::vector <int> listaa){
    int n= listaa.size();
       if (n<=1)
       {
        return listaa;
       }
     int medio= n/2;
     std::vector<int> izquierda(listaa.begin(), listaa.begin() + medio); //defino mis vectores izquierda y derecha
     std::vector<int> derecha(listaa.begin() + medio, listaa.end()); //notemos q derecha se queda con un elemento màs si es impar
     izquierda = merge_sort(izquierda); //hago merge sort de cada vector
     derecha = merge_sort(derecha);                 
    return mezclar (izquierda, derecha); //llamamos a la funciòn mezclar :)
  }


                    
         

int main() {
    std::string algoritmo; //para poder leer que tipo de ordenamiento queremos
    std::cin>> algoritmo;
    if (algoritmo=="burbuja") //BUBBLE SORT
    {
    
         int n;
         int k;
         int m;
         int i;
        std::cin>> n;
            for (k=0; k<n; k++) //la k es para meter los valores de la lista hasta que esta lista tenga la longitud que se habìa establecido
               {
                 std::cin>> m;
                 lista.push_back (m);
               }
            bubble_sort();    
              for (i=1; i<n+1; i++)
                  {
                     std::cout<< lista [i]; 
                    std::cout<< " "; //imprime mis valores ordenados y separados por un espacio
                     }
    }

    if (algoritmo== "seleccion") //SELECTION SORT
    {
         int n;
         int k;
         int m;
         int i;
         std::cin>> n;
            for (k=0; k<n; k++) //aplicamos la misma de antes para rellenar nuestra lista vector
               {
                 std::cin>> m;
                 lista.push_back (m);
               }
        selection_sort(); //aplicamos la misma para que me impriman mis valores como quiero
          for (i=0; i<n; i++)
                  {
                     std::cout<< lista [i]; 
                    std::cout<< " "; //imprime mis valores ordenados y separados por un espacio
                     }
    }
    
     if (algoritmo== "mergesort") //MERGE SORT
    {
         int n;
         int k;
         int m;
         int i;
         std::cin>> n;
            for (k=0; k<n; k++) //lo mismo q antes
               {
                 std::cin>> m;
                 lista.push_back (m);
               }
        lista= merge_sort(lista); //mas de lo mismo
          for (i=0; i<n; i++)
                  {
                     std::cout<< lista [i]; 
                    std::cout<< " "; //imprime mis valores ordenados y separados por un espacio
                     }
    }
    

   return 0; 

        //terminamos yujuuu :D

}
