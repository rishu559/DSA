#include<bits\stdc++.h>
using namespace std;

int larrgestIndex(int arr[],int n){
    int res =0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

int main(){
    int arr[] = {22,3,5,3,1,6,7,5,12,3,5,2,1,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<larrgestIndex(arr,len);
return 0;
}