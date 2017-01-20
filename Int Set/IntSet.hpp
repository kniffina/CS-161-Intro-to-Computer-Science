/***************************************************************************************
 * Author: Adam Kniffin
 * Date: 11/23/2015
 * Description: This is the header file for the IntSet class. It has all of the
 * function prototypes, function declarations, and member variables below.
 * They are described in more detail.
 * **********************************************************************************/
#ifndef INTSET_H
#define INTSET_H

class IntSet
{
public:
   IntSet();//Default Constructor   
   ~IntSet();//Destructor

   int size();//No parameters. Returns int value.
   
   bool isEmpty();//No parameters. Returns boolean value
   bool contains(int);//Int parameter. Returns boolean value.

   void add(int); //Int parameter. Returns nothing.
   void remove(int);//Int parameter. Returns nothing.

   void addAll(const IntSet &);//const IntSet passed in by reference. No return
   void removeDifferent(const IntSet &);//const IntSet passed in by reference. No return
   void removeSame(const IntSet &);//Const IntSet passed in by reference. No return

private:
   int *ptr;//integer pointer to point to array
   int arrSize;//Int variable to hold how large an array is
   int arrValues;//Int variable to hold how many values are in an array
};

#endif 
