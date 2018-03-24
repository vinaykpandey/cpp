#include <iostream>
#include <cstdlib>
using namespace std;

/*This is our Stack information
Data Type: Let Say its, ArrayStack(struct)
contains information: top position, capacity, arrayp pointer to handle stack element
Step 1
 */
struct  ArrayStack
{
	int top;
	int capacity;
	int *arrayp;
};

/*
function name: createStack
input parameter: int
return type: Address of data type ArrayStack(struct)
Step 2
*/
struct ArrayStack* createStack(int cap){
	/*
	create a  pointer variable stackp,  with data type ArrayStack(struct)
	*/
	struct ArrayStack *stackp;
	/*malloc will create the array with size of  data type ArrayStack (struct), and return the base address
	stackp will hole the base address of dynamically created array 
	(i.e. containging the information: top position, capacity, array type pointer)
	*/
	stackp = malloc(sizeof(struct  ArrayStack)); 
	stackp->capacity = cap;
	stackp->top = -1;
	//stackp->arrayp = malloc(sizeof(int)*cap);
	stackp->arrayp = malloc(sizeof(int)*stackp->capacity);
	return (stackp);
}


int isFull(struct ArrayStack *StackpF){
	if(StackpF->top == StackpF->capacity-1){
		return 1; // 1 / (1)
	}else{
		return  0; // 0 / (0)
	}
}

int isEmpty(struct ArrayStack *StackpE){
	if(StackpE->top == -1){
		return 1; // 1 / (1)
	}else{
		return  0; // 0 / (0)
	}
}

int pushElement(struct ArrayStack *StackpPush, int element){
	if(!isFull(StackpPush)){
		StackpPush->top++;
		StackpPush->arrayp[StackpPush->top] = element;
		return 1;
	}else{
		return 0;
	}
}

int popElement(struct ArrayStack *StackpPop){
	int elementPop;
	if(!isEmpty(StackpPop)){
		elementPop = StackpPop->arrayp[StackpPop->top];
		StackpPop->top--;
		return elementPop;
	}else{
		return 0;
	}
}

int main(){
	struct ArrayStack *stackpM;
	int choice, item;
	printf("\n How many element you want to store: ");
	scanf("%d", &item);
	stackpM = createStack(item);
	printf("\n 1 for Push: ");
	printf("\n 2 for Pop: ");
	printf("\n 3 Exit: ");
	scanf("%d", &choice);
	switch(choice){
			case 1: 
				printf("\n Add new number: ");
				scanf("%d", &item);
				pushElement(stackpM, item);
				//break;
			case 2:
				popElement(stackpM);
				//break;
			case 3:
				exit(0);
				break;
			default: 
				break;
	}
}