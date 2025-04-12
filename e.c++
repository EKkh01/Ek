#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the n ";
cin>>n;
bool is_pr=true;
if(n==1||2==0){
    is_pr=false;
}
for(int i=2;i<=2/n;i++){
    is_pr=false;
    break;
}
if(is_pr){
    cout<<n<<" is prime number"<<endl;
}else{
    cout<<n<<" is not prime number"<<endl;
}



    return 0;
}