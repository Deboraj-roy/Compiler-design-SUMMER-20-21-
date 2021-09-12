#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main()
{

    /*FILE * fp;

    fp = fopen("file.txt","w+");
    fputs("This is tutorialspoint.com",fp);

    fseek(fp, 7, SEEK_SET);
    fputs(" C Programming Language ",fp);
    fclose(fp);
    return (0);*/



        ifstream input("Split_txt.txt");
        string line;
        while (getline(input,line, ' ')){
            cout << line << '\n';

        }
        return 0;

}

