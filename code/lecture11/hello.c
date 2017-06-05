#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>




main()
{
 

printf("Content-Type: text/plain ; charset=utf-8\n\n");


//printf("hello world \n ");

char *data = getenv("QUERY_STRING");

char username[100];
char password[100];



//printf("data is : %s\n ",data);



sscanf(data,"name=%[^&]&password=%s",username,password);



//printf("username is : %s\n ",username);

//printf("PASSWORD  is : %s\n ",password);




if(strcmp(username,"yashwanth") == 0 && strcmp(password,"batman") == 0 ) 
{
 printf("Your login credentials are valid.Welcome: %s",username);
}


else if(strcmp(username,"yashwanth") != 0 && strcmp(password,"batman") != 0 ) 
{
 printf("Error ! Both user name and password are incorrect ");
}

else if(strcmp(username,"yashwanth") != 0){
  printf("Error ! You have entered Invalid username ");
}



else if(strcmp(password,"batman") != 0){
  printf("Error ! You have entered Invalid password ");
}






else if(data == NULL || username == NULL || password == NULL ){
  printf("Error! Error in passing data from form to script.");
}








}
