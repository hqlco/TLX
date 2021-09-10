#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    if (a/10==0){
        cout<<"satuan";
    }
     else if(a/100==0){
        cout<<"puluhan";
    }
    else if(a/1000==0){
        cout<< "ratusan";
    }
    else if (a/10000==0){
        cout<<"ribuan";
    }
    else if(a/100000==0){
        cout<<"puluhribuan";
    }
    return 0;
}
