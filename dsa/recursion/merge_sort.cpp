#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int start, int end){
    int mid=(start+end)/2;
    vector<int> temp;
    int i=start, j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    int k=start;
    for(int i=0;i<temp.size();i++){
        arr[k]=temp[i];
        k++;
    }
}


void merge_sort(vector<int>& arr, int start, int end){
    if(start==end) return;
    int mid=(start+end)/2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);
    merge(arr, start,end);
}

void print_array(vector<int> arr){
    for(int i=0;i<arr.size();i++)cout<<arr[i];
    cout<<endl;
}

int main(){
    vector<int> arr={2,6,1,5,3,9};
    print_array(arr);
    merge_sort(arr, 0, arr.size()-1);
    print_array(arr);
}