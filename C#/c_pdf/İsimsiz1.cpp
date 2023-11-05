#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Rastgele say� �retmek i�in tohumu ayarla
    srand(time(0));

    // 1 ile 100 aras�nda rastgele bir say� se�
    int rastgeleSayi = (rand() % 100) + 1;
    int tahmin;
    int deneme = 0;

    printf("1 ile 100 aras�nda bir say� tahmin edin.\n");

    do {
        printf("Tahmininizi girin: ");
        scanf("%d", &tahmin);
        deneme++;

        if (tahmin < rastgeleSayi) {
            printf("Daha y�ksek bir say� girin.\n");
        } else if (tahmin > rastgeleSayi) {
            printf("Daha d���k bir say� girin.\n");
        } else {
            printf("Tebrikler! %d denemede do�ru tahmin ettiniz.\n", deneme);
        }
    } while (tahmin != rastgeleSayi);

    return 0;
}

