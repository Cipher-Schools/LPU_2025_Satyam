#include <bits/stdc++.h>
using namespace std;

class max_heap{
    private:
    vector<int> heap;

    void heapify_up(int i){
        while(i>1){
            int parent =i/2;
            if(heap[parent]<heap[i]){
                swap(heap[parent], heap[i]);
                i=parent;
            }
            else break;
        }
    }

    void heapify_down(int i){
        int n=heap.size()-1;
        while(2*i<=n){
            int left=2*i;
            int right=2*i+1;
            int largest=left;
            if(right<=n && heap[right]>heap[left])
            largest=right;
            if(heap[i]<heap[largest]){
                swap(heap[i], heap[largest]);
                i=largest;
            }
            else break;
        }
    }


    public:
    // constructor
    max_heap(){
        heap.push_back(0);
    }

    bool is_empty(){
        return heap.size()==1;
    }

    void push(int x){
        heap.push_back(x);
        heapify_up(heap.size()-1);
    }

    void pop(){
        if(is_empty()) return;
        heap[1]=heap.back();
        heap.pop_back();
        heapify_down(1);
    }

    int front(){
        if(is_empty()){
            cout<<"heap is empty";
            return -1;
        }
        return heap[1];
    }
};

int main(){
    max_heap heap;
    heap.push(1);
    heap.push(5);
    heap.push(3);
    cout<<"top element is "<<heap.front()<<endl;
    heap.pop();
    cout<<"top element is "<<heap.front()<<endl;
}