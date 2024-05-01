#include <iostream>
#include <cmath>

int main() {
    int n;
    
    system("CLS");

    std::cout << "Masukkan sebuah angka: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << n << " bukanlah bilangan prima.";
    } else {
        bool isPrima = true;
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                isPrima = false;
                break;
            }
        }

        if (isPrima) {
            std::cout << n << " merupakan bilangan prima.";
        } else {
            std::cout << n << " bukanlah bilangan prima.";
        }
    }

    return 0;
}
