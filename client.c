#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>

#define buffsz 100000


int main(int argc, char* argv[]){
    if(argc<3){
        printf("less arguments\n");
        return -1;
    }
    int sockfd,newsockfd,portno,n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    char buffer[buffsz];
    if(sockfd<0){
        printf("Creating socket failed\n");
        return -1;
    }
    portno=atoi(argv[2]);
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    if(sockfd<0){
        printf("Error opening socket\n");
        return -1;
    }
    server=gethostbyname(argv[1]);

    if(server==NULL){
        printf("Error, no such host\n");
        return -1;
    }
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *) server->h_addr_list[0], (char *) &serv_addr.sin_addr.s_addr, server->h_length);
    serv_addr.sin_port = htons(portno);

    if(connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0){
        printf("connection failed\n");
        return -1;
    }
    while(1){
        //read
        bzero(buffer,buffsz);
        read(sockfd,buffer,buffsz);
        printf("Server:\n %s\n",buffer);
        //read


        //write choice
        printf("Input Choice\n");
        int choice;
        scanf("%d",&choice);
        write(sockfd,&choice,sizeof(int));
        //write choice
        
            if(choice==1){
            //authentication input

            //read input email msg
            bzero(buffer,buffsz);
            read(sockfd,buffer,buffsz);
            printf("Server:\n %s\n",buffer);
            //read input email msg

            //write inputEmail
            char inputEmail[100];
            scanf("%s",inputEmail);
            write(sockfd,&inputEmail,sizeof(inputEmail));
            //write inputEmail 

            //read input Password msg
            bzero(buffer,buffsz);
            read(sockfd,buffer,buffsz);
            printf("Server:\n %s\n",buffer);
            //read input Password msg

            //write inputPassword
            char inputPassword[100];
            scanf("%s",inputPassword);
            write(sockfd,&inputPassword,sizeof(inputPassword));
            write inputPassword 
            authentication input
            
            //authenticate Check
            int isValid;
            read(sockfd,&isValid,sizeof(int));
            if(isValid==1){
                while(1){
                //read adminMenu msg
                bzero(buffer,buffsz);
                read(sockfd,buffer,buffsz);
                printf("Server:\n %s\n",buffer);
                //read adminMenu msg

                //write adminMenu choice
                int adminChoice;
                scanf("%d",&adminChoice);
                write(sockfd,&adminChoice,sizeof(int));
                //write adminMenu choice
                
                if(adminChoice==1){
                    //read student name
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read student name
                    
                    //input student name
                    char inputStudentName[100];
                    scanf("%s",inputStudentName);
                    write(sockfd,&inputStudentName,sizeof(inputStudentName));
                    //input student name

                    //read student rollno
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read student rollno

                    //input student rollno
                    char inputStudentRollno[100];
                    scanf("%s",inputStudentRollno);
                    write(sockfd,&inputStudentRollno,sizeof(inputStudentRollno));
                    //input student rollno

                    //read student emailID
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read student emailID

                    //input student emailID
                    char inputStudentEmailID[100];
                    scanf("%s",inputStudentEmailID);
                    write(sockfd,&inputStudentEmailID,sizeof(inputStudentEmailID));
                    //input student emailID

                    //read student password
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read student password

                    //input student password
                    char inputStudentPassword[100];
                    scanf("%s",inputStudentPassword);
                    write(sockfd,&inputStudentPassword,sizeof(inputStudentPassword));
                    //input student password

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker
                    if(checker==-1){
                        break;
                    }else if(checker==0){
                        break;
                    }else if(checker==1){
                        //read addStudentEntry
                        int addStudentEntry;
                        read(sockfd,&addStudentEntry,sizeof(int));
                        //read addStudentEntry
                        if(addStudentEntry==-1){
                            break;
                        }else{
                            //read student added successfully!!!
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            
                            //read student added successfully!!!
                        }
                    }else{
                        break;
                    }
                }
                else if(adminChoice==2){
                    //read Faculty name
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read Faculty name
                    
                    //input Faculty name
                    char inputFacultyName[100];
                    scanf("%s",inputFacultyName);
                    write(sockfd,&inputFacultyName,sizeof(inputFacultyName));
                    //input Faculty name

                    //read Faculty rollno
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read Faculty rollno

                    //input Faculty rollno
                    char inputFacultyRollno[100];
                    scanf("%s",inputFacultyRollno);
                    write(sockfd,&inputFacultyRollno,sizeof(inputFacultyRollno));
                    //input Faculty rollno


                    //read Faculty password
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read Faculty password

                    //input Faculty password
                    char inputFacultyPassword[100];
                    scanf("%s",inputFacultyPassword);
                    write(sockfd,&inputFacultyPassword,sizeof(inputFacultyPassword));
                    //input Faculty password

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker
                    if(checker==-1){
                        break;
                    }else if(checker==0){
                        break;
                    }else if(checker==1){
                        //read addFacultyEntry
                        int addFacultyEntry;
                        read(sockfd,&addFacultyEntry,sizeof(int));
                        //read addFacultyEntry
                        if(addFacultyEntry==-1){
                            break;
                        }else{
                            //read Faculty added successfully!!!
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            
                            //read Faculty added successfully!!!
                        }
                    }else{
                        break;
                    }
                }
                else if(adminChoice==3){
                    //read Student UID
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read Student UID
                    
                    //input Student UID
                    char inputStudentRollno[100];
                    scanf("%s",inputStudentRollno);
                    write(sockfd,&inputStudentRollno,sizeof(inputStudentRollno));
                    //input Student UID

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker                   

                    if(checker==-1){
                        //unable to access database
                        break;
                    }else if(checker==0){
                        //duplicate entry

                        //read student msg
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read student msg

                    }else if(checker==1){
                        //unique entry

                        //read student not found
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read student not found
                        break;
                    }else{
                        break;
                    }
                }
                else if(adminChoice==4){
                    //read Student UID
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read Student UID
                    
                    //input Student UID
                    char inputStudentRollno[100];
                    scanf("%s",inputStudentRollno);
                    write(sockfd,&inputStudentRollno,sizeof(inputStudentRollno));
                    //input Student UID

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker                   

                    if(checker==-1){
                        //unable to access database
                        break;
                    }else if(checker==0){
                        //duplicate entry

                        //read student msg
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read student msg

                    }else if(checker==1){
                        //unique entry

                        //read student not found
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read student not found
                        break;
                    }else{
                        break;
                    }
                }
                else if(adminChoice==5){
                    //update student

                    //read input rollnumber msg
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read input rollnumber msg

                    //write input rollnumber
                    char inputStudentRollno[100];
                    scanf("%s",inputStudentRollno);
                    write(sockfd,&inputStudentRollno,sizeof(inputStudentRollno));
                    //write input rollnumber

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker  

                    if(checker==-1){
                        //unable to access database
                        break;
                    }else if(checker==0){
                        //duplicate entry

                        //read name/pass
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read name/pass

                        //write namepass value
                        int namePass;
                        scanf("%d",&namePass);
                        write(sockfd,&namePass,sizeof(int));
                        //write namepass value
                        if(namePass==1){
                            //read enter new name
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read enter new name

                            //input new name
                            char inputNewName[100];
                            scanf("%s",inputNewName);
                            write(sockfd,&inputNewName,sizeof(inputNewName));
                            //input new name

                            //read msg updation
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read msg updation
                            
                        }
                        else if(namePass==2){
                            //read enter new password
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read enter new password

                            //input new password
                            char inputNewPassword[100];
                            scanf("%s",inputNewPassword);
                            write(sockfd,&inputNewPassword,sizeof(inputNewPassword));
                            //input new password

                            //read msg updation
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read msg updation
                            
                        }
                        else{
                            break;
                        }

                    }else if(checker==1){
                        //unique entry

                        //read student not found
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read student not found
                        break;
                    }else{
                        break;
                    }

                }
                else if(adminChoice==6){
                    //update faculty
                    //read input rollnumber msg
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read input rollnumber msg

                    //write input uid
                    char inputFacultyUID[100];
                    scanf("%s",inputFacultyUID);
                    write(sockfd,&inputFacultyUID,sizeof(inputFacultyUID));
                    //write input rollnumber

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker  

                    if(checker==-1){
                        //unable to access database
                        break;
                    }else if(checker==0){
                        //duplicate entry

                        //read name/pass
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read name/pass

                        //write namepass value
                        int namePass;
                        scanf("%d",&namePass);
                        write(sockfd,&namePass,sizeof(int));
                        //write namepass value
                        if(namePass==1){
                            //read enter new name
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read enter new name

                            //input new name
                            char inputNewName[100];
                            scanf("%s",inputNewName);
                            write(sockfd,&inputNewName,sizeof(inputNewName));
                            //input new name

                            //read msg updation
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read msg updation
                            
                        }
                        else if(namePass==2){
                            //read enter new password
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read enter new password

                            //input new password
                            char inputNewPassword[100];
                            scanf("%s",inputNewPassword);
                            write(sockfd,&inputNewPassword,sizeof(inputNewPassword));
                            //input new password

                            //read msg updation
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            //read msg updation
                            
                        }
                        else{
                            break;
                        }

                    }else if(checker==1){
                        //unique entry

                        //read faculty not found
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read faculty not found
                        break;
                    }else{
                        break;
                    }
                }
                else if(adminChoice==7){
                    //read enter student rollo
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s",buffer);
                    //read enterstudent rollo

                    //write rollno
                    char inputRollNo[100];
                    scanf("%s",inputRollNo);
                    write(sockfd,&inputRollNo,sizeof(inputRollNo));
                    //write rollno

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(checker));
                    //read checker

                    if(checker==-1){
                        //database error
                        printf("Unable to access Database\n");
                        break;
                    }else if(checker==0){
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("%s\n",buffer);
                        break;
                    }else if(checker==1){
                        break;
                    }else{
                        break;
                    }
                }else if(adminChoice==8){
                    //read enter faculty rollo
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s",buffer);
                    //read enterstudent rollo

                    //write rollno
                    char inputFACUID[100];
                    scanf("%s",inputFACUID);
                    write(sockfd,&inputFACUID,sizeof(inputFACUID));
                    //write rollno

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(checker));
                    //read checker

                    if(checker==-1){
                        //database error
                        printf("Unable to access Database\n");
                        break;
                    }else if(checker==0){
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("%s\n",buffer);
                    }else if(checker==1){
                        printf("Entry does not exist\n");
                        break;
                    }else{
                        break;
                    }
                }
                else if(adminChoice==9){printf("Exiting...\n");break;}
                else{printf("Wrong Choice,Exiting...\n");break;}
                }
            }else{
                printf("Authentication failed\n");
                break;
            }
            //authenticate Check
        }else if(choice==2){
            //student login
            //read input UID msg
            bzero(buffer,buffsz);
            read(sockfd,buffer,buffsz);
            printf("Server:\n %s\n",buffer);
            //read input UID msg

            //write input roll no
            char inputStudentUID[100];
            scanf("%s",inputStudentUID);
            write(sockfd,&inputStudentUID,sizeof(inputStudentUID));
            //write input roll no 

            //read input Password msg
            bzero(buffer,buffsz);
            read(sockfd,buffer,buffsz);
            printf("Server:\n %s\n",buffer);
            //read input Password msg

            //write inputPassword
            char inputPassword[100];
            scanf("%s",inputPassword);
            write(sockfd,&inputPassword,sizeof(inputPassword));
            //write inputPassword 

            //authenticate Check
            int isValid;
            read(sockfd,&isValid,sizeof(int));
            //authenticate Check

            if(isValid==1){
                while(1){
                //read student Menu
                bzero(buffer,buffsz);
                read(sockfd,buffer,buffsz);
                printf("Server:\n %s\n",buffer);
                //read student Menu

                int studentChoice;
                scanf("%d",&studentChoice);
                write(sockfd,&studentChoice,sizeof(int));
                //write FacultyMenu choice

                
                if(studentChoice==1){
                    //read course code
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read course code


                    //input couser code
                    char inputCourseCode[100];
                    scanf("%s",inputCourseCode);
                    write(sockfd,&inputCourseCode,sizeof(inputCourseCode));
                    //input couser code

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker

                    if(checker==-1){
                        //unable to access course database
                        printf("Unable to access Courses Database\n");
                        break;
                    }else if(checker==0){   
                        //course exists
                        int enrollStatus;
                        //read enrollStatus
                        read(sockfd,&enrollStatus,sizeof(int));
                        //read enrollStatus
                        if(enrollStatus==-1){
                            printf("Unable to access database\n");
                            break;
                        }else if(enrollStatus==1){
                            //student is enrolled in course successfully
                            printf("Course added successfully\n");
                            
                        }else if(enrollStatus==0){
                            //one of condition fails
                            printf("Course does not exist\n");
                            break;
                        }else{
                            break;
                        }
                        break;
                    }else if(checker==1){
                        //course does not exist
                        printf("Course does not exist\n");
                        break;
                    }else{
                        break;
                    }
                }else if(studentChoice==2){
                    //unenroll student

                    //read enter course code
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read enter course code

                    //write course code
                    char inputCourseCode[100];
                    scanf("%s",inputCourseCode);
                    write(sockfd,&inputCourseCode,sizeof(inputCourseCode));
                    //write course code

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker

                    if(checker==-1){
                        printf("Unable to access database\n");
                        break;
                    }else if(checker==0){
                        //course exists
                        int unenrollStatus;
                        //read unenrollStatus
                        read(sockfd,&unenrollStatus,sizeof(int));
                        //read unenrollStatus
                        if(unenrollStatus==-1){
                            printf("error accessing database\n");
                            break;
                        }else if(unenrollStatus==1){
                            //success
                            printf("Student is unenrolled\n");
                            
                        }else if(unenrollStatus==0){
                            //failed
                            printf("Student hasn't enrolled\n");
                            break;
                        }else{
                            break;
                        }
                        
                    }else if(checker==1){
                        //course does not exists
                        printf("Course does not exist\n");
                        break;
                    }else{
                        break;
                    }
                }else if(studentChoice==3){
                    //view enrolled courses

                    //read course details
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read course details
                    
                }else if(studentChoice==4){
                    //read enter new password
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read enter new password


                    //input new password
                    char inputNewPassword[100];
                    scanf("%s",inputNewPassword);
                    write(sockfd,&inputNewPassword,sizeof(inputNewPassword));
                    //input new password


                    //read msg updation
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read msg updation
                    
                }else if(studentChoice==5){
                    printf("Exiting...\n");
                    break;
                }else{
                    printf("Wrong choice,Exiting...");
                    break;
                }
                }
            }
        }else if(choice==3){
            //faculty login
            //read input facUID msg
            bzero(buffer,buffsz);
            read(sockfd,buffer,buffsz);
            printf("Server:\n %s\n",buffer);
            //read input email msg

            //write inputFacUID
            char inputFacUID[100];
            scanf("%s",inputFacUID);
            write(sockfd,&inputFacUID,sizeof(inputFacUID));
            //write inputFacUID 

            //read input Password msg
            bzero(buffer,buffsz);
            read(sockfd,buffer,buffsz);
            printf("Server:\n %s\n",buffer);
            //read input Password msg

            //write inputPassword
            char inputPassword[100];
            scanf("%s",inputPassword);
            write(sockfd,&inputPassword,sizeof(inputPassword));
            //write inputPassword 
            //authentication input
            
            //authenticate Check
            int isValid;
            read(sockfd,&isValid,sizeof(int));
            if(isValid==1){
                while(1){
                //read Faculty Menu
                bzero(buffer,buffsz);
                read(sockfd,buffer,buffsz);
                printf("Server:\n %s\n",buffer);
                //read Faculty Menu

                //write FacultyMenu choice
                int facultyChoice;
                scanf("%d",&facultyChoice);
                write(sockfd,&facultyChoice,sizeof(int));
                //write FacultyMenu choice
                
                if(facultyChoice==1){
                    //read course code
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read course code

                    //input couser code
                    char inputCourseCode[100];
                    scanf("%s",inputCourseCode);
                    write(sockfd,&inputCourseCode,sizeof(inputCourseCode));
                    //input couser code

                    //read course name
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read course name

                    //input couser name
                    char inputCouseName[100];
                    scanf("%s",inputCouseName);
                    write(sockfd,&inputCouseName,sizeof(inputCouseName));
                    //input couser name


                    //read course credits
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read course credits

                    //input couser credits
                    int inputCredits;
                    scanf("%d",&inputCredits);
                    write(sockfd,&inputCredits,sizeof(int));
                    //input couser credits


                    //read course maxStudentsAllowed
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read course crmaxStudentsAllowededits

                    //input couser maxStudentsAllowed
                    int inputMaxStudentsAllowed;
                    scanf("%d",&inputMaxStudentsAllowed);
                    write(sockfd,&inputMaxStudentsAllowed,sizeof(int));
                    //input couser maxStudentsAllowed

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker

                    if(checker==-1){
                        break;
                    }
                    else if(checker==0){
                        //duplicate entry
                        printf("Entry Already exist\n");
                        break;
                    }
                    else if(checker==1){
                        //course not present
                        int addCourseEntry;
                        read(sockfd,&addCourseEntry,sizeof(int));
                        //read addStudentEntry
                        if(addCourseEntry==-1){
                            break;
                        }else{
                            //read course added successfully!!!
                            bzero(buffer,buffsz);
                            read(sockfd,buffer,buffsz);
                            printf("Server:\n %s\n",buffer);
                            
                            //read course added successfully!!!
                        }
                    }
                    else{break;}

                }
                else if(facultyChoice==2){
                    //remove course code

                    //read enter course code
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read enter course code

                    //write course code
                    char inputCourseCode[100];
                    scanf("%s",inputCourseCode);
                    write(sockfd,&inputCourseCode,sizeof(inputCourseCode));
                    //write course code

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker 
                    if(checker==-1){
                        printf("Unable to access Course Database\n");
                        break;
                    }else if(checker==0){
                        //course is removed

                        //read course remove msg
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read course remove msg
                        
                    }else if(checker==1){
                        break;
                    }else{
                        break;
                    }


                }
                else if(facultyChoice==3){
                    //view enrollments

                    //read msg for input
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read msg for input

                    //write course code
                    char inputCoursecode[100];
                    scanf("%s",inputCoursecode);
                    write(sockfd,&inputCoursecode,sizeof(inputCoursecode));
                    //write course code

                    //read checker
                    int checker;
                    read(sockfd,&checker,sizeof(int));
                    //read checker
                    if(checker==-1){
                        printf("Unable to access Courses database\n");
                    }else if(checker==0){
                        //display details


                        //read msg
                        bzero(buffer,buffsz);
                        read(sockfd,buffer,buffsz);
                        printf("Server:\n %s\n",buffer);
                        //read msg

                        int activeStudents;
                        //read active students

                        read(sockfd,&activeStudents,sizeof(activeStudents));
                        printf("%d\n",activeStudents);
                        //read active students
                        
                    }else if(checker==1){
                        printf("Course does not exist\n");
                        break;
                    }else{
                        break;
                    }

                }
                else if(facultyChoice==4){
                    //password change


                    //read enter new password
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read enter new password


                    //input new password
                    char inputNewPassword[100];
                    scanf("%s",inputNewPassword);
                    write(sockfd,&inputNewPassword,sizeof(inputNewPassword));
                    //input new password


                    //read msg updation
                    bzero(buffer,buffsz);
                    read(sockfd,buffer,buffsz);
                    printf("Server:\n %s\n",buffer);
                    //read msg updation
                    
                }
                else if(facultyChoice==5){
                    printf("Exiting...\n");
                    break;
                }else{
                    printf("Wrong Choice, Exiting...\n");
                    break;
                }
                }
            }else{
                printf("Authentication failed\n");
                break;
            }

        }else{
            printf("exiting...\n");
            break;
        }
        

        
        
    }
    close(sockfd);
    return 0;
}