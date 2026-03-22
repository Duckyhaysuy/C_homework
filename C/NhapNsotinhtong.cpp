#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Tong = %d", sum);

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    cout << "Tong = " << sum;
    return 0;
}
