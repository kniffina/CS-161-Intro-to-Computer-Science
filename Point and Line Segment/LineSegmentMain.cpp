#include "LineSegment.hpp"
#include <iostream>
using namespace std;

int main()
{
   Point p1(1.0, 2.0);
   Point p2(-3.0,-2.0);

   LineSegment ls1(p1, p2);

   double length = ls1.length();

   cout << length << endl;

   double slope = ls1.slope();

   cout << slope << endl;

   return 0;
}
