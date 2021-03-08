#include<iostream>
#include<string>

using namespace std;

// implementation of stack data structure that stores INTEGER elements 
class Stack{
  private:
    int top;
    int arr[5];

  public:
    Stack ()
	{
		top = -1; 
		
		for (int i = 0; i<5; i++)
		{
			arr[i]=0;
		}
	}
	
	bool isEmpty()
	{
		if(top == -1)
			return true;
		else
			return false; 
	}
	
	bool isFull()
	{
		if(top==4)
			return true;
		else
			return false;
	}
	
	void push(int val)
	{
		if(isFull())
		{
			cout<<"Stack Overflow"<<endl;
		}
		else
		{
			top++;// Assuming the stack has no value in it, and initially the index top is assigned [-1], then this increment operation should move us to index [0] 
			arr[top]=val; // At the current index, assign the value passed as argument
		}
	}
	
	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack Underflow"<<endl;
			return 0;
		}
		else
		{
			int popvalue = arr[top];
			arr[top] = 0;
			top--;
			return popvalue;
		}
	}
	
	int count()
	{
		return (top+1); // Returns the number of values in the stack
	}
	
	int peek (int pos)
	{
		if (isEmpty())
		{
			cout<<"Stack Underflow"<<endl;
			return 0;
		}
		else
		{
			return arr[pos];// The argument being passed in this function is the index of the value which we would like to view in the stack
		}
	}


};

int main()
{

 return 0;
}