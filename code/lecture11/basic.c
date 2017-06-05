#include <stdio.h>
#include <stdlib.h>

main()
{

printf("Content-Type: text/plain ; charset=utf-8\n\n");
printf("hello world \n ");

char *data = getenv("QUERY_STRING");

char username[100];
char password[100];



printf("data is : %s\n ",data);

sscanf(data,"name=%[^&]&password=%s",username,password);



printf("username is : %s\n ",username);

printf("PASSWORD  is : %s\n ", password);



if(data == NULL || username == NULL || password == NULL )
  printf("<P>Error! Error in passing data from form to script.");


else if (username=='yashwanth' & password=='batman')
  printf("<P>Your login credentials are valid.Welcome!The username is %s and password is %s.",username,password);

else if(username!='yashwanth')
  printf("Error ! Invalid username %s",username);

else if(password!='batman')
  printf("Error ! Invalid password");






}
