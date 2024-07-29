// max

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        
        cin >> arr[i];

    }
    int first = 0;
    int last = n-1;
    int temp = 0;
    for(int i = 0; i<n; i++){
        if( arr[first] < arr[last]){
                
                int temp = arr[last];
                arr[last] = arr[first];
                arr[first] = temp;
                first ++;
                last --;

        }
    }
  
     for(int i = 0 ; i< n ; i++){
        
        cout<< arr[i];

    }
   
    return 0;
}
   