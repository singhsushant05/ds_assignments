#include<iostream>
using namespace std;

// A
/*int main(){
    int n;
    cout << "Enter size of matrix (n): ";
    cin >> n;
    int arr[100][100];

    cout << "Enter elements of " << n << "x" << n << " matrix:" << endl;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> arr[i][j];
      }
      
    }
    cout << "Dia matrix\n";
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < n; j++)
        {
            if (i == j )cout << arr[i][j] << " ";
            
            else cout << 0 << " ";
            
        }
        cout << endl;
    }
    
    
}*/


// B

int main() {

    int n = 4;
    int triD[3*n-2];  

    cout << "Enter tri-diagonal values:" << endl;
    for (int i = 0; i < 3*n-2; i++) cin >> triD[i];

    cout << "Tri-diagonal matrix:" << endl;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << triD[n-1+i] << " ";        
            else if (i == j+1) cout << triD[i-1] << " ";   
            else if (i+1 == j) cout << triD[2*n-1+i] << " "; 
            else cout << 0 << " ";
        
        }
        cout << endl;
    }
}



//C

/*int main() {
    int n = 3;
    int m =(n*(n+1))/2;
    int lower[m]; 

    cout << "Enter lower triangular values:" << endl;
    for (int i = 0; i < m; i++) cin >> upper[i];

    cout << "Lower triangular matrix:" << endl;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << lower[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}*/

//D
/*int main() {
    int n = 3;
    int m =(n*(n+1))/2;
    int upper[m]; 

    cout << "Enter upper triangular values:" << endl;
    for (int i = 0; i < m; i++) cin >> upper[i];

    cout << "Lower triangular matrix:" << endl;
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) cout << upper[k++] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}*/

//E im not getting the logic