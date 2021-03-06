#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

#define MAX_LEN 102

int main(void)
{
	int trafego[MAX_LEN];
	int a, v;
	int o, d;
	int maior_trafego;
	int solucao;
	int i, l, t = 1;

	memset(trafego, 0, sizeof(trafego));
	
	while ((scanf("%d %d", &a, &v) != EOF) && a)
	{
		maior_trafego = 0;
		
		for (i = 1; i <= v; i++)
		{
			cin>>o >>d;
			
			trafego[o]++;
			trafego[d]++;
		}
		
		for (i = 1; i <= a; i++)
		{
			if (trafego[i] > maior_trafego)
			{
				maior_trafego = trafego[i];
			}
		}
		
		cout<<"Teste \n"<< t++<<endl;
		for (i = 1; i <= a; i++)
		{
			if (trafego[i] == maior_trafego)
				cout<< i<<endl;
				
			trafego[i] = 0;
		}
	
		cout<<"\n\n"<<endl;
	}
	return 0;
}
