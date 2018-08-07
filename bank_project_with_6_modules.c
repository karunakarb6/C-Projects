#include<stdio.h>
int main()
{
	char ch;
	int n=0,m,l,j,z,y,i,d[10],dip=0,w[10],wit=0,t[10],tf=0,ac_n[10],ac=0;
	struct create_account
			{
				int account_number[5];
				int account_amount[5];
				int an,aa,amount,account,dan,can,amount1,amount2,amountk;
			};
			struct create_account c;
	while(1)
	{
	printf("Enter c for account creation\n");
	printf("Enter b for balance checking\n");
	printf("Enter d for deposit  amount\n");
	printf("Enter w for withdraw amount\n");
	printf("Enter t for transfer amount\n");
	printf("Enter m for ministatement\n");
	dfault:
	scanf("%c",&ch);
	switch(ch)
	{
		case 'c':
			printf("create account\n");
		printf("enter initial amount\n");
		ttt:
		scanf("%d",&c.aa);
		if(c.aa>=100)
		{
			c.account_number[n]=500301+n; 
			c.account_amount[n]=c.aa;
			printf("Your Account Number is:%d\nYour Balance is :%d\n",c.account_number[n],c.account_amount[n]);
			n++;
		}
		else
		{
			printf("enter valid amount\n");
			goto ttt;
		}
		ch=0;
		c.aa=0;
		break;
		
			default:
		  goto dfault;
		  break;
		  
		case 'b':
			printf("enter your account number\n");
	acc_not_valid:
	scanf("%d",&c.amount);
	for(m=0;m<n;m++)
	{
	if(c.amount==c.account_number[m])
	{
		printf("%d\n",c.account_amount[m]);
		goto bal_ok;
	}
	}
	printf("enter valid account number\n");
	goto acc_not_valid;
	bal_ok:
		printf("\n");
		ch=0;
		c.amount=0;
		break;
		
	case 'd':
	printf("enter your account number\n");
		re_enter:
		scanf("%d",&c.account);
		for(l=0;l<n;l++)
	{
	if(c.account==c.account_number[l])
	{
		printf("enter your amount\n");
		scanf("%d",&c.amount1);
	 c.account_amount[l]+=c.amount1;
	 goto amm_ok;	  
	}
	}
	
	printf("enter valid account number\n");
	goto re_enter;
	amm_ok:
		d[dip]=c.amount1;
		dip++;
		printf("\n");
		c.account=0;
		break;
			
	case 'w':
	printf("enter your account number\n");
	enter:
	scanf("%d",&c.account);
	for(j=0;j<n;j++)
	{
		if(c.account==c.account_number[j])
		{
			printf("enter your amount\n");
			ree:
			scanf("%d",&c.amount2);
			if(c.amount2>=100 && c.amount2<=10000)
			{
				if(c.amount2<=c.account_amount[j])
				  {
					c.account_amount[j]-=c.amount2;
					goto karuna;
				  }
				else
				  {
					printf("entered amount is in sufficiant\n");
		               goto ree;
				  }
		    }
		    else
		    {
		    printf("enter amount between 100 to 10000\n");
		    goto ree;
		    }
			
				
		}		
	}
	goto exit;
	printf("Enter valid account num\n");
	goto enter;
	exit:
	karuna:
	w[wit]=c.amount2;
	wit++;	
	ch=0;
	break;

case 't':
	printf("enter debit account number\n");
	aka:
	scanf("%d",&c.dan);
	for(z=0;z<n;z++)
	{
	   if(c.dan==c.account_number[z])
	   {  
	      printf("enter credit account number\n");
	      kr:
	      scanf("%d",&c.can);
	        for(y=0;y<n;y++)
	        {
	        	if(c.can==c.account_number[y])
	        	{
	        		printf("enter the debit amount\n");
	        		kar:
	        		scanf("%d",&c.amountk);
	        		  if(c.amountk<=c.account_amount[y])
	        		  {
	        		  	c.account_amount[z]=c.account_amount[z]-c.amountk;
	        		  	c.account_amount[y]=c.account_amount[y]+c.amountk;
	        		  	goto tran;
					  }
					  
					  	printf("entered amount insufficiant\n");
					  	goto kar;
					
			     }
		    }
	        	
					printf("enter valid credit account number\n");
					goto kr;
						
	    	}
		
		}
					printf("enter valid debit account number\n");
					goto aka;
					tran:
						t[tf]=c.amountk;
						 tf++;
						 ac_n[ac]=c.account_number[y];
						 ac++;
					//printf("");
					break;
					
					
	 case 'm':
	 		printf("enter your account number\n");
			scanf("%d",&c.account);
			for(i=0;i<n;i++)
			{
				if(c.account==c.account_number[i])
				{
					for(y=0;y<dip;y++)
				    	{
				    printf("diposited amount %d\n",d[y]);
				     	}
				     	printf("\n");
					for(y=0;y<wit;y++)
					  {
					printf("withdrawn amount %d\n",w[y]);
				      }
				      printf("\n");
				      for(y=0;y<tf;y++)
					   {
				  printf("%d amount transfered to %d account\n",t[y],ac_n[y]);  
				       }
					printf("\n");
			        printf("Total balance is : %d\n",c.account_amount[m]);
					printf("\n"); 	
				}
				
			 } 
					
					
	}
	
	
	
	
	}
	
	
	
}
