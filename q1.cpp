#include<iostream>
using namespace std;
int binary_search(int n, int arr[] , int key){
    int start = 0;
    int end  = n-1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
      if (arr[mid] == key) return mid;
      
      else if (arr[mid] < key) 
       start = mid + 1;

      else if (arr[mid]> key) 
      end =  mid - 1;
      

    }
   return -1; 
}
int main(){
    int n;
    cout<<"enter size :";
    cin >> n;
    int k;
    
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    cout<<"enter key :";
    cin >> k;

    cout << binary_search(n,arr,k);
      
}