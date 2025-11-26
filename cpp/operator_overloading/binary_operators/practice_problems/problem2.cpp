// overload [] operator to find sum of first x elements of array
#include <iostream>
#include <vector>
using namespace std;

class VectorSum {
    vector<int> arr;

public:
    VectorSum(vector<int> arr){
        this->arr=arr;
    }
    // Overload [] to return sum of first x elements
    int operator[](int x) {
        if (x < 0 || x > arr.size())
            {
                cout<<"invalid value of x";
                return -1;
            }
        int sum = 0;
        for (int i = 0; i < x; i++) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    VectorSum v({1,2,3,4,5});
    cout << v[3] << endl;   
    cout << v[5] << endl;   
    cout << v[0] << endl; 

    return 0;
}
