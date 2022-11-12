#include <stdio.h>
#include <iostream>
#include <memory>

using namespace std;

class Human {


	public:
	    Human(int n_i, int x_i):n(n_i), x(x_i){};

	    // publish 
	    int head(){
	    
	        return n * x;
	    }

	private:

		int n;
		int x;

};


int main(){

    unique_ptr<Human> p_ptr(new Human(3, 4));

    cout << p_ptr->head() << endl;    

   /*Human* ptr = new Human();
    * ptr->head()
    * delete ptr
    * 	*/
}
