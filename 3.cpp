#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {

  for (int i = 0; i < 5; i++) {
  for (int j = 5; j > i+1; j--) {
    cout<< "  ";
  }
  for (int k = 0; k < 5; k++) {
      cout<< "* ";
  }
      cout<< "\n";
  }
    return 0;
  }
