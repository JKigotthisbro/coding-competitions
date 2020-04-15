#include <iostream>

using namespace std; 

int t; 
int main() {

cin>>t; 

int input[t];

for(int i=0; i<t; i++){
  cin>>input[i];
}

int final[t]; 
for(int i=0; i<t; i++){
  input[i]=input[i]-1;
  if(input[i]+2<=2){
  final[i]=0;
  }
  else{
    if(input[i]%2==0){
      final[i]=(input[i])/2;
    }
    else if(input[i]%2!=0){
      final[i]=(input[i]-1)/2;
    }
  }
  cout<<final[i]<<"\n";
}

}

