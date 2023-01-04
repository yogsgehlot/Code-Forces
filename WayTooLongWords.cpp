#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    

    while (n)
    {
      string str;
      cin>>str;
      if(str.length()>10)
      {
        string st="";
        st = str[0]+to_string(str.length()-2);
        st = st + str[str.length()-1];
        cout<<st<<endl;
      }

      else
      cout<<str<<endl;  

      n--;
    }
    

    return 0;
}