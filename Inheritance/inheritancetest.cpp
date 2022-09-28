#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Base
{
    private: // our member is now private
        int face_id;
        string face_name;

    public:
         Base(int id, string name)  //Parametrized COnstructor
         :face_id{ id }, 
          face_name{name}
         {
            cout << "Base Parametrized :" << endl;
         }

         int getId() { 
            return face_id;
         }

         string getFaceName (){
            return face_name;
         }
};

class Derived: public Base
{
    private: // our member is now private
        string job;

    public:
        Derived(string job_person, int id_b, string name_b) // call constructor object with mentioned order!
            : Base{id_b, name_b} // Call Base(int) constructor with value id!
            , job{ job_person }
        {
              cout << "Derived Parametrized :" << endl;
        }

        string getJob() { return job; }
};

int main()
{
    Derived derived("Developer", 12, "Fikrat"); // use Derived(double, int) constructor

    std::cout << "Job: " << derived.getJob() << ", ";

    std::cout << "Id: " << derived.getId() << ", ";

    std::cout << "Name Face: " << derived.getFaceName() << '\n';

 
 

    return 0;
}

