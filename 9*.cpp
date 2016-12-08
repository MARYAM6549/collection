#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int l=0;
  for (int i = 0; i < 5; i++) {
  for (int j = 5; j > i+1; j--) {
    cout<<"  ";
    l=j;
  }
  for (int k = 5; k+l> 6; k--) {
    cout<<"* ";
  }
 if (i==4)   cout<<"* ";
  cout<<"\n";
  }
    return 0;
  }
