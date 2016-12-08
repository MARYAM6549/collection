#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 6; i++) {
        if (i==5) continue;
  for (int j = 0; j < i; j++) {
cout<<"* ";
  }
cout<<"\n";
  }
    for (int i = 0; i < 5; i++) {
    for (int j = 5; j > i; j--) {
      cout<< "* ";
    }
    for (int k = 0; k < 5; k++) {
        cout<< "  ";
    }
        cout<< "\n";
    }
      return 0;
    }
