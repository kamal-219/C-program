// string comparison
#include <stdio.h>
#include<string.h>
int main() {
    char username[10],password[10];
    char correctusername[]="Kamal";
    char correctpassword[]="#292121";
    printf("Enter the username: ");
    scanf("%s",&username);
    printf("Enter password: ");
    scanf("%s",&password);
    if(strcmp(username,correctusername)==0){
        if(strcmp(password,correctpassword)==0){
            printf("Login Succesfully!!!");
        }
        else{
            printf("Incorrect Password--X");
        }
    }
    else{
        printf("Invalid Username");
    }
    return 0;
}
