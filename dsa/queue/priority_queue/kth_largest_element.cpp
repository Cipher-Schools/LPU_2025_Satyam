#include <iostream>
#include <queue>
using namespace std;


int  kth_largest_element(vector<int> nums, int k){
    int n=nums.size();
    // using a min heap
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.begin()+k);

    for(int i=k;i<n;i++){
        if(nums[i]>pq.top()){
            pq.pop();
            pq.push(nums[i]);
        }
    }
    return pq.top();
}

int main() {
    vector<int> nums={3,2,9,1,7,12,8,0,4,3};
    int k=3;
    cout<<kth_largest_element(nums, k);
    return 0;

}
