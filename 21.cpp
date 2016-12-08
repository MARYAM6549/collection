#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) {
  int h = 1;
  for (int i=1 ; i < 11; i+=2, h++) {

        for (int a = 5; a > h; a--) {
        cout<< "  ";
      }
      for (int j = 1; j <= i; j++) {
        cout<<"* ";
      }
      if (i==9) continue;
  cout<<"\n";
}
  cout<<"\r";
   h = 0;
  	  for (int i=1 ; i < 11; i+=2, h++) {
      for (int j = 0; j < h; j++) {
  		cout<<"  ";
  	      }
  	      for (int k = 10; k > i; k--) {
  	        cout<<"* ";
  	      }
  	  cout<<"\n";
  	}
    return 0;
  }
