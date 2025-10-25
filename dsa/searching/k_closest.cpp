#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int lb(vector<int>& nums, int target){
    int n=nums.size();
    int left=0, right=n-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) right=mid-1;
        else left=mid+1;
    }
    return left;
}

vector<int> k_closest(vector<int> &nums, int target, int k){
    deque<int> dq;
    vector<int> ans;
    int n=nums.size();
    int lb_idx=lb(nums, target);
    int left= lb_idx-1;
    int right= lb_idx;
    while(k>0){
        if(left<0){
            dq.push_back(nums[right]);
            right++;
        }
        else if(right>=n){
            dq.push_front(nums[left]);
            left--;
        }
        else if(abs(target-nums[right])<=abs(target-nums[left])){
            dq.push_back(nums[right]);
            right++;
        }
        else{
            dq.push_front(nums[left]);
            left--;
        }
        k--;
    }
    while(!dq.empty()){
        ans.push_back(dq.front());
        dq.pop_front();
    }
    return ans;

}

int main(){
    int n;
    int target;
    int k;
    cout<<"enter n"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"enter n elements of array"<<endl;
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<"enter target"<<endl;
    cin>>target;
    cout<<"enter k"<<endl;
    cin>>k;
    vector<int> ans=k_closest(nums,target, k);
    for(int num:ans) cout<<num<<" ";
    
}