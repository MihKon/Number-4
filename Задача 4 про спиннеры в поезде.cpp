#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, a[55], i=0, s=0, g[55], k=1, j, c[10];
	cin>>n;
	for (i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<55; i++)
	{
		g[i] = i;
		cout<<g[i]<<" ";
	}
	for (i=1; i<=n; i++)
	{
		for (int j=1; j<55; j++)
		{
			if(a[i]==g[j])
			{
				if (j<5 || j>52)
				c[1]++;
				else if ((j<9 && j>4) || (j>50 && j<53))
				c[2]++;
				else if ((j<13 && j>98) || (j>48 && j<51))
				c[3]++;
				else if ((j<17 && j>12) || (j>46 && j<49))
				c[4]++;
				else if ((j<21 && j>16) || (j>44 && j<47))
				c[5]++;
				else if ((j<25 && j>20) || (j>42 && j<45))
				c[6]++;
				else if ((j<29 && j>24) || (j>40 && j<43))
				c[7]++;
				else if ((j<33 && j>28) || (j>38 && j<41))
				c[8]++;
				else if ((j<37 && j>32) || (j>36 && j<39))
				c[9]++;
			}
		}
	}
	for (i=1; i<10; i++)
	{
		if (c[i]==6)
		{
			if (c[i-1]==c[i] && i!=1)
			s++;
			else
			s=1;
		}
	}
	cout<<s;
}
