#include<stdio.h>
int main()
{
	char ch;
	int n=1,l,k;
	struct create_student
	{
	int Roll_no;
	char name[15];
	float percentage;
	int age;
	int physics_marks;
	int chemistry_marks;
	int maths_marks;
	};
	struct create_student s_class[50];
	
	while(1)
	{
		kr:
	printf("Enter c to create student details\n");
	printf("Enter d to dispaly student details\n");
	printf("Enter m to modify the student details\n");
	dfault:
	scanf("%c",&ch);
	switch(ch)
	{
	case 'c':
	       printf("create student\n");	
	       printf("enter student Roll_no.\n");
	       	scanf("%d",&s_class[n].Roll_no);
	       printf("enter student name\n");
	       	scanf("%s",&s_class[n].name);
	       printf("enter student percentage\n");
	       	scanf("%f",&s_class[n].percentage);
	       printf("enter student physics marks\n");
	       	scanf("%d",&s_class[n].physics_marks);
	       printf("enter student chemistry marks\n");
	       	scanf("%d",&s_class[n].chemistry_marks);
	       printf("enter student maths marks\n");
	       	scanf("%d",&s_class[n].maths_marks);
	       printf("%s\n%d\n%f\n%d\n%d\n%d\n",s_class[n].name,s_class[n].Roll_no,s_class[n].percentage,s_class[n].physics_marks,s_class[n].chemistry_marks,s_class[n].maths_marks);
	          n++;
	          ch=0;
               break;
               
               default:
		  goto dfault;
		  break;
        
	   case 'd':   
	          printf("enter student Roll_no\n");
			   scanf("%d",&k);
			   for(l=0;l<n;l++)
			   {
			   if(k==s_class[l].Roll_no)
			   {
			   	printf("%s\n%d\n%f\n%d\n%d\n%d\n",s_class[l].name,s_class[l].Roll_no,s_class[l].percentage,s_class[l].physics_marks,s_class[l].chemistry_marks,s_class[l].maths_marks);
                     goto kr;
			   }
			   }
			   ch=0;
	       break;
	    
	  case 'm':
	  	printf("enter student Roll_no\n");
			   scanf("%d",&k);
			   for(l=0;l<n;l++)
			   {
			   if(k==s_class[l].Roll_no)
			   {
			   		//printf("enter student Roll_no.\n");
			       	//scanf("%d",&s_class[l].Roll_no);
			       printf("enter student name\n");
			       	scanf("%s",&s_class[l].name);
			       printf("enter student percentage\n");
			       	scanf("%f",&s_class[l].percentage);
			       printf("enter student physics marks\n");
			       	scanf("%d",&s_class[l].physics_marks);
			       printf("enter student chemistry marks\n");
			       	scanf("%d",&s_class[l].chemistry_marks);
			       printf("enter student maths marks\n");
			       	scanf("%d",&s_class[l].maths_marks);
			       printf("%s\n%d\n%f\n%d\n%d\n%d\n",s_class[l].name,s_class[l].Roll_no,s_class[l].percentage,s_class[l].physics_marks,s_class[l].chemistry_marks,s_class[l].maths_marks);
	                  goto kr;
			   }
			   }
			   ch=0;
			    break;
			
	       
		}
		
		
	}
	
	
	
	
	
	
	
	
}
