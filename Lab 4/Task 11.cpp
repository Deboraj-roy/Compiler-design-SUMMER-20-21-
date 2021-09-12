
#include<iostream>

#include <stdio.h>

#include<vector>

#include<string>

using namespace std;

int n,i,count_keyword,count_digit,count_variable,count_operator;

//char dighits[10][5]={"0","1","2","3","4","5","6","7","8","9"};





string val_1,val_2,val_3,val_4;







void check_k(string a)

{

    int yes=0,g;

    string keyword[]= {"..",

                       "auto","double","int","struct","break","else","long",

                       "switch","case","enum","register","typedef","char",

                       "goto","sizeof","voltile","do","if","static","while",

                       "extern","return","union","const","float","short",

                       "unsigned","continue","for","signed","void","default"
                      };

    for( i=0; i<=33; i++)

    {

        if(a==keyword[i])

        {





            count_keyword+=1;

            yes=1;

            g=i;





        }

        if(yes==1)

        {

            cout<<"<"<<keyword[g]<<">";



            break;

        }





    }









}





bool is_keyword(string a)

{

    bool y=false ;

    int yes=0,g;

    string keyword[]=
    {

        "auto","double","int","struct","break","else","long",

        "switch","case","enum","register","typedef","char",

        "goto","sizeof","voltile","do","if","static","while",

        "extern","return","union","const","float","short",

        "unsigned","continue","for","signed","void","default"
    };

    for( i=0; i<=32; i++)

    {

        if(a==keyword[i])

        {

            y=true;

            break;







        }







    }









    return y;

}









void check_v(string a)

{
    bool y;

    y=is_keyword(a);

//cout<<y;

    int yes=0,g,u=0,dr=0;

    char variable[][10]=
    {

        ",","_","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",

        "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"

    };

    char dighits[][5]= {"..","0","1","2","3","4","5","6","7","8","9"};

    //cout<<a<<"       ";

    for(int j=0; j<a.size(); j++)

    {

        for( i=0; i<=54; i++)

        {

            if(a[j]==variable[i][10] && y==0)

            {





                yes=yes+1;







            }



        }

        for(int k=0; k<=10; k++)

        {



            if(a[j]==dighits[k][5] && j!=0)

            {





                yes=yes+1;







            }
            if(a[j]==dighits[k][5] && j==0)

            {





                yes=yes+2;
                dr=dr+1;






            }





        }







    }







    if(yes==a.size() )

    {

        count_variable+=1;

        //cout<<"<id,"<<count_variable<<">";
        cout<<a<<" is a  identifier "<<endl;




    }
    else if (yes!=a.size() && dr!=0)
    {
        cout<<a<<" invalid identifier "<<endl;
        dr=0;
    }







}











void check_o(string a)

{

    int yes=0,g;

    string operators[]= {"=","+","-","*","/","%","<",">","!","<=",">=","!=","==","||","&&","&","|","^","~","<<",">>","?",".","(",")","{","}","[","]","''","'"};

    for( i=0; i<=31; i++)

    {

        if(a==operators[i])

        {





            count_operator+=1;

            yes=1;

            g=i;





        }

        if(yes==1)

        {

            //cout<<"<"<<operators[g]<<">";
            cout<<operators[g]<<" is an operator "<<endl;


            break;

        }





    }







}













void check_c(string a)

{

    int yes=0,g;

    char dighits[][5]= {"..","0","1","2","3","4","5","6","7","8","9"};

    for(int j=0; j<a.size(); j++)

    {



        for(int k=0; k<=11; k++)

        {



            if(a[j]==dighits[k][5] )

            {





                yes=yes+1;







            }

            if(yes==a.size())

            {

                //cout<<"<"<<a<<">";
                cout<<a<<" is a  number "<<endl;

                break;

            }





        }

    }







}









int main()

{





    vector<string> d;

    cout << "Enter your string (at the end of the string put :' $' )\n";





    string temp;

    while (cin >> temp)

    {

        if(temp !="$")

        {

            d.push_back(temp);

        }

        else

        {

            break;

        }



    }







    for (int j =0; j < d.size(); j++)

    {

        if(d[j]==";")

        {

            cout<<endl;

        }

        else

        {

            check_c(d[j]);

            check_o(d[j]);

            check_v(d[j]);

            check_k(d[j]);

        }



    }











    return 0;

}



