#include <iostream>

using namespace std;

template<class Temp>

class Calculator{


    private:
	    Temp t1, t2;
    public:
	    Calculator(Temp temp1, Temp temp2){
	    
	        t1 = temp1;
		t2 = temp2;
	    }

	    void show(){
	    
	        cout << "Addition is :" << t1 << "+" << t2 << "="<< addition()<<  endl;
	    	cout << "Subtraction is :" << t1 << "-" << t2 << "="<< addition()<<  endl;
		cout << "Division is :" << t1 << "/" << t2 << "="<< addition()<<  endl;
	    }


	    Temp addition() {return (t1 + t2);}
	    Temp subtraction() {return (t1 - t2);}
	    Temp division() {return (t1/t2);}
};

int main(){

    Calculator<int>cal(5, 4);
    Calculator<float>cal2(3.2, 2.8);

    cout << "Integer results for 5 and 4:" << endl;
    cal.show();

    cout << "Float results for 5 and 4:" << endl;
    cal2.show();


}
