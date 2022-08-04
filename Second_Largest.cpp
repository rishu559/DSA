#include<bits\stdc++.h>
using namespace std;
// Approach 1:
int Largest(int arr[],int len){
    int max =arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}

int SecondLargest(int arr[],int len){
    int largest = Largest(arr,len);
    int secMaxIndex = -1;
    for(int i=0;i<len;i++){
        if(arr[i]!=largest){
            if(secMaxIndex==-1) secMaxIndex = i;
            else{
                if(arr[i]>arr[secMaxIndex]) secMaxIndex = i;
            }
        }
    }
    return secMaxIndex;
}

// Approach 2 : Efficient 
// Keep a track of largest and secondLargest while traversing
int secondLargest(int arr[],int len){
    int largest = 0;
    int nextLargest = -1;
    for(int i=1;i<len;i++){
        if(arr[i] > arr[largest]){
            nextLargest = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(nextLargest == -1 || arr[i]>arr[nextLargest]) 
                nextLargest = i;
        }
    }
    return nextLargest;
}
int main(){
    int arr[] = {4,4,4,4,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,len);
return 0;
}
