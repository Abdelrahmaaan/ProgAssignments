// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: assignment2.cpp
// Last Modification Date: 01/03/2018
// Author1 and ID and Group: 20130150
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: Hala AbdelKader
// Purpose: 0
#include <iostream>
using namespace std;

int main()

{
    int choose ,a,b,c ;
        
// 3la 6ool 

    while (true)
    {

        cout << "Ahlan ya user ya habibi" <<endl<<"What do you like to do today?"<<endl
             <<"1- Cipher a message"<<endl
             <<"2- Decipher a message"<<endl
             <<"3- End"<<endl;
        cin >>choose;

        if (choose == 1)
        {
            cout << "Enter a,b,c :" << endl;
            cin >> a >> b >> c ;
            if ((a*c)%26 ==1)
            {
                string input , res = "" ;
                cin >> input ;

                int x ;

                for (int i =0 ; i < input.length() ; i++ )
                {
                    if (input[i] == ' ')
                    {
                        res += ' ';
                        continue ;
                    }
// a - a =0  or  c-a=2 index =2
  ch =0 'A'=65   65 >A
CUST 
      
                    x = input[i] - 'A' ;
                    int ch =((a*x) +b)  %26 ;
                    res += (char) (ch+'A') ;
                }
                cout << res << endl  ;
            }
        }
        else if (choose == 2)
        {
            cout << "Enter a,b,c :" << endl;
            cin >> a >> b >> c ;

            if ((a*c)%26 ==1)
            {

                string input  ;
                cin >> input ;


                int y ;
                for (int i=0 ; i < input.length();  i ++)
                {
                    if (input[i] == ' ')
                    {
                        cout << " " ;
                    }

                    y = input[i] - 'A' ;
                    int ch =(c* (y-b))  %26 ;
// dh elly modlus 
                   if (ch < 0)
                    {
                        ch += 26 ;
                    }

                    cout << (char) (ch+'A') ;

                }

                cout << endl ;
            }

        }
        else if (choose==3)
        {
            return 0 ;
        }

    }


    }


