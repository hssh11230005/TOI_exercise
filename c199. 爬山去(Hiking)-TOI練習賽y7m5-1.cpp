#include<iostream>
using namespace std;

int main(){
    int n, count = 0; cin>>n; int h[n];
    for(int i = 0; i < n; i++){
        cin>>h[i];
    }
    for(int i = 0; i <n; i++){
        if(h[i] > h[i-1]){
            while(i != n-1 && h[i] == h[i+1]){
                i++;
            }
            if(i != n-1 && h[i] > h[i+1]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
