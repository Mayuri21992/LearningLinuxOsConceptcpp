/*Akamai interview question*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>storeSetbits(int n){
    vector<int> setBit;
    int remainder=0;
    while(n!=0){
        remainder=n%2;
        setBit.push_back(remainder);
        n=n/2;
       
    }
    return setBit;
}

int main(){
    int n,count=0,j=0;
    vector<int> bitSET,ap;
    cin>>n;
    bitSET=storeSetbits(n);
    for(int i=0;i<bitSET.size();i++){
        if(bitSET[i]==1)
           count++;
        
    }
    ap.push_back(count);
    
    for(int i=0;i<bitSET.size();i++){
        if(bitSET[i] == 1){
            ap.push_back(i);
            
           }
    }
    
    for(int i=0;i<ap.size();i++){
        cout<<ap[i]<<endl;
        }

    return 0;
    }