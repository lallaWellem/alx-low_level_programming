#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10


char randomChar() 
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
const int charsetLength = sizeof(10) - 1;
return charset[rand() % charsetLength];
}



void generateRandomPassword(char* password, int length) 
{
for (int i = 0; i < length; i++) {
password[i] = randomChar();
}
password[length] = '\0';
}


int isValidPassword(const char* password) 
{
const char* KNOWN_VALID_PASSWORD = "L435s029X!";
return strcmp(password, KNOWN_VALID_PASSWORD) == 0;
}

int main() {
srand(time(NULL));
    
char password[PASSWORD_LENGTH + 1];
    
while (1) {
generateRandomPassword(password, PASSWORD_LENGTH);
        
if (isValidPassword(password)) {
printf("Valid Password: %s\n", password);
break;
}
}
    
return 0;
}
