#ifndef DATABASE_H
#define DATABASE_H
struct Course{
    char course_code[100];
	char course_name[100];
    char facultyUID[100];
    int  credits;
    int  currentStudentsEnrolled;
    int  maxStudentsAllowed;
	int status;
	int studentIsEnrolled;
	//status=1 course active
	//status=0 course removed
};
struct Admin{
	char name[100];
	char emailId[100];
	char password[100];
};
struct Student{
	char name[100];
	char rollno[100];
	char emailId[100];
	char password[100];
	int  status;
	struct Course courseEnrolled;
};
struct Faculty{
	char name[100];
    char facultyUID[100];
	char password[100];
	struct Course courseOffered;
};
#endif