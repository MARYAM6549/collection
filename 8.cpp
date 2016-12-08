#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  for (int i = 1; i < 6; i++) {
  for (int j = 1; j < 6; j++)
      {
      if(i==5||j==1)  cout<<"* ";
      else if(j==i)  cout<<"* ";
      else cout<<"  ";
      }
    cout<<"\n";
  }
  return 0;
}
