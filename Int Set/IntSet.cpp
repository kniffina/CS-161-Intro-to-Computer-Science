/***********************************************************************************
 * Author: Adam Kniffin
 * Date: 11/24/2015
 * Description: This is .cpp file for the IntSet class. It contains the functions
 * that will carry out different things throughout the class. Each description is defined
 * in more detail below.
 * **********************************************************************************/
#include "IntSet.hpp"
#include <iostream>
using namespace std;

//Function prototype. sets each value in the array to 0.
IntSet::IntSet()
{
   arrSize = 10;//set the variable arrSize to 10

   ptr = new int[arrSize];//Set the point to point to a new
			  //int array with the arrSize 
   for (int i = 0; i < arrSize; i++)
   {
	ptr[i] = NULL;//set each element in the array equal to NULL
   }
   arrValues = 0;//set arrValues variable = to 0
}

//Destructor. Deallocates the array of ptr
IntSet::~IntSet()
{
   delete [] ptr;
}

//size() returns the amount of values that are in the array
int IntSet::size()
{
   return arrValues;
}

//isEmpty determines if the array is value and returns false if it is not.
//and true if it is.
bool IntSet::isEmpty()
{
   if (arrValues > 0)//if the values in the arrray are greater than 0
	return false;

   else //values in the array are less than or equal to 0
	return true;
}

//contains() takes in an integer as a param and returns true if the int is in the array,
//and false if it is not.
//add takes an integer parameter. If the integer is not in the array it adds it to the end
//of it. If the array is full, it creates a new array, copies its contents, and reallocates
//them to the ptr variables.
void  IntSet::add(int a)
{
   bool flag = false;
   if (arrValues == arrSize)
   {
   }

   else
   {
	for (int i = 0; i < arrSize; i++)
	{
		if(ptr[i] == a)
			flag = true;
	}
	if (flag == false)
	{
		ptr[arrValues] = a;
		arrValues++;
	}
   
   }
}

//remove() takes an int parameter and if it is in the array, it removes it.
void IntSet::remove(int a)
{ 
   for (int i = 0; i < arrSize; i++)
   {
	if( ptr[i] == a )
	{
		ptr[i] = NULL;
		arrValues--;//decrement values in array
		break;//stop looping
	}
   }
}

/***********************************************************************************************
 * 		addAll
 * takes as a paraemter an IntSet class as a reference. There are then two forloops that
 * go through each value in each array and compare them. If the array value from either is not
 * in the other's values, then it is added via the add method. 
 * ********************************************************************************************/
void IntSet::addAll(const IntSet &B)
{
   for (int i = 0; i < arrValues; i++)
   {
	for (int j = 0; i < arrValues; j++)
	{
		if (ptr[j] != B.ptr[i])
		{
			this->add(B.ptr[i]);
		}
	}
   }
}

/********************************************************************************************
 * 		removeDifferent
 * this function takes as a parameter an IntSet class as a reference. There are then two for-loops
 * that go through each value in each array and compare them. If the values from the two seperate
 * arrays are not equal to eachother then they are removed, forming a union.
 * *******************************************************************************************/
void IntSet::removeDifferent(const IntSet &B)
{
   for (int i = 0; i < arrValues; i++)
   {
	for (int j = 0; i < arrValues; j++)
	{
		if (ptr[j] != B.ptr[i])
		{
			remove(ptr[j]);
		}
	}
   }
}

/**********************************************************************************************
 * 		removeSame
 * this function takes as a parameter an IntSet class as a reference. There are then two for-loops
 * that go through each value in each array and compare them. If the value from the two arrays
 * are equal to eachother, then they are removed.
 * *********************************************************************************************/
void IntSet::removeSame(const IntSet &B)
{
   for (int i = 0; i < arrValues; i++)
   {
	for (int j = 0; j < arrValues; j++)
	{
		if(ptr[j] == B.ptr[i])
		{
			remove(ptr[j]);
		}
	}
   }
}

