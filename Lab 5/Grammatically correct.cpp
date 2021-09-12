#include  <iostream>
#include  <bits/stdc++.h>

#define MAX_Sentence_LEN 60
using namespace std;

//19-40158-1 DEBORAJ ROY

bool checkSentence(char Sentence[])
{

    int len = strlen(Sentence);

    if ((Sentence[0] < 'A' || Sentence[0] > 'Z') || (Sentence[len - 1] != '.'))
    {
        return false;
    }


    int Pre_Position = 0, Present_Position = 0;

    int i = 1;


    while (Sentence[i])
    {
        if (Sentence[i] >= 'A' && Sentence[i] <= 'Z')
        {
            Present_Position = 0;
        }


        else if (Sentence[i] == ' ')
        {
            Present_Position = 1;
        }

        else if (Sentence[i] >= 'a' && Sentence[i] <= 'z')
        {
            Present_Position = 2;
        }
        else if (Sentence[i] == '.')
        {
            Present_Position = 3;
        }

        if (Pre_Position == Present_Position && Present_Position != 2)
        {
            return false;
        }
        if (Pre_Position == 2 && Present_Position == 0)
        {
            return false;
        }

        if (Present_Position == 3 && Pre_Position != 1)
            return (Sentence[i + 1] == '\0');

        i++;

        Pre_Position = Present_Position;
    }
    return false;
}

int main()
{


    char Sentence[MAX_Sentence_LEN];

    cout << "Enter your Sentence: ";
    cin.getline (Sentence, MAX_Sentence_LEN);



    if(checkSentence(Sentence))
    {
        cout<<Sentence<<" is correct \n"<<endl;
    }
    else
    {
        cout<<Sentence<<" is incorrect !\n"<<endl;
    }

    return 0;
}
