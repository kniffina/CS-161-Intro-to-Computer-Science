/********************************************************************************
 * Author: Adam Kniffin
 * Date: 11/8/2015
 * Description: This program takes an integer array and the size of the array
 * as parameters. The function then calculates the mode or modes of the array depending on
 * how many there are. It then returns the modes as a vector of integers. The loops 
 * and other important variables are described below.
 * *****************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findMode(int arr[], int sizeOfArr)
{
   //The for loop will copy the array and sort the copy.
   int copyArr[sizeOfArr]; //Declare copyArr set to the size of the array 
			  //passed into the function
   for(int i = 0; i < sizeOfArr; i++)//copy and sort array
   {
 	copyArr[i] = arr[i];
   }
   sort(copyArr, copyArr + sizeOfArr);

 /*************************************************************************
 * find the maximum frequency in the array for any value by comparing each
 * element to the next element in the array. If they are the same, increment
 * the frequency to 1. We do this because we are counting a new value.
 * ************************************************************************/
   int count = 1;
   int highCount = 0;

   for(int i = 1; i < sizeOfArr; i++)
   {
	if(copyArr[i] != copyArr[i - 1])
	{
	   if(count > highCount)
	   {
		highCount = count;
	   }
	count = 1;
	}
	else
	{
		count++;
	}
   }
   if (count > highCount)
   {
	highCount = count;
   }

/*******************************************************************************
 * We are going to find the values that appear with the maximum frequency, and then recount
 * the frequencies using the same method as before. If the frequencies of a value matches
 * the maximum frequency and the value is a mode and is then put in the vector.
 * ******************************************************************************/

   vector<int> result;//Declare vector of integers named result
 
   count = 1;

   for(int i = 1; i < sizeOfArr; i++)
   {
	if(copyArr[i] != copyArr[i - 1])
	{
		if ( count = highCount)
		{
			result.push_back(copyArr[i - 1]);
		}
	count = 1;
	}
	else
	{
		count++;
	}
   }

   if(count == highCount)
   {
	result.push_back(copyArr[sizeOfArr - 1]);
   }
   return result;
}

	



