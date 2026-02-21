#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // NELEMENTS helyett N_ELEMENTS kéne
    int *b = new int[NELEMENTS];
    // pontosvessző hiányzik a sor végéről
    std::cout << '1-100 ertekek duplazasa'
    // nincs megadva feltétel a ciklusnak
    for (int i = 0;)
    {
        // pontosvessző hiányzik a sor végéről
        b[i] = i * 2;
    }
    // a feltétel rossz, ezért nem futna le a ciklus, és vessző kéne pontosvessző helyett
    for (int i = 0; i; i++)
    {
        // pontosvessző hiányzik a sor végéről
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // nincs kezdőérték megadva az atlag váltózónak
    int atlag;
    // vessző kéne pontosvessző helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // pontosvessző hiányzik a sor végéről
        atlag += b[i]
    }
    // tizedes érték nem lesz mert integer az atlag változó
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
