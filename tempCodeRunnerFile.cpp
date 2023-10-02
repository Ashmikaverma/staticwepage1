c++

#include<bits/stdc++.h>
using namespace std;
int checkperfectsquare(float n){
    float x=pow(n,0.5);
    int y=int(x);
     float y=float(y);

    
    if(x%y==0){
        cout<<"perfect square"

    }
    else(){
        cout<<"not a perfect square"
    }
return 0;
}
int main(){
   float n; 
cout<<"enter no. u want to find square root of"<<endl;
cin>>n
checkperfectsquare(n);
return 0;
}