#include <iostream>
using namespace std;

const int MAX_SIZE = 26;
int intan[MAX_SIZE];

void input(int& n) {    //procedure input
    cout << "Masukkan elemen (max " << MAX_SIZE << "): ";
    cin >> n;
    cout << "Enter:\n ";
    for (int i = 0; i < n; i++) {
        cin >> intan[i];
    }
}

void algorithm(int n, int desired) {    //procedure algorithm
    int anggia = 0, widyaningrum = n - 1, mid;
    while (anggia <= widyaningrum) {
        mid = (anggia + widyaningrum) / 2;
        if (intan[mid] == desired) {
            cout << "Found" << endl;
            return;
        }
        else if (desired < intan[mid]) {
            widyaningrum = mid - 1;
        }
        else {
            anggia = mid + 1;
        }
    }
    cout << "Not Found" << endl;
}

int main() {    //procedure main
    int n, desired;
    input(n);
    cout << "Masukkan elemen yang dicari: ";
    cin >> desired;
    algorithm(n, desired);
    return 0;
}

