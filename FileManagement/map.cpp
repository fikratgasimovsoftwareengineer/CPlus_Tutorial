#include <map>
#include <iostream>
using namespace std;


int main(){

    map<int,string> sample_map;

    sample_map.insert(pair<int, string>(1, "one"));
    sample_map.insert(pair<int, string>(2, "two"));
    sample_map.insert(pair<int, string>(3, "Three"));

/*cout << sample_map[1] << " " << sample_map[2] << endl;
cout << sample_map.at(1) << endl;*/

    for (auto const& x: sample_map){
        std::cout << x.first << " "
		<< x.second  << " "
		<< std::endl;

    }

    return 0;

}

