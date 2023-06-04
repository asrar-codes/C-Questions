#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int row = 1;
  while(row<=n){
    int col = 1;
    while(col<=n-row + 1){
      cout<<col<<" ";
      col++;  
    }
    int stars = 2;
    while(stars<row+1){
      cout<<"*"<<" "<<"*"<<" ";
    stars+=1;
    }
    col = row;
    while(col<=n){
      cout<<n-col+1<<" ";
      col++;
    }

    row++;
    cout<<endl;
  }








  
  
  /*
  int row = 1;
  while (row <= n) {

    int col = 1;
    int space = 1;
    while (space < n - row) {
      cout << "  ";
      space++;
    }
    while (col <= row) {
      cout << col << " ";
      col++;
    }
    col = row -1;

    while (col >= 1) {

      cout << col << " ";
      col--;
    }
    cout << endl;
    row++;
  }

  */
}