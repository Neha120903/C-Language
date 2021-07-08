//write a program to print pattern
//rectangle pattern
/*****
*****
*****
*****/

/*#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

/*Hollow rectangle pattern
****
*  *
*  *
*  *
****  
#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==0 ||i==(row-1)||j==0 || j==(col-1))
			cout<<"*";
			
			else
			cout<<" ";
			
		}
		cout<<endl;
    }
}

INVERTED HALF PYRAMID
*****
****
***
**
*

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

HALF PYRAMID AFTER 180 ROTATION
    *
   **
  ***
 ****
*****       

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=n-i)
			cout<<" ";
			else
			cout<<"*";
		}
		cout<<endl;
	}
}

HALF PYRAMID USING NUMBERS

1
22
333
4444
55555

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
}

FLOYD'S PATTERN
1
2	3
4	5	6
7	8	9	10
11	12	13	14	15

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count=1;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<count<<"	";
			count++;
		}
		cout<<endl;
	}
}

BUTTERFLY PATTERN
*      *
**    **
***  ***
********      				N=4 		2**N=8 ROWS AND 8 COL
********
***  ***
**    **
*      *


#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		int space=2*n-2*i;
		for(j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
	    }
	    cout<<endl;
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		int space=2*n-2*i;
		for(j=1;j<=space;j++){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"*";
	    }
	    cout<<endl;
}
}

ADVANCED PATTERN 
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

0-1 PATTERN
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1


#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i+j)%2==0)
			cout<<"1"<<" ";
			else
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}

RHOMBUS PATTERN
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *


#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(k=1;k<=n;k++)
		cout<<"*"<<" ";
		cout<<endl;
	}
}

NUMBER PATTERN
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		cout<<" ";
		for(k=1;k<=i;k++)
		cout<<k<<" ";
		cout<<endl;
	}
}

PALINDROMIC PATTERN
         1
       2 1 2
     3 2 1 2 3
   4 3 2 1 2 3 4
 5 4 3 2 1 2 3 4 5
 
 
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n,i,j,k,l;
 	cin>>n;
 	for(i=1;i<=n;i++)
 	{
 		for(j=1;j<=(n-i);j++)
 		cout<<" ";
 		int k=i;
 		for(;j<=n;j++)
 		cout<<k--<<" ";
 		k=2;
 		for(;j<=n+i-1;j++)
 		cout<<k++<<" ";
 		cout<<endl;
	 }
 }


ZIG-ZAG PATTERN
   *		*
 *	 *    *    *
*      *          *
*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(((i+j)%4==0)|| (i==2 && j%4==0))
			{
				cout<<" * ";
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
