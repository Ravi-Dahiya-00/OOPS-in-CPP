#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[20];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int m;
    cin>>m;
    int arr2[20];
    for (int i=0;i<m;i++){
        cin >> arr2[i];
    }

   


    int merged[40];
    for (int i=0;i<n;i++){
        merged[i]=arr[i];
    }



    int tr=n;
    for (int i=0;i<m;i++){
        bool found=false;
        for (int j=0;j<tr;j++){
            if(arr2[i]==merged[j]){
                found=true;
                break;
            }
        }
        if(found==true){
            merged[tr++]=arr2[i];
        }
        else {
            for (int k=tr;k>0;k--){
                merged[k]=merged[k-1];
            }
            merged[0]=arr2[i];
            tr++;
        } 
    }

 
    for (int i=0;i<tr;i++){
        cout << merged[i] << " ";
    }
    return 0;
}