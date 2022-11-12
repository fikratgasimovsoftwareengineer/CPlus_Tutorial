#include <iostream>

#include <vector>

int main(){

    
    std::vector<int> v1 = {3, 4, 5};

    std::vector<int> v2 = {4, 6, 7, 12, 45};

    auto push_oper = [&v1, &v2](int in_var){v1.push_back(in_var), v2.push_back(in_var);};

    

    push_oper(20);

}
