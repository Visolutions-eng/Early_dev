/*Name: BASSEY VICTORIA AYOMIDE
  APP. ID: 116388
  LEVEL: 200 (D.E)
  COURSE: INTRODUCTION TO COMPTER SCIENCE AND PROGRAMMING (C PROGRAMMING)
  LECTURER: PROF. IDOWU S. AND MR. MENSAH*/
  
  
#include<stdio.h>
int main ()
{
	

   int n, v;
   printf("\t\t\t\t\t\t\t\t\t\t*******HELLO Dear Customer!*******\n\n\t\t Its our season to depense call cards of different network to those of our customers that have been consistent in buying our services.\n\n\n");
   printf("\tThe types of network available are:\n\n MTN,\n GLO,\n AIRTEL,\n ETISALAT.\n\n");
   printf("\t\tEnter value:\n'1' for MTN.\n'2' for GLO.\n'3' for AIRTEL\n'4' for ETISALAT.\n\n");
   printf("Enter value-type: "); 
   scanf("%d", &n);
   
   
   switch(n)
   {
   	
   	 case 1: 
   	 
   			printf("\t\t\t\t\t*Welcome to the MTN network.*\n The value of the call cards avaiable are:\n\n MTN:\n\n 100\n 200\n 500 \n\n");
   		    printf("Enter your choice: ");
   		    scanf("%d", &v);
   		    if(v==100)
   		    {
   			printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved MTN-100 call card!!\n\nThanks for cooperation. :D");
			   }
			  
   			else if(v==200)
   			{
   		    printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved MTN-200 call card!!\n\nThanks for your coorperation. :D");
		     }
   		    else if(v==500) 
   			{
   	        printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved MTN-500 call card!!\n\nThanks for your coorperation. :D");
			 }
						
			 else
			 {
			 printf("Not available. Please try again. :)");
			
			 }
		     break;
						
						
	 case 2: 
   	 
   	        printf("\t\t\t\t\t*Welcome to the GLO network.*\n The value of the call cards avaiable are:\n\n GLO:\n\n 100\n 200\n 500 \n\n");
   		    printf("Enter your choice: ");
   		    scanf("%d", &v);
   		    if(v==100)
   		    {
   			printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved GLO-100 call card!!\n\nThanks for cooperation. :D");
			 }
			  
   		    else if(v==200)
   			{
   			printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved GLO-200 call card!!\n\nThanks for your coorperation. :D");
			 }
   		    else if(v==500) 
   			{
   	        printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved GLO-500 call card!!\n\nThanks for your coorperation. :D");
			 }
						
		     else
			 {
			 printf("Not available. Please try again. :)");
			 }
			 break;
						 
						 
	  case 3: 
   	 
   		    printf("\t\t\t\t\t*Welcome to the AIRTEL network.*\n The value of the call cards avaiable are:\n\n AIRTEL:\n\n 100\n 200\n 500 \n\n");
   		    printf("Enter your choice: ");
   		    scanf("%d", &v);
   		    if(v==100)
   		    {
   		    printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved AIRTEL-100 call card!!\n\nThanks for cooperation. :D");
			 }
			  
   			else if(v==200)
   			{
   			printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved AIRTEL-200 call card!!\n\nThanks for your coorperation. :D");
			 }
   			else if(v==500) 
   			{
   	        printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved AIRTEL-500 call card!!\n\nThanks for your coorperation. :D");
			 }
						
			 else
			 {
			 printf("Not available. Please try again. :)");
			 }
			 break;
						 
						 
	 case 4: 
   	 
   	         printf("\t\t\t\t\t*Welcome to the ETISALAT network.*\n The value of the call cards avaiable are:\n\n ETISALAT:\n\n 100\n 200\n 500 \n\n");
             printf("Enter your choice: ");
   	         scanf("%d", &v);
   	         if(v==100)
   	        {
   	        printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved ETISALAT-100 call card!!\n\nThanks for cooperation. :D");
	         }
			  
   	         else if(v==200)
   	        {
   	         printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved ETISALAT-200 call card!!\n\nThanks for your coorperation. :D");
	         }
   	         else if(v==500) 
   	        {
   	        printf("\t\t\t\t\t\t*****Congratulations!*****\n\nYou have recieved ETISALAT-500 call card!!\n\nThanks for your coorperation. :D");
	         }
						
	         else
	         {
	         printf("Not available. Please try again. :)");
	         }
	         break;
						 
	
	 default:
	 printf("Wrong Input. Please try again.");
		       }
return 0;

}	   
