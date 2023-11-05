#include <stdio.h>
#include <string.h>

int main() {
    char isim[100];
    char soyisim[100];
    int tcnum;

    printf("Ýsminizi giriniz: ");
    scanf("%s", isim);
    printf("Soy isminizi giriniz: ");
    scanf("%s", soyisim);
    printf("TC numaranýzý giriniz: ");
    scanf("%d", &tcnum);

    char isimHarfler[4];
    char soyisimHarfler[2];
    int sonDortNumara;

    if (strlen(isim) >= 3 && strlen(soyisim) >= 2) {
        strncpy(isimHarfler, isim, 3);
        isimHarfler[3] = '\0';

        strncpy(soyisimHarfler, soyisim + strlen(soyisim) - 2, 2);
        soyisimHarfler[2] = '\0';

        sonDortNumara = tcnum % 10000;

        printf("Ýsmin ilk 3 harfi: %s\n", isimHarfler);
        printf("Soy ismin son 2 harfi: %s\n", soyisimHarfler);
        printf("TC numarasýnýn son 4 rakamý: %d\n", sonDortNumara);
    } else {
        printf("Lütfen yeterli uzunlukta isim ve soyisim giriniz.\n");
    }

    return 0;
}

