#include <iostream>
#include <cstdlib>
using namespace std;
/*
default value created by malloc is 0, if memory block type is:  int/flot/double
	default value is NULL/empty in case chat type block
*/

/*This is our Stack information
Data Type: Let Say its, ArrayStack(struct)
contains information: top position, capacity, arrayp pointer to handle stack element
Step 1
 */


int main(){

	struct  ArrayStack
	{
		int top;
		int capacity;
		//int *arrayp;
		ArrayStack *Next;
	};

	/*double ar[4];
	double *ptr;
	ptr =  (double*) malloc(4*sizeof(ar)); 
	cout << "base address return by malloc" << ptr << endl;
	for(int i =0; i< 4; i++){
		cout << " loop count " << i  << " default value in each: " << ar[i] << endl;
	}*/
	struct ArrayStack *ArrayStackPointer; // create a pointer of "ArrayStack" type
	ArrayStackPointer =  (struct ArrayStack *) malloc(sizeof(struct ArrayStack)); 
	ArrayStackPointer->capacity = 4;
	ArrayStackPointer->top = 2;
	//ArrayStackPointer->arrayp = (int *) malloc(sizeof(int)*ArrayStackPointer->capacity);
	//ArrayStackPointer->Next = (struct ArrayStack *) malloc(sizeof(int)*ArrayStackPointer->capacity);
	cout << " ArrayStackPointer base address" << ArrayStackPointer <<endl;
 
	cout << " top: " << ArrayStackPointer->Next[0]  <<endl;;
}