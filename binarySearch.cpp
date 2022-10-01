// BINARY SEARCH ALGORITHM
//TIME COMPLEXITY : O(logn)
//SPACE COMPLEXITY : O(1)

#include<bits/stdc++.h>
using namespace std;



int bs(int*arr,int si,int ei,int x){

    while(si <= ei){
        int mid = (si+ei)/2;
        if(arr[mid] == x)return mid;

        if(arr[mid] > x){
            ei = mid-1;
        }else{
            si = mid+1;
        }
    }
    return -1;
}


int binarySearch(int*arr,int n,int x){
    return bs(arr,0,n-1,x);
}

// THE INPUT ARRAY SHOULD BE SORTED
// WE GET THE INDEX OF THE ELEMENT (0 BASED INDEXING)
// IF ELEMENT IS NOT PRESENT IN THE SORTED ARRAY WE GET -1

int main(){
    int n,x;
    cin>>n>>x;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr,n,x)<<endl;
}
