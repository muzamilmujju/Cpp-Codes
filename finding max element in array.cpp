#include <iostream>

using namespace std;

int main()
{
    int mx=-199999;
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++){    //max element in array
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx;
    }
    

    return 0;
}
