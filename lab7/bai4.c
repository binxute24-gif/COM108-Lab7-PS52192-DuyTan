
#include <stdio.h>
#include <string.h>

void bai4_ThapPhanSangHex(void) {
    int n;
    int ch;

    printf("Nhap vao mot so nguyen khong am o he thap phan: ");

    if (scanf("%d", &n) != 1) {
        printf("So nhap vao khong hop le!\n");

        while ((ch = getchar()) != '\n' && ch != EOF) {
        }

        return;
    }

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }

    if (n < 0) {
        printf("So nhap vao khong hop le!\n");
        return;
    }

    if (n == 0) {
        printf("So thap luc phan cua 0 la: 0\n");
        return;
    }

    char hex[100];
    char ref[] = "0123456789ABCDEF";
    int index = 0;
    int temp_n = n;

    while (temp_n > 0) {
        int remainder = temp_n % 16;
        hex[index++] = ref[remainder];
        temp_n /= 16;
    }

    hex[index] = '\0';

    int len = (int)strlen(hex);

    for (int i = 0; i < len / 2; i++) {
        char t = hex[i];
        hex[i] = hex[len - 1 - i];
        hex[len - 1 - i] = t;
    }

    printf("So thap luc phan cua %d la: %s\n", n, hex);
}

int main(void) {
    bai4_ThapPhanSangHex();
    return 0;
}