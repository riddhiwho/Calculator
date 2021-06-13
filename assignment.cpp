#include <iostream>
 
using namespace std;
 
// Base class
class Shape {
   public:
      // pure virtual function providing interface framework.
      virtual int getArea() = 0;
      void setWidth(int w) {
         width = w;
      }
   
      void setHeight(int h) {
         height = h;
      }

      void setRadius(int r){
          radius = r;
      }

   
   protected:
      int width;
      int height;
      int radius;
};
 
// Derived classes
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      int getArea() { 
         return (width * height)/2; 
      }
};

class Circle : public Shape {
    public:
        int getArea(){
            return (3.14 * radius * radius);
        }
};

class Square : public Shape {
    public:
        int getArea(){
            return (width * width);
        }
};

int main(void) {
   Rectangle Rect;
   Triangle  Tri;
   Circle Cir;
   Square Sq;
 
   Rect.setWidth(5);
   Rect.setHeight(9);
   
   // Print the area of the object.
   cout << "Area of rectangle: " << Rect.getArea() << endl;

   Tri.setWidth(2);
   Tri.setHeight(4);
   
   // Print the area of the object.
   cout << "Area of triangle: " << Tri.getArea() << endl; 

   Cir.setRadius(6);

   cout << "Area of circle: " << Cir.getArea() << endl;

   Sq.setWidth(8);

   cout << "Area of square: " << Sq.getArea() << endl;

   return 0;
}