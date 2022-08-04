#include <bits\stdc++.h>
using namespace std;
// Approach 1:
int MaximumProfit(int arr[], int len)
{
    int profit = 0;
    int i = 0;
    while (i < len-1)
    {
        int buy = 0, sell = 0;
        while (arr[i] > arr[i + 1] && i < len-1)
        {
            i++;
        }
        buy = arr[i];
        while (arr[i] < arr[i + 1] && i < len-1)
        {
            i++;
        }
        sell = arr[i];
        profit += (sell - buy);
        i++;
    }
    return profit;
}
// Approach 2:
int MaximumProfit_2(int arr[], int len){
    int profit =0;
    for(int i=0;i<len-1;i++){
        if(arr[i]<arr[i+1]){
            profit += (arr[i+1] - arr[i] );
        }
    }
    return profit ;
}
int main()
{
    int arr[] = {1,2,3,1,2,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<MaximumProfit_2(arr,len);
    return 0;
}