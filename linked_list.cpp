#include <iostream>
#include <cstdlib>
using namespace std;
/*
default value created by malloc is 0, if memory block type is:  int/flot/double
	default value is NULL/empty in case chat type block
*/


int main(){

	struct  node
	{
		int info;
		node *link;
	};

	struct node *START = NULL;

	struct node *NewlyNode;
	NewlyNode =  (struct node *) malloc(sizeof(struct node));   
	/* |info INT|node link pointer|  
		value in node link pointer is NULL because its not containing address of any node block  
	*/

	cout << NewlyNode << endl;
	cout << NewlyNode->link << endl;
}