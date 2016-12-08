#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int w=0;
  for (int i = 0; i < 6; i++) {
  for (int a = 0; a < 5; a++) cout<<"  ";
  for (int k = 5; k > 0; k--) {
    cout<<"* ";
  }
cout<<"\r";
 for (int a = 0; a < 5; a++) cout<<"  ";
 for (int j = 0; j < i; j++) {
cout<<"  ";
}
if (i==5) { cout<<"\r";continue;}
cout<<"\r";
for (int j = 5; j > i; j--) {
  cout<< "* ";
  w=j;
}
for (int k = 0; k+w > 5; k--) {
    cout<< "  ";
}
  cout<<"\n";
  }

    for (int i = 0; i < 5; i++) {
      for (int a = 0; a < 4; a++) cout<<"  ";
      for (int b = 5; b > i; b--) cout<< "  ";
        cout<<"* ";
for (int j = 0; j < i; j++)  cout<<"* ";
      cout<<"\r";
  for (int j = 0; j < i; j++)  cout<<"* ";
  cout<<"* ";
  cout<<"\n";
  }
    return 0;
  }
