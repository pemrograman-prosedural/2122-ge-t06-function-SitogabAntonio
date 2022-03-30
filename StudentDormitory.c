// NIM - Name
// NIM - Name

#include "StudentDormitory.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program, enum gender_t _gender)
{
  struct student_t std;
  
  //CODE
  
  return std;
}

struct dorm_t create_dorm(char *_dormitory_name, unsigned short _capacity, enum status_t _status, enum type_t _type)
{
  struct dorm_t dorm_;

  //CODE

  return dorm_;
} 
  
void print_students(struct student_t *_students ){

  //CODE

}

void print_dorms(struct dorm_t *_dorm, int size){
  
  //CODE
  
}

void print_dorm(struct dorm_t _dorm ){
  
  //CODE
  
}

void print_students_dorm(struct student_dormitory_t *students_dorms, struct dorm_t *_dorm, int droms_size){
  
  //CODE
  
}

void assign_students(struct student_dormitory_t *students_dorms, struct dorm_t *dorms, struct student_t *students, int size_dorms, int size_students){
  
  //CODE
  
}

struct dorm_t check_dorm(struct dorm_t *dorms, int size, enum type_t gender)
{
  struct dorm_t temp;
  
  //CODE

  return temp;
}
