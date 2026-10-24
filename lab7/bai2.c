
#include <stdio.h>
#include <string.h>
#include <conio.h>

void bai2_DangNhap(void) {
    char username[50];
    char password[50];
    int i = 0;
    int ch;

    char correct_user[] = "admin";
    char correct_pass[] = "12345";

    printf("Nhap username: ");
    if (fgets(username, sizeof(username), stdin) == NULL) {
        return;
    }
    username[strcspn(username, "\n")] = '\0';

    printf("Nhap password: ");

    while (1) {
        ch = _getch();

        if (ch == '\r' || ch == '\n') {
            break;
        }

        if (ch == 8) {
            if (i > 0) {
                i--;
                printf("\b \b");
            }
        } else if (ch >= 32 && ch <= 126 && i < 49) {
            password[i++] = (char)ch;
            printf("*");
        }
    }

    password[i] = '\0';
    printf("\n");

    if (strcmp(username, correct_user) == 0 &&
        strcmp(password, correct_pass) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
}

int main(void) {
    bai2_DangNhap();
    return 0;
}
