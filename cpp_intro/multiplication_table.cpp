#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main(){
  int n = 10;
  int product[10][10];

  for(int i = 0; i<n; ++i){
    for(int j = 0; j<n; ++j){
      product[i][j] = i*j;
    }

  }

  for(int i = 0; i<n; ++i){
    for(int j = 0; j<n; ++j){
    cout <<   product[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
