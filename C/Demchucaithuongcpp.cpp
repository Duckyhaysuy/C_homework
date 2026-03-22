#include <stdio.h>
#include <string.h>

int countLower(char str[]) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("So chu cai thuong = %d", countLower(str));

    return 0;
}




#include <iostream>
#include <string>
using namespace std;

int countLower(string str) {
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }
    }

    return count;
}

int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    cout << "So chu cai thuong = " << countLower(str);

    return 0;
}
