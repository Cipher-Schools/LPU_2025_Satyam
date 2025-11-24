#include <iostream>
#include <queue>
using namespace std;


vector<int> k_largest_elements(vector<int> nums, int k){
    int n=nums.size();
    vector<int> ans(k); // array to store k largest elements
    // using a min heap
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.begin()+k);
    

    for(int i=k;i<n;i++){
        if(nums[i]>pq.top()){
            pq.pop();
            pq.push(nums[i]);
        }
    }

    // push all elements from heap to vector
    for(int i=0;i<k;i++){
        ans[k-i-1]=pq.top();
        pq.pop();
    }
    return ans;
}

int main() {
    vector<int> nums={3,2,9,1,7,12,8,0,4,3};
    int k=3;
    vector<int> ans=k_largest_elements(nums, k);
    cout<<"top "<<k<<" largest elements are: "<<endl;
    for(int i=0;i<k;i++) cout<<ans[i]<<" ";

}
