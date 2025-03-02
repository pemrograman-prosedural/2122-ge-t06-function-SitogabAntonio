// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include "StudentDormitory.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program, enum gender_t _gender)
{
  struct student_t std;

  strcpy(std.id, _id);
  strcpy(std.name, _name);
  strcpy(std.year, _year);
  strcpy(std.study_program, _study_program);
  std.gender = _gender;

  return std;
}

struct dorm_t create_dorm(char *_dormitory_name, unsigned short _capacity, enum status_t _status, enum type_t _type)
{
  struct dorm_t dorm_;

  strcpy(dorm_.dormitory_name, _dormitory_name);
  dorm_.capacity = _capacity;
  dorm_.status = _status;
  dorm_.type = _type;

  return dorm_;
}

void print_students(struct student_t *_students, int size){

  printf("Students:\n");
  int i;
  for(i = 0; i < size; i++);
  {
    if (_students[i].gender == MALE)  
    {
      printf("%s#%s#%s#%s%s\n", _students[i].id, _students[i].name, _students[i].year, _students[i].study_program, _students[i].gender);
    } else if (_students[i].gender == FEMALE) {
      printf("%s#%s#%s#%s%s\n", _students[i].id, _students[i].name, _students[i].year, _students[i].study_program, _students[i].gender);
    }
  }

}

void print_dorms(struct dorm_t *_dorm, int size){
  printf("Dorms:\n");
  for (int i = 0; i < size; i++)
  {
    if (_dorm[i].status==A){
      if(_dorm[i].type==FOR_MALE){
        printf("%s#%d#Available#For Male\n", _dorm[i].dormitory_name, _dorm[i].capacity);
      } else  if(_dorm[i].type==FOR_FEMALE){
        printf("%s#%d#Available#For Female\n", _dorm[i].dormitory_name, _dorm[i].capacity);
      }
    } else if (_dorm[i].status==NA){
      if(_dorm[i].type==FOR_MALE){
        printf("%s#%d#Available#For Male\n", _dorm[i].dormitory_name, _dorm[i].capacity);
      } else if(_dorm[i].type==FOR_FEMALE){
        printf("%s#%d#Available#For Female\n", _dorm[i].dormitory_name, _dorm[i].capacity);
      }
    }
  }
}

void print_students_dorm(struct student_dormitory_t *students_dorms,int students_size, struct dorm_t *dorms, int droms_size, struct student_t *students)
{
   
    
    int cewe = 0;
    int cowo = 0;

    for (int dor = 0; dor < droms_size; dor++)
    {
        int lk = 0;
        int pr = 0;
        int batas = 0;

        for (int i = cowo; i < students_size; i++)
        {
            if (students[i].gender == 0 && dorms[dor].capacity != 0 && dorms[dor].type == 0)
            {
                dorms[dor].capacity--;
                batas++;
            }
        }

        for (int i = cewe; i < students_size; i++)
        {
            if (students[i].gender == 1 && dorms[dor].capacity != 0 && dorms[dor].type == 1)
            {
                dorms[dor].capacity--;
                batas++;
            }
        }

        printf("\n%s#%i#", dorms[dor].dormitory_name, dorms[dor].capacity);
        if (dorms[dor].capacity > 0)
        {
            printf("Available#");
        }
        if (dorms[dor].capacity == 0)
        {
            printf("Not Available#");
        }
        if (dorms[dor].type == 0)
        {
            printf("For Male\n");
            for (int dar = cowo; dar < students_size; dar++)
            {
                if (students[dar].gender == 0 && lk != batas)
                {
                    lk++;
                    cowo = dar + 1;
                    printf("%s#%s#%s#%s\n", students[dar].id, students[dar].name, students[dar].year, students[dar].study_program);
                }
            }
            if (lk == 0)
            {
                printf("0\n");
            }
        }
        else if (dorms[dor].type == 1)
        {
            printf("For Female\n");
            for (int dar = cewe; dar < students_size; dar++)
            {
                if (students[dar].gender == 1 && pr != batas)
                {
                    pr++;
                    cewe = dar + 1;
                    printf("%s#%s#%s#%s\n", students[dar].id, students[dar].name, students[dar].year, students[dar].study_program);
                }
            }
            if (pr == 0)
            {
                printf("0\n");
            }
        }
    }
}
void assign_students(struct student_dormitory_t *students_dorms, struct dorm_t *dorms, struct student_t *students, int size_dorms, int size_students)
{
  printf("Students:\n");
  for (int i = 0; i < size_students; i++)
  {
    printf("%s#%s#%s#%s#", students[i].id, students[i].name, students[i].year, students[i].study_program);
    if (students[i].gender == 0)
    {
      printf("MALE\n");
    }
    else if (students[i].gender == 1)
    {
      printf("FEMALE\n");
    }
  }
  printf("\nDorms:\n");
  for (int i = 0; i < size_dorms; i++)
  {
    printf("%s#%i#", dorms[i].dormitory_name, dorms[i].capacity);
    if (dorms[i].status == 0)
    {
      printf("Available#");
    }
    else if (dorms[i].status == 1)
    {
      printf("Not Available#");
    }
    if (dorms[i].type == 0)
    {
      printf("For Male\n");
    }
    else if (dorms[i].type == 1)
    {
      printf("For Female\n");
    }
  }
}

struct dorm_t check_dorm(struct dorm_t *dorms, int size, enum type_t gender)
{
  struct dorm_t temp;
  
  // CODE

  return temp;
}

