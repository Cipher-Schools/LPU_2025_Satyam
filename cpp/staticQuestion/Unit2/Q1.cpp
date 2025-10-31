#include <iostream>
using namespace std;

void printHistogram(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < *(arr + i); j++) {
            cout << "X";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 20) {
        cout << "Invalid";
        return 0;
    }

    int heights[20];
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
        if (heights[i] < 1 || heights[i] > 10) {
            cout << "Invalid";
            return 0;
        }
    }

    printHistogram(heights, n);
    return 0;
}
