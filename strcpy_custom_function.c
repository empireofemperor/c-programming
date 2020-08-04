#include <stdio.h>

/************************************************************************************************
 
AIM         -    Make a custom Function of Strcpy()
Programmer  -    Jatin Sharma

************************************************************************************************/

//strcpy custom function
void copy(char *str1, char *str2)
{
      int i = 0;

      //looping
      while (str1[i] != '\0')
      {
            str2[i] = str1[i];
            i++;
      }
      printf("This is the second string after copying from first : %s", str2);
      //it will print "myname"
}

int main()
{

      char str1[30];// = "myname";
      char str2[30]; //= "jatin";

      printf("This is the program of custom Function of Strcpy().\n");
      printf("Enter the first string : ");
      gets(str1);
      printf("Enter the second string : ");
      gets(str2);


      copy(str1, str1);       //fucntion with argument without return value

      return 0;
      
}