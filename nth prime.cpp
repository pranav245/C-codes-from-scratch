#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter number:- ";
    cin>>n;
	int cn=2;
	int prime;
    while (n>0)
    {
        int i;
		int flag=0;
	
        for(i = 2; i < cn; ++i)
        {
            if(cn % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        	{
            	n--;
				prime=cn;
				
			}
        cn++;
    }
    cout<<"\n\n\n";
	cout<<prime;
    return 0;
}
