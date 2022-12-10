/* To print the following pattern: A
                                   BB
                                   CCC
                                   DDDD
  We are printing : 'A' + Row Number - 1
*/

#include <iostream>
using namespace std;
int main()
{
 
  int rno,cno;
  int n;
  cin>>n;
  for(rno=1;rno<=n;rno++)
     {
         for(cno=1;cno<=rno;cno++)
         {
             cout<<((char)(rno+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}
