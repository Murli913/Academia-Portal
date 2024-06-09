#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#include "Database.h"

int searchStudent(const char* inputRollno){
    const char* fileName="Student.txt";
    int fd=open(fileName,O_RDONLY|O_CREAT,0666);
    if(fd==-1){
        printf("Unable to access Student database\n");
        return -1;
    }
    struct Student chkStudent;
    while(read(fd,&chkStudent,sizeof(chkStudent))>0){
        if(strcmp(chkStudent.rollno,inputRollno)==0){
            //duplicate exists
            return 0;
        }
    }
    //no duplicate exists
    return 1;
}


// int searchFaculty(const char* inputUID){
//     const char* fileName="Faculty.txt";
//     int fd=open(fileName,O_RDONLY|O_CREAT,0666);
//     if(fd==-1){
//         printf("Unable to access Faculty database\n");
//         return -1;
//     }
//     struct Faculty chkFaculty;
//     while(read(fd,&chkFaculty,sizeof(chkFaculty))>0){
//         if(strcmp(chkFaculty.facultyUID,inputUID)==0){
//             //duplicate exists
//             return 0;
//         }
//     }
//     //no duplicate exists
//     return 1;
// }
// int searchActiveCourse(const char* inputCourseCode){
//     const char* fileName="Courses.txt";
//     int fd=open(fileName,O_RDONLY|O_CREAT,0666);
//     if(fd==-1){
//         printf("Unable to access Course database\n");
//         return -1;
//     }
//     struct Course chkCourse;
//     while(read(fd,&chkCourse,sizeof(chkCourse))>0){
//         if(strcmp(chkCourse.course_code,inputCourseCode)==0 &&
//             chkCourse.status==1){
//             //duplicate exists
//             return 0;
//         }
//     }
//     //no duplicate exists
//     return 1;
// }
// int getStudentCount(const char* inputCourseCode){
//     const char* fileName="Courses.txt";
//     int fd=open(fileName,O_RDONLY|O_CREAT,0666);
//     if(fd==-1){
//         printf("Unable to access Course database\n");
//         return -1;
//     }
//     struct Course chkCourse;
//     while(read(fd,&chkCourse,sizeof(chkCourse))>0){
//         if(strcmp(chkCourse.course_code,inputCourseCode)==0 &&
//             chkCourse.status==1){
//             //duplicate exists
//             return chkCourse.currentStudentsEnrolled;
//         }
//     }
//     //no duplicate exists
//     return 1;
// }

#endif