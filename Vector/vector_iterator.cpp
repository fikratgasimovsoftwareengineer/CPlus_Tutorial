#include <iostream>

#include <vector>


int main(){

    std::vector<int>vector_full;

    for (int i = 0; i < 5; i++){ vector_full.push_back(i);}

    std::cout << "Start .. Reading from Vec: \n";

    for(std::vector<int>::iterator it = vector_full.begin(); it != vector_full.end(); ++it){
	    std::cout << "[ " << *it << " ]"<<std::endl;
	    std::cout << " " << std::endl;
    }

}
