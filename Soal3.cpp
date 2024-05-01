#include <iostream>

int main() {
    long long angka, totalPrima = 0;
    std::cout << "Masukkan sebuah angka: ";
    std::cin >> angka;
    angka = std::abs(angka);
    while (angka > 0) {
        int digit = angka % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            totalPrima += digit;
        }
        angka /= 10;
    }
    std::cout << "Jumlah angka prima dalam input adalah: " << totalPrima << std::endl;
    return 0;
}
