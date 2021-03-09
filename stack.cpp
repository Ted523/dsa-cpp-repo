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
	
	void change(int pos, int val)
	{
		arr[pos] = val;
		cout<<"Value changed at position"<<pos<<endl;
	}
	
	void display()
	{
		cout<<"All values in the Stack are: "<<endl;
		for(int i = 4; i >= 0; i--)
		{
			cout<<arr[i]<<endl;
		}
	}
	

};

int main()
{
	Stack s1;
	int option, position, value;
	
	do
	{
		cout<<"What operation do you wish to perform? Select your preferred option number. Please enter 0 to exit"<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear Screen"<<endl<<endl;
		
		cin>>option;
		switch(option)
		{
			case 0: 
				break;
			
			case 1: // Push operation implementation
				cout<<"Enter an item to push in the stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
			
			case 2: // Pop  operation implementation
				cout<<"Pop Function called -\n Poped Value: "<<s1.pop()<<endl;
				break;
				
			case 3: // isEmpty operation implementation
				if(s1.isEmpty())
					cout<<"Stack is Empty"<<endl;
				else
					cout<<"Stack is not empty"<<endl; 
				break;
			
			case 4: // isFull operation implementation
				if(s1.isFull())
					cout<<"Stack is Full"<<endl;
				else
					cout<<"The stack is not full"<<endl;
				break;
			
			case 5: // Peek operation implementation
				cout<<"Enter the position of the item you want to peek"<<endl;	
				cin>>position;
				cout<<"Peek function called - Value at position "<<position<<" is "<<s1.peek(position)<<endl;
				break;
				
			case 6: // Count operation implementation
				cout<<"Count function called - The number of items in the stack are: "<<s1.count()<<endl;
				break;
			
			case 7: // Change operation implementation
				cout<<"Change function called - "<<endl;
				cout<<"Enter the position of item you want to change : "<<endl;
				cin>>position;
				cout<<endl;
				cout<<"Enter the value of item you eant to change : ";
				cin>>value;
				s1.change(position, value);
				break;		
				
			case 8: // Display operation implementation 
				cout<<"Display function called - "<<endl;
				s1.display();
				break;
				
			case 9: // Clear Screen operation implementation
				system("cls");
				break;
			
			default:
				cout<<"Enter Proper Option Number "<<endl;
		}
	}
	while(option != 0);

 return 0;
}