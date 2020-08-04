#include <stdio.h>
#include <string.h>


void encrypting_message(void);
void decrypting_message(void);
void thanks(void);

int main()
{

      char choice[10];
      char encrypt[] = "encrypt";
      char encrypt2[] = "e";

      printf("This Program is for making message Encrypt and Decrypt.\nWhat do You wanna do : ");
      gets(choice);

      if (strcmp(choice, encrypt) == 0 || strcmp(choice, encrypt2) == 0)
      {
            encrypting_message();
      }
      else
      {
            decrypting_message();
      }


      return 0;
}



void encrypting_message(void)
{
      char message[100];
      int i = 0;

      printf("Enter the message to Encrypt : ");
      gets(message);
      while (message[i] != '\0')
      {
            message[i] = message[i] + 2;
            i++;
      }
      printf("Encrypted Message : %s", message);
      thanks();
}

void decrypting_message(void)
{
      char message[100];
      int i = 0;

      printf("Enter the message to Decrypt : ");
      gets(message);
      while (message[i] != '\0')
      {
            message[i] = message[i] - 2;
            i++;
      }
      printf("Encrypted Message : %s", message);
      thanks();
}

void thanks(void){
      printf("Thanks for using!........peace.!");
}