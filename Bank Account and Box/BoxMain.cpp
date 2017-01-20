#include "Box.hpp"


int main()
{
   double length, width, height;

   cout << "Please enter the length: " << endl;
   cin >> length;
   cout << "Please enter the width: " << endl;
   cin >> width;
   cout << "Please enter the height: " << endl;
   cin >> height;

   Box myBox;
   myBox.setLength(length);
   myBox.setWidth(width);
   myBox.setHeight(height);

   cout << "The area of your box is: " << myBox.getVolume() << endl;
   cout << "The surface area of your box is: " << myBox.getSurfaceArea() << endl;


   return 0;
}
