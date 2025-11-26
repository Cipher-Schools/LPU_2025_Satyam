// overload + operator to merge two arrays
#include <iostream>
#include <vector>
using namespace std;

class Array {
    vector<int> arr;

public:
    Array(vector<int> arr){
        this->arr=arr;
    }
    Array operator+(Array a){
        int n1=arr.size();
        int n2=a.arr.size();
        vector<int> result(n1+n2);
        for(int i=0;i<n1;i++)result[i]=arr[i];
        for(int i=0;i<n2;i++) result[n1+i]=a.arr[i];
        return Array(result);
    }
    void print_array(){
        for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    }
};

int main() {
    Array a({1,2,3,4,5});
    Array b({6,7,8,9});
    Array c=a+b;
    c.print_array();

    return 0;
}
