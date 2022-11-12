#include <iostream>
#include <memory>
using namespace std;


class Unique{

    private:

        int max;
	bool check;

    public:

	Unique(){cout << "Created!" << endl;
		cout << "===============" << endl;}

	int getMax(int max_I){	
	    
	    max = max_I;
	    std::cout << max << std::endl;
	    return max;
	}

	bool getCheck(bool check_i){
	    
	    check = check_i;
	    std::cout << check << std::endl;
	    return check;
	
	}

	~Unique(){cout << "Destroyed!" << endl;}



};



int main(int argc, char** argv){

    unique_ptr<Unique> p_ptr (new Unique) ;

    p_ptr->getMax(12);

    p_ptr->getCheck(true);


    return 0;
}
