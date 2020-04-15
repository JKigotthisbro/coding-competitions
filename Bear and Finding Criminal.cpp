#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std; 

int n,a; 

int main(){
cin>>n>>a; 
int answer[n];

for(int i=0; i<n; i++){
  cin>>answer[i];
}                

int checker;
int lel =0;

for(int i=0; i<n; i++){
  if(i<=min(abs(a-1-(n-1)), abs(a-1))){
    checker = answer[a-1+i]+answer[a-1-i];
    
    if (checker==2 && i!= 0){
      lel= lel +2; 
    }
    else if(checker==2 && i==0){
      lel = lel + 1;
    }
    else if(checker==1){
      lel = lel;
    }
  }
  else if (i>=min(abs(a-1-(n-1)), abs(a-1))&&i <= max(abs(a-1-(n-1)), abs(a-1))&&answer[a-1+i]==1) {
    lel = lel +1; 
  }
  else if (i>=min(abs(a-1-(n-1)), abs(a-1))&&i <= max(abs(a-1-(n-1)), abs(a-1))&&answer[a-1-i]==1) {
    lel = lel +1; 
  }
  
}

cout<<lel; 

}


/*
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n,a; 

int main() {

cin>>n>>a;

int answer[n];

for(int i=0; i<n; i++){
  cin>>answer[i];
}

int j=0;
bool checker = true; 
int counter =0;

while (checker){
  if (j <= min(abs(n-1 -(a-1)), abs(0-(a-1))) && answer[a-1+j]+answer[a-1-j]==1){
  counter = counter; 
  }
  else if(j==0 &&answer[a-1+j]+answer[a-1-j]==2){
  counter++;
  }
  else if(answer[a-1+j]+answer[a-1-j]==2 && j!= 0){
  counter=counter + 2; 
  }
  else if (a-1-j<0&& answer[a-1+j]==1){
  counter ++;
  }
  else if (a-1+j>n-1 && answer[a-1-j]==1){
  counter ++;
  }
  j++;
  if(j > max(abs(n-1 -(a-1)), abs(0-(a-1)))){
  checker=false;
  }
}

cout<<counter; 

}
*/