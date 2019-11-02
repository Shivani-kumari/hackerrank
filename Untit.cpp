#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,l,k,m;
    cout<<"number of array and nuber of query";
    cin >> n >> q  ; 
    for(int i=0;i<n ; i++){
        int l ;
        cout<<"Enter the length of array";
        cin>> l;
        int arr[l];
		cout<<"Enter array value";
        for(int j=0;j<l;j++)
        cin>>arr[j];
      k++;
        int index;
        cout<<"  Enter your qrery \n";
        cin>> index;
        cout<<arr[index];
    }
    
    return 0;
}
