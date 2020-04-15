#include <iostream>
#include <algorithm> 
using namespace std; 

int n; 



int main() {

cin >> n;
int input[n];
int left[n];
int right[n];
int answer[n];

  for (int i=0; i<n; i++){
  cin>>input[i];
  }

    left[0]=1;

  for (int i=1; i<n; i++){  
    left[i]=1;
    if (input[i]>=input[i-1]){
    left[i]=left[i]+left[i-1]; 
    }
    else{
    left[i]=1;
    }
  }


right[n-1]=1;

    for (int i=n-2; i>=0; i--){  
    right[i]=1;
    if (input[i]>=input[i+1]){
    right[i]=right[i]+right[i+1]; 
    }
    else{
    right[i]=1;
    }
  }

  int MAX;
    for(int i=0; i<n; i++){
      answer[i]=left[i]+right[i]-1;
      MAX = max(MAX, answer[i]); 
    }
cout << MAX; 
}