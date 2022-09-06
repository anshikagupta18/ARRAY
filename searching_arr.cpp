#include <iostream>
using namespace std;

int search(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    int x;
    cin>>n;
    cin>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<endl;
    search(a, n, x);
    return 0;
}