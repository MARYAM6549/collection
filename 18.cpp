#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
    for (int i = 0; i < 5; i++) {
  for (int a = 0; a < 4; a++) cout<<"  ";
  for (int b = 5; b > i+1; b--) cout<< "  ";
  cout<<"* ";
  cout<<"\r";
  for (int j = 0; j < i; j++)  cout<<"  ";
  cout<<"* ";
  if (i==0) {for (int c = 0; c < 8; c++) cout<<"* ";}
  cout<<"\n";
  }
    return 0;
  }
