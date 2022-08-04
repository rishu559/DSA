#include<bits\stdc++.h>
using namespace std;


//Approach 1:
void moveZerostoEnd(int arr[],int len){
    // Find the zero 
    // Swap the next non-zero element
    for(int i=0;i<len-1;i++){
        if(arr[i]==0){
            for(int j=i+1;j<len;j++){
                if(arr[j]!=0){
                    arr[i] = arr[j];
                    arr[j] = 0;
                    break;
                }
            }
        }
    }
}

// Approach 2: 
void separateZeros(int arr[],int len){
    // keep a count of non-zero elements
    int count =0;
    for(int i=0;i<len-1;i++){
        // if the element is non-zero count++
        if(arr[i]!=0){
            count++;
        }
        // If the next element is nonzero 
        // Swap with the element at index at count
        else if(arr[i+1]!=0){
            arr[count] = arr[i+1];
            arr[i+1]=0;
            count++;
        }
    }
}

void reverse(int arr[], int low , int high){
    while(low<high){
        int temp = arr[low];
         arr[low] = arr[high];
         arr[high] = temp;
        low++;
        high--;
    }
}

void leftRotate(int arr[],int len){
    int temp = arr[0];
    for(int i=0;i<len-1;i++){
        arr[i] = arr[i+1];
    }
    arr[len-1] = temp;
}

// Approach 1:
void leftRotate(int arr[],int len,int d)
{
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=0;i<len-d;i++){
        arr[i] = arr[i+d];
    }
    for(int i=0;i<d;i++){
        arr[len-d+i] = temp[i];
    }
}

// Approach 2: 
/*
          1 2 3 4 5 6 7 8 9    d = 3
        3 2 1   9 8 7 6 5 4 
          4 5 6 7 8 9 1 2 3
*/

void leftRot(int arr[], int len,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,len-1);
    reverse(arr,0,len-1);
}

void rightRotate(int arr[],int len){
    int temp = arr[len-1];
    for(int i=len-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    //moveZerostoEnd(arr,len);
    leftRot(arr,len,3);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rightRotate(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    separateZeros(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}