// simple login system that checks a username and password.
#include<stdio.h>
#include<string.h>
int main()
{
    char correctusername[]="Program";
    char correctpassword[]="12kh2025";
    char username[];
    char password[];
    printf("Enter the Username\n");
    scanf("%s",&username);
    printf("Enter the Password");
    scanf("%s",&password");
    if(strcmp(username,correctusername)==0){
        if(strcmp(password,correctpassword)==0){
            printf("Login Successfully!!!\n");
        }
        else{
            printf("Wrong Password\n");
        }
    }
    else{
        printf("Invalid username");
    }
    return 0;
    
}
