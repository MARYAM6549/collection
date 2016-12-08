#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  for (int i = 1; i < 6; i++)
      {
        if (i==1||i==5)
       {
          for (int j = 1; j < 6; j++)   cout<<"* ";
        }
        else  for (int j = 1; j < 6; j++) {
          if (j==1||j==5)   cout<<"* ";
          else cout<<"  ";
      }
    /* code */cout<<"\n";
  }
  return 0;
}
