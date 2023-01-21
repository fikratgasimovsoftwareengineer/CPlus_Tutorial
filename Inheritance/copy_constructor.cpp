#include <iostream>

using namespace std;


class Sample{

    private:

        int id;
   
    public:

	void init(int x){
	
	    id = x;
	
	}

	Sample(){}; //default
	
	Sample(Sample &t){
	
	    id = t.id;
	}
	
	void display(){
	
	    cout << "ID = " << id << endl;
	
	}

};
int main(){

    Sample samp;

    samp.init(10);
    samp.display();


    Sample s(samp);
    s.display();
}
