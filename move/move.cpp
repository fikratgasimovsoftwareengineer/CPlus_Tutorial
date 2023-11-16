#include <iostream>
#include <utility>
#include <vector>


/*
 *std::move in C++ is a standard library function that converts its argument into an rvalue reference. This is primarily used to indicate that an object t may be "moved from", meaning the ownership of resources that t manages can be transferred to another object.

In simple terms, std::move is used to allow the efficient transfer of resources from one object to another, avoiding costly deep copies. This is especially useful for objects that manage dynamic memory, like strings or vectors, where moving means simply transferring the pointer to the dynamic memory from the source object to the destination object.


 * */




int main(){

    std::vector<int> vec1  = {1, 2, 3, 4, 5};
    std::vector<int> vec2={};

    std::cout << "VEC1 SIZE" << vec1.size() << std::endl;

    std::cout << "VEC2 SIZE" << vec2.size() << std::endl;
	

    vec2 = std::move(vec1);

    std::cout << "VEC1 SIZE" << vec1.size() << std::endl;

    std::cout << "VEC2 SIZE" << vec2.size() << std::endl;
    return 0;	
};
