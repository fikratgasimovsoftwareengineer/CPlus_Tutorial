#include <iostream>

using namespace std;

class talk{

  private:
	  int opt;
	 // int opt_2;
  public:

	  void return_opt(int );

};
void talk::return_opt(int t){

   t = opt + 3;	
   cout << t << endl;

}

int main(){

  talk t1;
  t1.return_opt();
return 0;
}
