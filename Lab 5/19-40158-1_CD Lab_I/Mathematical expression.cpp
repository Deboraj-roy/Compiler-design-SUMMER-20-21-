#include <iostream>
using namespace std;

//19-40158-1 DEBORAJ ROY

bool Alphabet(char a)
{

    if (a == 'a' || a == 'b'||a == 'c' ||a == 'd' || a == 'e'
            || a == 'f' || a == 'g' || a == 'h' || a == 'i'
            || a == 'j' || a == 'k' || a == 'l' || a == 'm'
            || a == 'n' || a == 'o' || a == 'p' || a == 'q' || a == 'r'
            || a == 's' || a == 't' || a == 'u' || a == 'v' || a == 'w'
            || a == 'x' || a == 'y' || a == 'z'
            || a == 'A' || a == 'B' || a == 'C' || a == 'D' || a == 'E'
            || a == 'F' || a == 'G' || a == 'H' || a == 'I' || a == 'J'
            || a == 'K' || a == 'L' || a == 'M' || a == 'N' || a == 'O' || a == 'P'
            || a == 'Q' || a == 'R' || a == 'S' || a == 'T' || a == 'U' || a == 'V'
            || a == 'W' || a == 'X' || a == 'Y' || a == 'Z' || a == '=')
    {
        return (true);
    }
    else
        return (false);


}

bool isOperand(char T)
{
    return ((T >= '0' && T <= '9')|| Alphabet(T)) ;
}

int value(char T)
{
    return (T - '0');
}

int Check(char *exp)
{

    if (*exp == '\0')
    {
        cout<<"Given expression is empty!\n";
        return -1;

    }


    for (int i = 1; exp[i]; i += 2)
    {

        char opr = exp[i], opd = exp[i+1];


        if (!isOperand(opd))
        {
            return -1;
        }


    }

    return 1;

}

int main()
{
    char expression[100];
    int result;

    cout<<"Enter your Mathematical Expression : ";
    cin>>expression;
    cout<<"\n"<<endl;

    result = Check(expression);
    if(result == -1)
    {
        cout << "Given "<<expression << " is " << "Invalid!\n";
    }
    else
    {
        cout << "Given " << expression << " is " << "Valid.\n" << endl;
    }


    return 0;
}

