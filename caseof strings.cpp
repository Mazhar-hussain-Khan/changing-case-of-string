/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
// change case of string //
#include<stdio.h>
#include<strings.h>
int main(){
	char string[50];
    printf("enter the string\n");
    gets(string);
    char casestring[50];
    for(int i=0;string[i]!='\0';i++){
       if(string[i]>='a' && string[i]<='z')
	   {
           casestring[i] =string[i] - 32;
	}
	else 
	  casestring[i] =string[i] + 32;}
				printf("change case  string  is :%s",casestring);
    return 0;

}
