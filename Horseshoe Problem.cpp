#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int counter1=0; 
int counter2=0; 
int fake =0; 
int checker;

int main() {

int N[4]; 

//counter 1= # of sets of duplicates

//counter 2= # of distinct numbers 

set<int> horseshoes ; 
int input; 

  for (int i=0; i<4; i++){
    cin >> input;
    horseshoes.insert(input); 
    // cin>>N[i]; 
  }


sort(N, N+n); 

checker = -3; 

  for (int i=0; i<4; i++){
    if (count(N, N+4, N[i])==1){
        counter2++;
    } 
    else if(N[i]!= N[checker]){
        counter1++;
        checker = i; 
    }
  }
 

cout<<4-(counter2+counter1);

}