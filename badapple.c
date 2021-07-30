#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void delay(int msec) 
{ 
    
  
    clock_t stime = clock(); 
  
    while(clock() < stime + msec); 
} 



int main(){
	FILE *fptr;
	fptr = fopen("output.txt","r");
        char ch=' ';

	if(fptr == NULL){printf("Error!\n");exit(1);}
    
    while(!feof(fptr)){
    	
    	ch = fgetc(fptr);
    	if(!feof(fptr) && ch != '*') printf("%c",ch);
        if(ch == '*'){
        	
        	delay(91000);
	        system("clear");
             	
   	   }    	
    	
	}
   
  
    fclose(fptr);
	return 0;
}
