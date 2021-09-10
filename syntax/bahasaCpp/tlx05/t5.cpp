#include<iostream>
using namespace std;
int main(){
    double c;
    int a,b;
    cin>>c;
    a=c;
    
    if(c>0){
        if (a<c){

        
        b=a;
        a=a+1;}
        else if(c==a){
            b=a;
            a=a;
        }
    }
    else if(c<0){
       if(a>c){
        b=a-1; 
        a=a;
        
    }
    else if(c==a){
        b=a;
        a=a;

    }}
   else
   {
      a=0;
      b=0;
   }
   
    cout<<b<<" "<<a;
    return 0;

}
