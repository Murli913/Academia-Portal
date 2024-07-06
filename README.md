CS-513 System Software –Project

Title: Design and Development of Course Registration Portal (Academia).

Description: The project aims to develop a Academia Portal that is user-friendly and
multifunctional.
The project should have the following functionalities:
● All Student and Faculty details and Course information are stored in files.
● Account holders have to pass through a login system to enter their accounts, and
all these User accounts will be managed by the Administrator.
● Roles to implement: Faculty, Student, Admin.
● The application should possess password-protected administrative access, thus
preventing the whole management system from unauthorized access.


● Once the Admin connects to the server, He/She should get a login and
password prompt.
After successful login, He/She should get menu for example:
Do you want to:
- Add Student
- Add Faculty
- Activate/Deactivate Student
- Update Student/Faculty details
- Exit

- 
● Once the Student connects to the server, He/She should get a login and
password prompt.
After successful login, He/She should get menu for example:
Do you want to:
- Enroll to new Courses
- Unenroll from already enrolled Courses
- View enrolled Courses
- Password Change
- Exit

- Once the Faculty connects to the server, He/She should get a login and
password prompt.
After successful login, He/She should get menu for example:
Do you want to:
- Add new Course
- Remove offered Course
- View enrollments in Courses
- Password Change
- Exit
(Assumption: Course will have a limited number of seats.)


● If you want to view the Course details then read lock is to be set else if you want
to Enroll or Unenroll then write lock should be used to protect the critical data
section.
● Use socket programming – Server maintains the database and serves multiple
clients concurrently. Clients can connect to the server and access their specific
academic details.
● Use System calls instead of Library functions wherever it is possible in the
project: Process Management, File Management, File Locking, Semaphores,
Multithreading and Inter Process Communication Mechanisms

Results:
Landing Page:


<img width="468" alt="image" src="https://github.com/Murli913/Academia-Portal/assets/141387276/82dbfc9b-bdd4-4ce9-873d-2cc876b3bac2">

Admin Menu:

<img width="466" alt="image" src="https://github.com/Murli913/Academia-Portal/assets/141387276/01e3a808-6ffd-4e81-bcad-33a92b55e2c4">


Faculty Menu:


<img width="469" alt="image" src="https://github.com/Murli913/Academia-Portal/assets/141387276/320636b3-ec2e-4de0-b288-7928cacfd524">


Student Menu:


<img width="468" alt="image" src="https://github.com/Murli913/Academia-Portal/assets/141387276/90afc2da-b295-469d-9c92-b213fa4bd65e">





