#include<stdio.h>
int t_b=0,c=0,d=0,e=0,f=0,shoes=143,jeans=153,t_shirts=163,shirts=173,s_day=0,j_day=0,t_day=0,sh_day=0,i=0,c1=0,c2=0,c3=0,c4=0;
char shoes_string[]="Shoes",jeans_string[]="Jeans",tshirts_string[]="T-shirts",shirts_string[]="Shirts";
int main()
{	
	struct shopping_mall
	{
	 int product_code,product_quantity,product_price,discount,amount1,GST,amount2,total_price;	
	};
	struct shopping_mall product[4];
	while(1)
	{
	printf("enter 143 code to buy shoes\n");
	printf("enter 153 code to buy jeans\n");
    printf("enter 163 code to buy t-shirts\n");
	printf("enter 173 code to buy shirts\n");
	printf("enter 12345 to generate the bill\n");
	printf("enter 111 to generate the total bill in a day\n");
	
    scanf("%d",&product[0].product_code);
	 product[0].product_price=1500;
	 product[1].product_price=1200;
	 product[2].product_price=700;
	 product[3].product_price=900;
	 
	 if(product[0].product_code==shoes)
	    {
	        printf("enter your product quantity\n");
			scanf("%d",&product[0].product_quantity);
			product[0].discount=((product[0].product_price*40)/100);
			product[0].amount1=product[0].product_price-product[0].discount;
			product[0].GST=(18*product[0].amount1)/100;
			product[0].total_price=product[0].GST+product[0].amount1;
            c++; 
            s_day+=product[0].total_price*product[0].product_quantity;
	    }
			
	 else if(product[0].product_code==jeans)
	   {
	 
	    	printf("enter your product quantity\n");
			scanf("%d",&product[1].product_quantity);
			product[1].discount=((product[1].product_price*40)/100);
			product[1].amount1=product[1].product_price-product[1].discount;
			product[1].GST=(18*product[1].amount1)/100;
			product[1].total_price=product[1].GST+product[1].amount1;
			d++;
			j_day+=product[1].total_price*product[1].product_quantity;
              
	   }
			
	  else if(product[0].product_code==t_shirts)
	    {
		   	printf("enter your product quantity\n");
			scanf("%d",&product[2].product_quantity);
			product[2].discount=((product[2].product_price*40)/100);
			product[2].amount1=product[2].product_price-product[2].discount;
			product[2].GST=(18*product[2].amount1)/100;
			product[2].total_price=product[2].GST+product[2].amount1;
			e++;
			t_day+=product[2].total_price*product[2].product_quantity;
			
		}
			
		else if(product[0].product_code==shirts)
		{
		   	printf("enter your product quantity\n");
			scanf("%d",&product[3].product_quantity);
			product[3].discount=((product[3].product_price*40)/100);
			product[3].amount1=product[3].product_price-product[3].discount;
			product[3].GST=(18*product[3].amount1)/100;
			product[3].total_price=product[3].GST+product[3].amount1;
			f++;
			sh_day+=product[3].total_price*product[3].product_quantity;	
		}
		
		if(product[0].product_code==12345)
		{
			if(c>=1)
			  {		  	
printf("S.No.   P_Code    P_Name  P_Qnty   Actual Price   40p Disc   GST   T_Amt\n");
printf("------------------------------------------------------------------------------\n");
printf(" 1       %d       %s    %d         %d          %d     %d   %d\n",shoes,shoes_string,product[0].product_quantity,
product[0].product_price*product[0].product_quantity,product[0].discount*product[0].product_quantity,product[0].GST*product[0].product_quantity,
product[0].total_price*product[0].product_quantity);

printf("------------------------------------------------------------------------------\n"); 
	          }
	          
	        if(d>=1)
			{  
printf(" 2       %d       %s    %d         %d          %d      %d   %d\n",jeans,jeans_string,product[1].product_quantity,
product[1].product_price*product[1].product_quantity,product[1].discount*product[1].product_quantity,product[1].GST*product[1].product_quantity,
product[1].total_price*product[1].product_quantity);

printf("------------------------------------------------------------------------------\n");
            }
				
           if(e>=1)
		     {   
printf(" 3       %d      %s  %d         %d          %d      %d   %d\n",t_shirts,tshirts_string,product[2].product_quantity,
product[2].product_price*product[2].product_quantity,product[2].discount*product[2].product_quantity,product[2].GST*product[2].product_quantity,
product[2].total_price*product[2].product_quantity);

printf("------------------------------------------------------------------------------\n");
            }
            if(f>=1)
            {
printf(" 4       %d       %s   %d         %d          %d      %d   %d\n",shirts,shirts_string,product[3].product_quantity,
product[3].product_price*product[3].product_quantity,product[3].discount*product[3].product_quantity,product[3].GST*product[3].product_quantity,
product[3].total_price*product[3].product_quantity);

printf("------------------------------------------------------------------------------\n");
            }
            
          if(c>=1)
		  {  
 printf("Total Amount For Shoes    : %d\n",product[0].total_price*product[0].product_quantity);
          c=0;
          }
          if(d>=1)
		  {
 printf("Total Amount For Jeans    : %d\n",product[1].total_price*product[1].product_quantity);
          d=0;
          }
          if(e>=1)
		  {
 printf("Total Amount For T-shirts : %d\n",product[2].total_price*product[2].product_quantity);
          e=0;
          }
          if(f>=1)
		  {
 printf("Total Amount For Shirts   : %d\n",product[3].total_price*product[3].product_quantity);
          f=0;  
          }
 printf("\n");
 t_b=(product[0].total_price*product[0].product_quantity)+(product[1].total_price*product[1].product_quantity)
 +(product[2].total_price*product[2].product_quantity)+(product[3].total_price*product[3].product_quantity);
 printf("Total Gross Bill is : %d\n",t_b);
 printf("----------------------------------------------------------\n\n");
		t_b=0;product[0].product_quantity=product[1].product_quantity=product[2].product_quantity=product[3].product_quantity=0;	
	   }
	   	i=s_day+j_day+t_day+sh_day;
	   if(product[0].product_code==111)
        { 
           if(s_day>=1)
          printf("Total day collection of shoes is    : %d\n",s_day);
           if(j_day>=1)
		  printf("Total day collection of jeans is    : %d\n",j_day);
		   if(t_day>=1)	
		  printf("Total day collection of t_shirts is : %d\n",t_day);
		   if(sh_day>=1)
		  printf("Total day collection of shirts is   : %d\n",sh_day);
		  printf("\n");
		  printf("Total day Gross collection is : %d\n",i);
		  printf("----------------------------------------------------------\n\n");
		  i=s_day=j_day=t_day=sh_day=0;
		}
				   		    	 		
	   }  	 
	 }	

