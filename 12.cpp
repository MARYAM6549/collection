#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  for (int i = 1; i < 6; i++) {
  //  cout<< "\r";
        for (int a = 5; a > i; a--) {
          cout<< "  ";
        }cout<<"* ";
            cout<< "\r";
      for (int j = 1; j < 6; j++)
          {
          if(i==1||j==1)  cout<<"* ";
      //    else if(j==i)  cout<<"* ";
        //  else cout<<"  ";
          }
    cout<<"\n";
  }
  return 0;
}
