#include <stdio.h>

int main() {
    int n, a[100];

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            count = 1;
        } else if (a[i] == min) {
            count++;
        }
    }

    printf("Min = %d\n", min);
    printf("So lan xuat hien = %d", count);

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n, a[100];

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int min = a[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            count = 1;
        } else if (a[i] == min) {
            count++;
        }
    }

    cout << "Min = " << min << endl;
    cout << "So lan xuat hien = " << count;

    return 0;
}
