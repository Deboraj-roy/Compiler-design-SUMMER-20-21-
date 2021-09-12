#include <iostream>
using namespace std;


int top = -1;
char stack[50];


void push(char expression)
{
	stack[top] = expression;
	top++;
}

void pop()
{

	if (top == -1)
	{
	    cout<<endl;
		cout<<"Expression is invalid"<<endl;

	}


	else
	{
		top--;
	}


}


void Check_Expression()
{



	if (top == -1){

        cout<<endl;
        cout<<"Expression is valid"<<endl;
	}





	else{

        cout<<endl;
		cout<<"Expression is invalid"<<endl;
	}
}


int main()
{

	int i;
	char expression[50];
	cout<<"Enter expression:";
	cin>>expression;
	cout<<endl;


	for (i = 0; expression[i] != '\0';i++)
	{


		if ( expression[i] == '('  )
		{
			push(expression[i]);
		}


		else if (  expression[i] == ')' )
		{
			pop();
		}
	}


	Check_Expression();
}
