#include <iostream>
#include <chrono>
#include <vector>
#include <thread>

int main()
{ 
    std::vector <int> start_count_time(5, 0);
    std::vector <int> last_count_time(5, 0);
    std::vector <int> last_2(5,10);
    auto frame_time = std::chrono::system_clock::now(); 
    std::vector<std::chrono::time_point<std::chrono::system_clock>> dTimeList;

    for (int i = 0; i < 5; i ++){
     start_count_time [i] = frame_time;
     cout << i << endl;
     last_count_time [i] = frame_time;
     dTimeList.push_back(last_count_time);
     last_2[i] = frame_time;
     
     if (last_2 > dTimeList[0]){
       cout << "Anomly " << endl;
     }

    }
  return 0;
   // dTimeList.push_back(std::chrono::high_resolution_clock::now());
    //std::this_thread::sleep_for (std::chrono::seconds(1));
    //dTimeList.push_back(std::chrono::high_resolution_clock::now());

   // std::chrono::duration<double> difference = dTimeList[0]-dTimeList[1];
    //std::cout << "Time difference is: " << difference.count() << std::endl;
    
}
