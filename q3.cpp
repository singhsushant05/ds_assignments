#include<iostream>
using namespace std;

void sorting(int arr[],int n){
    for (int i = n-1; i >= 1; i--)
    {
       for (int j = 0; j < i; j++)
       {
        if (arr[j]> arr[j+1])
        {
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
        }
        
        
       }
       
    }
    
}
int findElement(int arr[],int n,int num){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << "found the element at index: ";
            return i;
        }
    }
    cout<< " no  element like that found";
   return -1;
}
int main(){
    int n;
    cout << "enter the size of arr : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sorting(arr,n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    int num;
    
    cout << "\nenter the number you wanna find : ";
    cin >> num;
    
    int index = findElement(arr,n,num);
    if (index != -1)
    {
    cout << index << " ";
    }
    

    return 0;
    

    
   
    
}