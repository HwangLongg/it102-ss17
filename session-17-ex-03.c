#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int countWords(char *str) {
    int count = 0;
    int inWord = 0;
    
    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            count++;
        }
        str++;
    }
    
    return count;
}

void toUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void appendString(char *str1, char *str2) {
    strcat(str1, str2);
}

int main() {
    char str1[1000], str2[1000];
    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. nhap vao chuoi\n");
        printf("2. in ra chuoi dao nguoc\n");
        printf("3.dem so luong tu trong chuoi\n");
        printf("4. nhap vao chuoi kjac,so sanh voi chuoi ban dau\n");
        printf("5. in hoa tat ca chu cai trong chuioi\n");
        printf("6. \n");
        printf("7. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("nhap vao chuioi: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;
                break;

            case 2:
                reverseString(str1);
                printf("chuoi dao nguoc: %s\n", str1);
                break;

            case 3:
                printf("so luong tu tronh chuoi: %d\n", countWords(str1));
                break;

            case 4:
                printf("nhap vao vhuoi khac ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                if (strlen(str2) > strlen(str1)) {
                    printf("dai hon chuoi ban dau.\n");
                } else if (strlen(str2) < strlen(str1)) {
                    printf("nagn hon chuoi ban dau.\n");
                } else {
                    printf("bang nhauu.\n");
                }
                break;

            case 5:
                toUpperCase(str1);
                printf("chuoi in hoa : %s\n", str1);
                break;

            case 6:
                printf("nhap vao chuoi ban dau: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;
                appendString(str1, str2);
                printf(" chuoi sau khi them: %s\n", str1);
                break;

            case 7:
                printf("ythoat chuong trinh.\n");
                return 0;

            default:
                printf("lua chon khong hop le,thu lai.\n");
        }
    }

    return 0;
}
