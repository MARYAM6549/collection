#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
    for (int i = 0; i < 5; i++) {
  for (int a = 0; a < 4; a++) cout<<"  ";
  for (int b = 5; b > i+1; b--) cout<< "  ";
  cout<<"* ";
  cout<<"\r";
  for (int j = 0; j < i; j++)  cout<<"  ";
  cout<<"* ";
if (i==4){  cout<<"\r";  continue;}
  cout<<"\n";
  }
  for (int i = 0; i < 5; i++) {
for (int a = 0; a < 4; a++) cout<<"  ";
for (int j = 0; j < i; j++)  cout<<"  ";
cout<<"* ";
cout<<"\r";
for (int b = 5; b > i+1; b--) cout<< "  ";
cout<<"* ";
if (i==4) continue;
cout<<"\n";
}
    cout<<"\n";
  return 0;
}


/*
int main(int argc, char const *argv[]) {
  for (int i = 1; i < 10; i++) {
  for (int a = 10; a > i; a--) {
        cout<< "  ";
      }cout<<"* ";
        cout<< "\r";
        for (int j = 1; j < 6; j++)
            {
             if(i==j)  cout<<"* ";
            else cout<<"  ";
            }
          cout<<"\n";
        }
        for (int i = 0; i < 5; i++) {
      for (int a = 0; a < 4; a++) cout<<"  ";
      for (int j = 0; j < i; j++)  cout<<"  ";
      cout<<"* ";
      cout<<"\r";
      for (int b = 5; b > i+1; b--) cout<< "  ";
      cout<<"* ";
      if (i==4) continue;
      cout<<"\n";
      }
          cout<<"\n";
        return 0;
      }*/
