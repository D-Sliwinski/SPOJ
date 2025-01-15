#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> stringToVector(string n){
    vector<string> result;
    string newWord = "";
    for(int i=0;i<n.length();i++){
        if(n[i]>=65 && n[i]<=90)
            newWord += n[i];
        else{
            if(!newWord.empty()){
                result.push_back(newWord);
                newWord = "";
            }
        }
    }
    if(!newWord.empty()){
        result.push_back(newWord);
    }
    return result;
}
int main(){
    string n1="",n2="";
    int count = 0;

    vector<string> n1Vector;
    vector<string> n2Vector;
    vector<string> result;
    
    getline(cin,n1);
    getline(cin,n2);

    n1Vector = stringToVector(n1);
    n2Vector = stringToVector(n2);

    for(int i=0,j=0;i<n1Vector.size();i++){
        if(n1Vector[i] == n2Vector[j]){
            j++;
        }
        else{
            result.push_back(n1Vector[i]);
            count++;
        }
    }
    cout << count << '\n';
    sort(result.begin(),result.end());
    for(int i=0;i<count;i++){
        cout << result[i] << '\n';
    }
}
