//
//  main.cpp
//  p3
//
//  Created by Francesca Cabangcala on 7/21/24.
//

#include <cassert>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

bool isWellFormedGroceryOrderString(string grocerystring){
    
    // check if string is empty
    if (grocerystring.empty()) {
        return false;
    }
    
    // check if
    int pickupOrders = 0;
    int deliveryOrders = 0;
    int shipOrders = 0;
    int inpersonOrders = 0;
    string temp = "";
    char ch;
    int l = grocerystring.size();
    int stardigit = 1;
    int founddigit = 1;
    
    // ch = grocerystring[0];
    // if (!isdigit(ch))
    // {
    //    return false;
    // }
    // temp = temp + ch;
    
    for ( int i = 0; i < l; i++)
    {
        ch = grocerystring[i];
        cout << "ch " << ch << " ";
        
        if (stardigit == 1  && isdigit(ch))
        {
            cout << "48 ";
            stardigit =0;
            cout <<i << " " << ch <<  " " << stardigit << endl;
            continue;
        }
        if (stardigit == 1  && !isdigit(ch))
        {
            cout << "54 " ;
            cout <<i << " " << ch <<  " " << stardigit << endl;
           return false;
        }
        if (stardigit == 0  && isdigit(ch))
        {
            cout << "59 " ;
            cout <<i << " " << ch <<  " " << stardigit << endl;
            stardigit = 0;
            continue;
        }
            
        if ( stardigit == 0  &&  ch != 'P' && ch != 'p' && ch != 'D' && ch != 'd' && ch != 'S' && ch != 's' && ch != 'I' && ch != 'i')
        {
             cout << "66 " ;
             cout <<i << " " << ch <<  " " << stardigit << endl;
            return false;
        }
        if(stardigit == 0  &&  (ch == 'P' || ch == 'p' || ch != 'D' || ch != 'd' || ch != 'S' || ch != 's' || ch != 'I' || ch != 'i'))
        {
            cout << "71 " ;
            cout <<i << " " << ch <<  " " << stardigit << endl;
            stardigit = 1;
        }
        
        
    }

       return true;
   }

   





   int main()
   {
       if (isWellFormedGroceryOrderString("12p4567ii"))
          cout << "true\n";
       else
           cout << "false\n";
        
       //assert( isWellFormedGroceryOrderString("") == false );
       /* assert( isWellFormedGroceryOrderString("    ") == false );
       assert( shipCount( "    " ) == -1 );
       assert( deliveryCount( "      " ) == -1 );
       assert( inpersonCount( "      " ) == -1 );
       assert( pickupCount( "       " ) == -1 );

       assert( isWellFormedGroceryOrderString( "1s1d1i1p1S1D1I1P" ) == true );
       assert( shipCount( "1s1d1i1p1S1D1I1P" ) == 2 );
       assert( deliveryCount( "1s1d1i1p1S1D1I1P" ) == 2 );
       assert( inpersonCount( "1s1d1i1p1S1D1I1P" ) == 2 );
       assert( pickupCount( "1s1d1i1p1S1D1I1P" ) == 2 );

        cerr << "All tests succeeded" << endl;
        */
           return( 0 );
       }





