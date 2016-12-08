#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  for (int i = 1; i < 10; i++){
  for (int j = 1; j < 10; j++) {
    if (i==5||j==5)       cout<<"+ ";
    else  cout<<"  ";
      }
cout<<"\n";
  }
  return 0;
}
