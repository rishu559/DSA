#include<bits\stdc++.h>
using namespace std;

// Find the majority element in the given array that
// Assume the first element as the majority
// Count++ if same as majority
// else Count-- 
// Second part is to check whether the found index is majority or not
int findMajor(int arr[],int n){
    int res=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res = i;
            count=1;
        }
    }
    count =0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]) count++;
    }
    if(count<=(n/2)) {
            return -1;
        }
    return res;
}
int main(){
    int arr[] = {1,2,1,2,2,2,1,2,3};
    cout<<findMajor(arr,9);
return 0;
}