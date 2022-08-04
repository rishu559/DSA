#include<bits\stdc++.h>
using namespace std;
// Naive Approach :
int waterTrapped(int arr[],int len){
    int sum = 0;
    for(int i=1;i<len-1;i++){
        int lmax = 0,rmax = 0;
        for(int j=0;j<i;j++){
            lmax = max(lmax,arr[j]);
        }
        for(int j=len-1;j>i;j--){
            rmax = max(rmax,arr[j]);
        }
        int temp = min(lmax,rmax)-arr[i];
        if(temp>0)
            sum += temp;
    }
    return sum;
}
// Efficient Approach 
int waterTrapped_1(int arr[],int len){
    int sum =0;
    int lmax[len],rmax[len];
    lmax[0] = arr[0];
    for(int i=1;i<len;i++){
        lmax[i] = max(arr[i],lmax[i-1]);
    }
    rmax[len-1] = arr[len-1];
    for(int i=len-2;i>=0;i--){
        rmax[i] = max(rmax[i-1],arr[i]);
    }
    for(int i=1;i<len-1;i++){
        sum += min(lmax[i],rmax[i]) - arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,1,0,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<waterTrapped_1(arr,len);
return 0;
}