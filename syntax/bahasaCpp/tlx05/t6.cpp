#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if((x2-x1)>0){
        if ((y2-y1)>0){
            cout<<x2-x1+y2-y1;
        }
        else if((y2-y1)<0){
            cout<<x2-x1-y2+y1;
        }
        else {
            cout<< x2-x1;
        } 
    }
    else if((x2-x1)<0){
        if((y2-y1)>0){
            cout<<-x2+x1+y2-y1;
            
        }else if((y2-y1)<0){
            cout<<-x2+x1-y2+y1;
            }
            else{
                cout<<-x2+x1;
            }
    }else {
        if((y2-y1)>0){
            cout<< y2-y1;
        }
        else if ((y2-y1)<0){
            cout<<y1-y2;
        }
        else{
            cout<<"0";
    }}
    return 0;
}
