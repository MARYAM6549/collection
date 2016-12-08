#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int flag=0;
  for (int i = 0; i < 11; i++) {
        if (i==10||i==9) continue;
  for (int j = 0; j < i; j++) {
cout<<"  ";
  }
  flag = i%2;
  if (flag) {
  for (int j = 10; j > i; j-=2) cout<< "* ";
  }

cout<<"\n";
  }
    for (int i = 0; i < 10; i++) {
            if (i==0) continue;
    for (int j = 10; j > i; j--) {
      cout<< "  ";
    }
    flag = i%2;
    if (flag) {
    for (int j = 0; j < i; j+=2) cout<< "* ";
  }
  cout<< "\n";
}
return 0;
}
