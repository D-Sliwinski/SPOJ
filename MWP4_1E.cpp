#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int prefixEqualsSufix(int arr[], int n){
    int l=arr[0],p=0;
    for(int i=1;i<n;i++){
        p+=arr[i];
    }
    if(l==p){
        return 1;
    }
    for(int i=1;i<n;i++){
        if(l==p){
            return i;
        }
        l+=arr[i];
        p-=arr[i];
    }
    return 0;
}
int main(){
    int t,t2;
    vector<int> resultArray;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> t2;
        int array[t2];
        for(int j=0;j<t2;j++){
            cin >> array[j];
        }
        resultArray.push_back(prefixEqualsSufix(array,t2));
    }
    for(int i=0;i<resultArray.size();i++){
        cout <<  resultArray[i] << endl;
    }
}
