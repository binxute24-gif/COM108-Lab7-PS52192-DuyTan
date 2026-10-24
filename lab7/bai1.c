#include <stdio.h>
#include <string.h>

int main() {
    char ho[50];
    char tenLot[50];
    char ten[50];
    char hoTen[150];

    printf("Nhap ho: ");
    fgets(ho, sizeof(ho), stdin);

    printf("Nhap ten lot: ");
    fgets(tenLot, sizeof(tenLot), stdin);

    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);

    ho[strcspn(ho, "\n")] = '\0';
    tenLot[strcspn(tenLot, "\n")] = '\0';
    ten[strcspn(ten, "\n")] = '\0';

    strcpy(hoTen, ho);
    strcat(hoTen, " ");
    strcat(hoTen, tenLot);
    strcat(hoTen, " ");
    strcat(hoTen, ten);

    printf("Ho ten day du: %s\n", hoTen);

    return 0;
}