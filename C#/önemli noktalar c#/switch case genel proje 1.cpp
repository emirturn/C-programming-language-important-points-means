#include <stdio.h>

int main() {
    int islem;
    int bakiye = 1000; // Initialize the balance to 1000
    int tutar; // Declare the variable 'tutar'

    printf("Ýþlemler:\n1: Para çekme\n2: Para yatýrma\n3: Havale yapma\n\n");
    printf("Ýþlemi seçiniz: ");
    scanf("%d", &islem);

    switch (islem) {
    case 1:
        printf("Bakiyeniz %d\n", bakiye);
        printf("Çekilecek tutarý giriniz: ");
        scanf("%d", &tutar);
        if (bakiye < tutar) { // Check if the balance is sufficient
            printf("Bakiye yetersiz (lütfen bakiyenin yeterli olduðundan emin olun)\n");
        } else {
            bakiye -= tutar; // Deduct the amount from the balance
            printf("Bakiyeniz %d\n", bakiye);
        }
        break;

    case 2:
        printf("Bakiyeniz %d\n", bakiye);
        printf("Yatýrýlacak tutarý giriniz: ");
        scanf("%d", &tutar);
        bakiye += tutar; // Add the amount to the balance
        printf("Bakiyeniz %d\n", bakiye);
        break;

    case 3:
        printf("Bakiyeniz %d\n", bakiye);
        printf("Yapýlacak havale tutarýnýzý giriniz: ");
        scanf("%d", &tutar);
        if (bakiye < tutar) { // Check if the balance is sufficient for the transfer
            printf("Bakiye yetersiz (lütfen bakiyenin yeterli olduðundan emin olun)\n");
        } else {
            bakiye -= tutar; // Deduct the amount from the balance for the transfer
            printf("Bakiyeniz %d\n", bakiye);
        }
        break;

    default:
        printf("Geçersiz iþlem\n");
    }

    return 0;
}
















	


