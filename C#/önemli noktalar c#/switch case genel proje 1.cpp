#include <stdio.h>

int main() {
    int islem;
    int bakiye = 1000; // Initialize the balance to 1000
    int tutar; // Declare the variable 'tutar'

    printf("��lemler:\n1: Para �ekme\n2: Para yat�rma\n3: Havale yapma\n\n");
    printf("��lemi se�iniz: ");
    scanf("%d", &islem);

    switch (islem) {
    case 1:
        printf("Bakiyeniz %d\n", bakiye);
        printf("�ekilecek tutar� giriniz: ");
        scanf("%d", &tutar);
        if (bakiye < tutar) { // Check if the balance is sufficient
            printf("Bakiye yetersiz (l�tfen bakiyenin yeterli oldu�undan emin olun)\n");
        } else {
            bakiye -= tutar; // Deduct the amount from the balance
            printf("Bakiyeniz %d\n", bakiye);
        }
        break;

    case 2:
        printf("Bakiyeniz %d\n", bakiye);
        printf("Yat�r�lacak tutar� giriniz: ");
        scanf("%d", &tutar);
        bakiye += tutar; // Add the amount to the balance
        printf("Bakiyeniz %d\n", bakiye);
        break;

    case 3:
        printf("Bakiyeniz %d\n", bakiye);
        printf("Yap�lacak havale tutar�n�z� giriniz: ");
        scanf("%d", &tutar);
        if (bakiye < tutar) { // Check if the balance is sufficient for the transfer
            printf("Bakiye yetersiz (l�tfen bakiyenin yeterli oldu�undan emin olun)\n");
        } else {
            bakiye -= tutar; // Deduct the amount from the balance for the transfer
            printf("Bakiyeniz %d\n", bakiye);
        }
        break;

    default:
        printf("Ge�ersiz i�lem\n");
    }

    return 0;
}
















	


