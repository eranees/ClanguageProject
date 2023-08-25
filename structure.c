#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Login
{
  char username[10];
  char password[8];
} login;

struct Student
{
  int rollno;
  char name[10];
  float marks;
};

// Function Decleration Of Login
void setCredentials();
int checkCredentials(char[], char[]);

// Function Decleration Of Student
void displayStudent(struct Student student);

void main()
{

  char getUsername[10];
  char getPassword[8];
  +36-9.------------

  struct Student student;

  system("cls");
  printf("Enter Username : ");
  gets(getUsername);
  printf("Enter Password : ");
  gets(getPassword);

  setCredentials();

  if (checkCredentials(getUsername, getPassword))
  {
    printf("--------------------------\n");
    printf("Welcome To Admin Dashboard\n");
    printf("--------------------------\n");
    printf("Enter Student Roll Number : ");
    scanf("%d", &student.rollno);

    printf("Enter Student Name        : ");
    scanf("%s", &student.name);

    printf("Enter Student Marks       : ");
    scanf("%f", &student.marks);

    displayStudent(student);
  }
  else
  {
    printf("Invalid username or password");
  }
}

// Function Definition Of Login
void setCredentials()
{
  // Database Connection
  strcpy(login.username, "admin");
  strcpy(login.password, "1234");
}

int checkCredentials(char username[], char password[])
{
  if (!strcmp(login.username, username) && !strcmp(login.password, password))
  {
    return 1;
  }
  return 0;
}

// Function Definition Of Student
void displayStudent(struct Student student)
{
  printf("---------------------------------\n");
  printf("Student Roll Number is : %d\n", student.rollno);
  printf("Student Name is        : %s\n", student.name);
  printf("Student Marks is       : %f\n", student.marks);
  printf("---------------------------------\n");
}