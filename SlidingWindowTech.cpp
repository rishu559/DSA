#include<bits\stdc++.h>
using namespace std;

int max_k_Subarray_Sum(int arr[],int len,int k){
    int curSum = 0;
    for(int i=0;i<k;i++){
        curSum += arr[i];
    }
    int maxSum = curSum;
    for(int i=0;i<len-k;i++){
        curSum = curSum - arr[i] + arr[k+i];
        maxSum = max(curSum,maxSum);
    }
    return maxSum;
}
// A function to find if there is a subarray with the given sum or not
// In an array of non-negative numbers only
bool findSum(int arr[],int len, int KeySum){
    int sum = 0,s=0;
    for(int i=0;i<len;i++){
        if(sum<KeySum){
            sum += arr[i];
        }
        else if(sum == KeySum){
            return true;
        }
        else{
            while(sum>KeySum){
                sum-=arr[s];
                s++;
            }
            i--;
        }
    }
    return false;
}
// Print N-bonnacci numbers
void printNbonacci(int n,int m){
    int arr[m];
    for(int i=0;i<n-1;i++){
        arr[i] = 0;
    }
    int sum = 1;
    arr[n-1] = 1;
    arr[n] = sum;
    for(int i=n+1;i<m;i++){
        sum = sum - arr[i-n-1]+arr[i-1];
        arr[i] = sum;
    } 
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,8,30,20,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int k  =3;
    // cout<<max_k_Subarray_Sum(arr,len,k);
    // cout<<findSum(arr,len,20);
    printNbonacci(3,8);
return 0;
}