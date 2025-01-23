#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Alustetaan satunnaislukugeneraattori
    std::srand(std::time(0));

    // Arvotaan satunnainen luku 1 ja 20 väliltä
    int oikeaLuku = std::rand() % 20 + 1;
    int arvaus = 0;

    std::cout << "Arvataan luku väliltä 1-20!" << std::endl;

    // Peli jatkuu niin kauan, kunnes pelaaja arvaa oikein
    while (arvaus != oikeaLuku) {
        // Kysytään pelaajalta arvaus
        std::cout << "Anna arvaus: ";
        std::cin >> arvaus;

        // Tarkistetaan, onko arvaus pienempi, suurempi vai oikea
        if (arvaus < oikeaLuku) {
            std::cout << "Luku on suurempi!" << std::endl;
        } else if (arvaus > oikeaLuku) {
            std::cout << "Luku on pienempi!" << std::endl;
        } else {
            std::cout << "Oikea vastaus!" << std::endl;
        }
    }

    return 0;
}
