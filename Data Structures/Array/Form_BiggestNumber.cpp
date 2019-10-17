#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
  
int myCompare(string X, string Y) 
{ 
    string XY = X.append(Y);  
    string YX = Y.append(X); 
    return XY.compare(YX) > 0 ? 1: 0; 
} 

void printLargest(int arr) 
{ 
    sort(arr, myCompare); 
  
    for (int i=0; i < n ; i++ ) 
        cout << arr[i]; 
} 

int main() 
{ 
    int arr[100]; 
    int t,n;
    cin>>t;
    while(t--)
    {
      cin>>n;
      for(int i=0;i<n;i++)
      {
      	cin>>arr[i];
      }    
    printLargest(arr); 
    }

   return 0; 
} 