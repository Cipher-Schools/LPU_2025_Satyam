#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int arr[10][10];  //since 1<=row,col<=10

public:
    // setter
    void setDimensions(int r, int c) {
        rows = r;
        cols = c;
    }
    void inputElements() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
    }
    void calculateSum() {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum += arr[i][j];
            }
          }
        cout << "Sum:" << sum;
    }
};

int main() {
    int r, c;
    cin >> r >> c;

    Matrix m;
    m.setDimensions(r, c);
    m.inputElements();
    m.calculateSum();

    return 0;
}
