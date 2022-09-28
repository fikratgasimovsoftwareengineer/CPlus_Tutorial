#include <iostream>

using namespace std;

// friend class declaration
class Rectangle;

class Shape{

  private:
    double width;
    double height;

  public:

    Shape(double s_width, double s_height){width = s_width; height = s_height;}
   friend class Rectangle; // friend class    
};


class Rectangle{

   private: 
	   double area;
	  // double x;
	   //double y;

   public:
       // shape obkect created for private members 
        void inheritShape(Shape& shape){
        
	 area = shape.width * shape.height;
         cout << area << endl;
     }

     

};
int main(){
  Shape sh(2.0, 2.0);
  Rectangle rect;
  rect.inheritShape(sh);
  	


  return 0;
 
}
