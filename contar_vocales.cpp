#include <iostream>
#include <string>
#include <algorithm> 
#include <vector>
int main()  {
    std::vector <char> lista;
     // ── Leer una cadena con espacios ──────────────────────────────────────────
    std::string linea;
    std::getline(std::cin, linea);
    // pasar a minusculas creo
    std::transform(linea.begin(), linea.end(), linea.begin(), ::tolower);
        // ── Acceso por indice ─────────────────────────────────────────────────────
        for (int i = 0; i < linea.size(); i++)
           
              {
               if (linea[i]==  'a')
               {
                 lista.push_back(linea[i]);
               }
               if (linea[i]==  'e')
               {
                 lista.push_back(linea[i]);
               }
            
               if (linea[i]==  'i')
               {
                 lista.push_back(linea[i]);
               }
            
                
               if (linea[i]==  'o')
               {
                 lista.push_back(linea[i]);
               }
               
               if (linea[i]==  'u')
               {
                 lista.push_back(linea[i]);
               }
               
              }
              std::cout << lista.size();

            
   return 0;
}