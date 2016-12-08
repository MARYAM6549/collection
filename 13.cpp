#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {

  for (int i = 0; i < 6; i++) {
  for (int k = 5; k > 0; k--) {
    cout<<"* ";
  }
cout<<"\r";
for (int j = 0; j < i; j++) {
cout<<"  ";
}
if (i==5)  { cout<<"\r";continue;}
  cout<<"\n";
  }
    return 0;
  }
