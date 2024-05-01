#include <stdio.h>
int main() {
    int totalDetik;
    int jam, menit, detik;
    printf("Masukkan waktu dalam detik: ");
    scanf("%d", &totalDetik);
    if (totalDetik < 0) {
        printf("Input tidak dapat berupa angka negatif.\n");
        return 1;
    }
    jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;
    printf("Waktu: ");
    if (jam < 10) printf("0");
    printf("%d:", jam);
    if (menit < 10) printf("0");
    printf("%d:", menit);
    if (detik < 10) printf("0");
    printf("%d\n", detik);
    return 0;
}
