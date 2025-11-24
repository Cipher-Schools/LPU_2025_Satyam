#include <iostream>
#include <queue>
using namespace std;

void print_array(vector<int> &arr, int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void sort_using_heap(vector<int> &arr, int n){
    // using a min heap
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        arr[i]=pq.top();
        pq.pop();
    }
}

int main() {
    vector<int> arr={3,2,9,1,7};
    cout<<"original array"<<endl;
    print_array(arr, 5);
    sort_using_heap(arr, 5);
    cout<<"sorted array"<<endl;
    print_array(arr, 5);


}
