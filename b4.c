#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end);

int main() {
    char str[100];
    printf("Nhap chuoi can dao nguoc: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự xuống dòng do fgets nhập vào
    str[strcspn(str, "\n")] = '\0';
    int n = strlen(str);
    reverseString(str, 0, n - 1);
    printf("Chuoi sau khi dao nguoc la: %s\n", str);
    return 0;
}

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return; 
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}
