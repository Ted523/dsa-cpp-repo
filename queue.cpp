#include<iostream>
#include<string>

using namespace std;

class Queue{
	private: 
		int front;
		int rear;
		int arr[5];
		
	public:
	Queue()
	{
		front = -1;
		rear = -1;
		for(int i=0;i<5;i++)
		{
			arr[i]=0;
		}			
	}
	
	bool isEmpty()
	{
		if(front== -1 && rear== -1)
			return true; 
		else
			return false;
	}
	
	bool isFull()
	{
		if(rear==4)
			return true;
		else
			return false; 
	}
	
	void enqueue(int val)
	{
		if(isFull())
		{
			cout<<"The Queue is Full"<<endl;
			return; 
		}
		else if(isEmpty())
		{
			rear=0;
			front=0;
			arr[rear]=val;
		}
		else
		{
			rear++;
			arr[rear]=val;
		}
	}
	
	int dequeue()
	{
		int x;
		
		if(isEmpty())
		{
			cout<<"The Queue is Empty"<<endl;
			return 0;
		}
		else if (front == rear)
		{
			x = arr[front];
			arr[front] = 0;
			rear = -1;
			front = -1;
			return x;
		}
		else
		{
			x = arr[front];
			arr[front] = 0;
			front++;
			return x; 
		}
	}
	
	int count()
	{
		return {rear-front+1};
	}
	
	void display()
	{
		cout<<"All values in the Queue are - "<<endl;
		for(int i=0; i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};


int main(){
	
	Queue q1;
	int option;
	int value; 
	
	do
	{
		cout<<"\n\nWhat operation do you wish to perform? Select your preferred option number. Please enter 0 to exit"<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear Screen"<<endl<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0: // Exit operation implementation
				break;
				
			case 1: // Enqueue operation implementation 
				cout<<"Enqueue operation \nEnter an item to Enqueue in the Queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
				
			case 2: // Dequeue operation implementation
				cout<<"Dequeue operation \nDequeue value"<<q1.dequeue()<<endl;
				break;
				
			case 3: // isEmpty operation implementation
				if(q1.isEmpty())
					cout<<"The Queue is Empty"<<endl;
				else
					cout<<"The Queue is not Empty"<<endl;
				break;
			case 4: // isFull operation implementation
				if(q1.isFull())
					cout<<"The Queue is Full"<<endl;
				else
					cout<<"The Queue is not Full"<<endl;
				break;
				
			case 5: // count operation implementation
				cout<<"Count operation \nCount of items in Queue is - "<<q1.count()<<endl;
				break;
				
			case 6: // display operation implementation
				cout<<"Display Function Called - "<<endl;
				q1.display();
				break;
				
			case 7: // Clear Screen operation implementation
				system("cls");
				break;
			
			default:
			    cout<<"Enter Proper Option Number"<<endl;
			    break;
		}
	}
	while(option != 0);
		
	return 0;
}