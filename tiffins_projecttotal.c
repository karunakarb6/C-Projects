#include<stdio.h>
int main()
{
  int a,b,c=0,d=0,e=0,f=0,g=0,h,i,j,k,l,m,item1=0,item2=0,item3=0,item4=0,item5=0;
  while(1)
  {
  printf("1 - Dosa  Rs 25\n");
  printf("2 - idly  Rs 20\n");
  printf("3 - wada  Rs 26\n");
  printf("4 - poori Rs 27\n");
  printf("5 - bonda Rs 28\n");
  for(i=0;i<100;i++)
  {
  scanf("%d",&a);
  if(a==1)
{
  scanf("%d",&b);
  if(b>=1)
  {
  	c=b*25;
  	item1=1;
  	//printf("total amount for dosa is %d\n",c);
  	printf("do you want to select more\n");
  }
}
else if(a==2)
  {
  scanf("%d",&j);
  if(j>=1)
  {
  	d=j*20;
  	item2=1;
  	//printf("total amount for idli is %d\n",d);
  	printf("do you want to select more\n");
  }
 }
 
 
 else if(a==3)
  {
  scanf("%d",&k);
  if(k>=1)
  {
  	e=k*26;
  	item3=1;
  	//printf("total amount for wada is %d\n",e);
  	printf("do you want to select more\n");
  }
 }	

else if(a==4)
  {
  scanf("%d",&l);
  if(l>=1)
  {
  	f=l*27;
  	item4=1;
  	//printf("total amount for poori is %d\n",f);
  	printf("do you want to select more\n");
  }
 }	

else if(a==5)
  {
  scanf("%d",&m);
  if(m>=1)
  {
  	g=m*28;
  	item5=1;
  	//printf("total amount for bonda is %d\n",g);
  	printf("do you want to select more\n");
  }
 }		
if(a==6)
{
	break;
}
}
if(item1==1)
printf("%d plates of Dosa = Rs %d\n",b,c);item1=0;
if(item2==1)
printf("%d plates of idly = Rs %d\n",j,d);item2=0;
if(item3==1)
printf("%d plates of wada = Rs %d\n",k,e);item3=0;
if(item4==1)
printf("%d plates of poori = Rs %d\n",l,f);item4=0;
if(item5==1)
printf("%d plates of bonda = Rs %d\n",m,g);item5=0;
h=c+d+e+f+g;
printf("Total amount : %d\n",h);
a=b=c=d=e=f=g=h=i=j=k=l=m=item1=item2=item3=item4=item5=0;
}
}
