#include<map>
#include<string>
#include<iostream>


/*Map ranges with alphabatic order */



int main(){

    const std::map<std::string, int>darkNet{
    
        {"Aerson", 0},

	{"Bnife", 1},

	{"Cccissors", 2},

	{"Paper", 3},

	{"TV", 4},

	{"Spoon", 5},

	{"Monitor", 6}
    
    };

    for (auto&[class_name, class_id] : darkNet)

	std::cout <<"Class_Name: " <<class_name<< "    " << " Class Id : " 
		<< class_id << '\n';

}

