// overload () operator to scale the elements of a array
#include <iostream>
#include <vector>
using namespace std;

class Demo {
    vector<int> arr;

public:
    Demo(vector<int> arr){
        this->arr=arr;
    }
    int operator()(int x) {
        for(int i=0;i<arr.size();i++)
        arr[i]*=x;
    }
    void print_array(){
        for(int i=0;i<arr.size();i++) 
            cout<<arr[i]<<" ";
    }
};

int main() {
    Demo v({1,2,3,4,5});
    v(2);
    v.print_array();

    return 0;
}
