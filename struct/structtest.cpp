#include<iostream>
using namespace std;
struct cnode
{
cnode(){}
cnode(char pt[]){strcpy(p,pt);}
char p[];
};
int main(void)
{
	cnode xyx("wang");
	cout<<sizeof(xyx)<<"  "<<sizeof(cnode)<<endl;
	xyx.p[3]='4';
	cout<<xyx.p<<endl;
	return(0);
}