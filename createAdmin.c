#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "Database.h"
int main(){
    struct Admin addAdmin;
    int fd=open("Database/Admin.txt",O_WRONLY|O_CREAT|O_APPEND,0666);
    if(fd==-1){
        printf("Cannot store admin\n");
        return -1;
    }
    printf("Enter Admin Name:\n");
    scanf("%s",addAdmin.name);
    printf("Enter Admin EmailID:\n");
    scanf("%s",addAdmin.emailId);
    printf("Enter Admin Password:\n");
    scanf("%s",addAdmin.password);
    if(write(fd,&addAdmin,sizeof(addAdmin))<0){
        printf("Unable to create Admin\n");
    }else{
        printf("Admin created successfully\n");
    }
}