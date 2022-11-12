#include <iostream>
#include <vector>
#include <algorithm>

int main(){


    std::vector<int>vecValues = {2, 3, 4, 5, 6, 12};

   
    /* For Each Iterator with Lambda Anonomous Function!
     * 
     * */
    std::for_each(vecValues.begin(), vecValues.end(), [](auto &iValue)
    { std::cout << iValue << std::endl;
    });

    /*Another Method below */
   std::cout << "==========================\n";
   /*Iterator Range Functuon is USed !*/
   for (auto &iValue:vecValues)
	   std::cout << iValue << std::endl;
}
