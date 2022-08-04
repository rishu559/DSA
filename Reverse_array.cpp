#include<bits\stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int low=0 , high = n-1;
    while(low<high){
        int temp = arr[low];
         arr[low] = arr[high];
         arr[high] = temp;
        low++;
        high--;
    }
}

void removeDuplicate(int arr[],int len){
    vector<int> temp;
    temp.push_back(arr[0]);
    int res=1;
    for(int i=1;i<len;i++){
        if(temp[res-1]!=arr[i]){
            temp.push_back(arr[i]);
            res++;
        }
    }
    for(int i:temp){
        cout<<i<<" ";
    } 
}
    
int main(){
    int arr[] = {1,1,1,1,2,2,3,3,4,4,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<len;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // reverse(arr, len);
    // for(int i=0;i<len;i++){
    //     cout<<arr[i]<<" ";
    // }
    removeDuplicate(arr, len);

return 0;
}