#include <iostream>
#include <iomanip>
using namespace std;

class WaterBill {
private:
    int *units;

public:
    // constuctor
    WaterBill(int u) {
        units = new int;
        *units = u;
    }
    // destructor
    ~WaterBill() {
        delete units;
    }

    void calculateBill() {
        float bill = 0;

        if (*units <= 10)
            bill = (*units) * 5;
        else if (*units <= 20)
            bill = 10 * 5 + (*units - 10) * 8;
        else
            bill = 10 * 5 + 10 * 8 + (*units - 20) * 10;

        cout << fixed << setprecision(2);
        cout << "Total Bill:" << bill;
    }
};

int main() {
    int u;
    cin >> u;

    WaterBill wb(u);
    wb.calculateBill();

    return 0;
}
