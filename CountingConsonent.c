/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int constCount( char * str, int i){
    if(str[i]=='\0')
      return 0;
    
    else if(!(str[i]==' '|| str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
         return (1+constCount(str,i+1));
    else
      return (constCount(str,i+1));
    

}

int main()
{
    printf("Hello World");
    int count= constCount("a fghhji o pl",0);
   printf(" comment:: %d",count);

    return 0;
}

