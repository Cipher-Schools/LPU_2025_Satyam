#include<iostream>
#include<vector>
using namespace std;

bool is_sorted(vector<int> &arr, int i){
    if(i==arr.size()-1) return true;
    if(arr[i]>arr[i+1]) return false;

    return is_sorted(arr, i+1);
}

int main(){
    vector<int> arr={1,2,3,4,5};
    if(is_sorted(arr, 0)) cout<<"yes";
    else cout<<"no";

}

