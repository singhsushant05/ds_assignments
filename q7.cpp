#include<iostream>
#include<vector>
using namespace std;

int inversion_in_array(vector<int> &arr){
    int n = arr.size();
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j < n; j++)
      {
        if (arr[i]>arr[j])
        {
            count++;
        }
        
      }
      
    }
    return count;
    

}
int main(){
int n;
cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++) cin >> arr[i];
int result = inversion_in_array(arr);
cout << result;
return 0;

}