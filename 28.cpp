#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int h = 1;
  for (int i=1 ; i < 11; i+=2, h++) {
if (i==1||i==2||i==3)   continue;
        for (int a = 5; a > h; a--) {
        cout<< "  ";
      }
      for (int j = 1; j <= i; j++) {
    //  if (j==1||j==2)   continue;
        cout<<"* ";
          }
    cout<< "  ";

                for (int a = 5; a > h; a--) {
                cout<< "  ";
              }
              for (int a = 5; a > h; a--) {
              cout<< "  ";
            }

              for (int j = 1; j <= i; j++) {
        //    if (j==1||j==2)   continue;
                cout<<"* ";
              }

  cout<<"\n";
}

 h = 0;
for (int i=1 ; i < 23; i+=2, h++) {
for (int j = 0; j < h; j++) {
cout<<"  ";
    }
    for (int k = 20; k > i; k--) {
      cout<<"* ";
    }
    if (i==1) {cout<<"\r";
  cout<<"* * * * * *  You Are Win  * * * * * * \n"; continue;
    }
cout<<"\n";
}
  return 0;
}
