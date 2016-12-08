	#include "iostream"

	using namespace std;

	int main(int argc, char const *argv[]) {
	  int h = 0;
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
