#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                                 //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'                       //(;), ("")
    for (int i = 0;)                                             //'for' ciklusváltozók és feltételek
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                                   //atlag=0;
    for (int i = 0; i < N_ELEMENTS, i++)                         //, -> ;   
    {
        atlag += b[i]                                            //;
    }
    atlag /= N_ELEMENTS;                                         //dinamikusan foglalt memória felszabadítása
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
