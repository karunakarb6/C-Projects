#include<stdio.h>
int bed_assign;
int k=10,l,b_bed;
 struct patient
  {
	char name[20];
	char mobile_number[10];
	char address[15];
	int Id[10],bed[10];
	};
	
int main()
{
	char ch;
	int n=0,id;
	int i,j;
	struct patient p[10];
    while(1)
	{
	printf("Enter c to create the patient\n");
	printf("Enter b to allocate the bed for patient\n");
	printf("Enter d to know the patient details\n");
	printf("Enter s for beds status\n");
	printf("Enter k to know the details of patient with bed number\n");
	printf("Enter z to delete the patient bed\n");
	dfault:
	scanf("%c",&ch);
	switch(ch)
	{
		case 'c':
			    printf("enter the patient details\n");
				p[n].Id[n]=603001+n;
				printf("enter the patient name\n");
				scanf("%s",p[n].name);
				printf("enter patient mobile number\n");
				scanf("%s",p[n].mobile_number);
				printf("enter patient address\n");
				scanf("%s",p[n].address);
				printf("patient Id: %d\npatient name is : %s\npatient mobile number is : %s\npatient address is : %s\n",p[n].Id[n],p[n].name,p[n].mobile_number,p[n].address);
				n++;
				printf("\n");
				break;
				
				default:
		  goto dfault;
		  break;
				
		case 'b':
			printf("bed allocation\n");
			printf("Enter the patient id\n");
			scanf("%d",&id);
			 for(i=0;i<n;i++)
			 {
			 	if(p[i].Id[i]==id)
			 	{
			 		for(l=0;l<bed_assign;l++)
			 		{
			 			if(p[l].bed[l]==0)
			 			{
			 				p[l].bed[l]=b_bed;
		printf("patient Id: %d\npatient name is : %s\npatient mobile number is : %s\npatient address is : %s\nbed number is :%d\n",
		p[i].Id[i],p[i].name,p[i].mobile_number,p[i].address,p[l].bed[l]);
		                  bed_assign++;
			 				goto next;
						 }
					}
			 		p[i].bed[i]=bed_assign+1;
			 		bed_assign++;
				 }
			 }
			 next:
			break;			
			
		case 'd':
		    printf("enter patient id\n");
			scanf("%d",&id);
		    for(i=0;i<n;i++)
			{
				if(p[i].Id[i]==id)
				{
  printf("patient Id: %d\npatient name is : %s\npatient mobile number is : %s\npatient address is : %s\n",
  p[i].Id[i],p[i].name,p[i].mobile_number,p[i].address);
  	printf("\n");
				}
			}
			break;
			
		case 's':
			    // k=k-bed_assign;
		   //printf("number of beds are available : %d\n",k);
		   printf("number of beds are filled : %d\n",bed_assign);
		   printf("\n");
		   break;
		   			
		case 'k':
			for(i=0;i<n;i++)
			{     
				 if(p[i].bed[i]>=1)
				     {
							
	printf("patient Id: %d\npatient name is : %s\npatient mobile number is : %s\npatient address is : %s\nbed number is :%d\n",
	p[i].Id[i],p[i].name,p[i].mobile_number,p[i].address,p[i].bed[i]);	  	
				  	 printf("\n");
					   }
			}
		   break;
		
		case 'z':
			 printf("enter the patient id\n");
			 scanf("%d",&id);
			 for(i=0;i<n;i++)
			 {
			    if(p[i].Id[i]==id)
			      {
			      	b_bed=p[i].bed[i];
			         p[i].bed[i]=0;
			         bed_assign--;
				  } 
			 }
			break;
		   
		}		
	}
	
}
