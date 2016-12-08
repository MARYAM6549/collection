#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 5; i++) {
  for (int j = 0; j < i; j++) cout<<" ";
    if (i==0||i==4)
   {
      for (int j = 1; j < 6; j++)   cout<<"* ";
    }
    else  for (int j = 1; j < 6; j++) {
      if (j==1||j==5)   cout<<"* ";
      else cout<<"  ";
  }
cout<<"\n";
}
return 0;
}
