#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {

  for (int a = 0; a < 5; a++) {
  for (int b = 5; b > a+1; b--) {cout<< "  ";}

        if (a==0||a==4)
       {
          for (int j = 1; j < 6; j++)   cout<<"* ";
        }
        else  for (int j = 1; j < 6; j++) {
          if (j==1||j==5)   cout<<"* ";
          else cout<<"  ";
      }
      cout<< "\n";
  }
    return 0;
  }
