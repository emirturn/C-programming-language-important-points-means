#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Rastgele sayı üretmek için tohumu ayarla
    srand(time(0));

    // 1 ile 100 arasında rastgele bir sayı seç
    int rastgeleSayi = (rand() % 100) + 1;
    int tahmin;
    int deneme = 0;

    printf("1 ile 100 arasında bir sayı tahmin edin.\n");

    do {
        printf("Tahmininizi girin: ");
        scanf("%d", &tahmin);
        deneme++;

        if (tahmin < rastgeleSayi) {
            printf("Daha yüksek bir sayı girin.\n");
        } else if (tahmin > rastgeleSayi) {
            printf("Daha düşük bir sayı girin.\n");
        } else {
            printf("Tebrikler! %d denemede doğru tahmin ettiniz.\n", deneme);
        }
    } while (tahmin != rastgeleSayi);

    return 0;
}

