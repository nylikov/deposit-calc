#include <stdio.h>

void dohod (int v, int s)
{	
	if (v<=100000) {if (s<=30)
	v=v-v/10;}
	if (v>100000) {if (s<=30)
    v=v-v/10;}
	
	if (v<=100000) 
	if (s>30 && s<=120)
	v=v+v*0.02;
	if (s>120 && s<=240)
	v=v+v*0.06;
	if (s>240 && s<=365)
	v=v+v*0.12;
	{
	if (v>100000)
	if (s>30 && s<=120)
	v=v+v*0.03;
	if (s>120 && s<=240)
	v=v+v*0.08;
	if (s>240 && s<=365)
	v=v+v*0.15;}
	
	if (v<10000) {printf("\nMinimalnaya symma vklada 10000rub\n");}
	else printf("\nDohod=%d",v);
	if (s<0 || s>365) {printf(" Nekorektnii srok");}
}

int main()
{
  int c,d;
  printf("Vvedite symmy vklada i srok\n");
  scanf("%d %d",&c,&d);
  printf("Vklad:%d Srok:%d",c,d);
  
  dohod (c,d);
 
}
