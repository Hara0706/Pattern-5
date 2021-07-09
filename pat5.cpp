#include <iostream>

using namespace std;


int main() {


  int i,j;


   i=5;

   while(i>0)

  {

     j = i;

     while(j>0)

     {

        cout<<"*";

        j--;

     }

     cout<<endl;

     i--;


  }


  i=1;

  while(i<=5)

  {

      j=1;

      while(j<=i)

      {

          cout<<"*";

          j++;

      }

      cout<<endl;

      i++;

  }




   return 0;

}
