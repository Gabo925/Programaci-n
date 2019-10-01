#include <iostream>
using namespace std;

void primo(int v[],int n);

int main()
{
	int v[1000];
	
	primo(v,1000);
	
}

void primo(int v[],int n)
{
	int esp, cont, cont2,t=1;
	for(int i=0;i<n;i++)
{
	v[i]=true;	
}

	for(int i=2;i<n;i++)
	{
		for(int j=2;i*j<n;j++)
		{
			v[i*j]=false;
		}
	}
	esp = 10;
    cont = -1;
    cont2 = 10;
    for (int i=0;i<n;i++)
	{
        cont++;
        if(v[i])
		{
		cout<<"|"<< i;	
		}else
		{
		cout <<"|*";
		}
        if(v[i]!=t);
          if(cont/esp*cont2==10);
                cont2=cont2+10;
   }
}
