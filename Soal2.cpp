#include <iostream>
#include <string>
int main() {
    std::string kalimat;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);
    for (char& karakter : kalimat) {
        if (karakter >= 'a' && karakter <= 'z') {
            karakter -= ('a' - 'A');
        }
    }
    std::cout << "Kalimat dalam huruf kapital: " << kalimat << std::endl;
    return 0;
}
