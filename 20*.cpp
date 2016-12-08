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
 if (i==4) {  cout<<"* "; continue;}
  cout<<"\n";
  }
  cout<<"\r";
  for (int i = 0; i < 6; i++) {
  for (int k = 5; k > 0; k--) {
    cout<<"* ";
  }
cout<<"\r";
for (int j = 0; j < i; j++) {
cout<<"  ";
}
if (i==5) continue;
  cout<<"\n";
  }
    return 0;
  }
