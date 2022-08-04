#include<bits\stdc++.h>
using namespace std;

int maxSubarraySum(int arr[],int len){
    int curSum =0;
    int maxSum =arr[0];
    for(int i=0;i<len;i++){
        curSum += arr[i];
        maxSum = max(maxSum,curSum);
        if(curSum<0) curSum = 0;
    }
    return maxSum;
}

int maximum_Circular_Sum(int arr[],int len){
    int curSum = 0;
    int minSum = arr[0];
    int totalSum =0;
    for(int i=0;i<len;i++){
        totalSum += arr[i];
        curSum +=arr[i];
        minSum = min(minSum,curSum);
        if(curSum>0) curSum = 0;
    }
    return totalSum-minSum;

}

int main(){
    int arr[] = {-1,2,3,4,-5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<maximum_Circular_Sum(arr,len);
return 0;
}