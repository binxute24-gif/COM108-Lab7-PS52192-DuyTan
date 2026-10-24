
#include <stdio.h>
#include <string.h>

void bai3_SapXepChuoi(void) {
    char s[5][20];
    char temp[20];
    int i, j;

    printf("Nhap 5 chuoi bat ky:\n");

    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);

        if (fgets(s[i], sizeof(s[i]), stdin) == NULL) {
            return;
        }

        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");

    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}

int main(void) {
    bai3_SapXepChuoi();
    return 0;
}