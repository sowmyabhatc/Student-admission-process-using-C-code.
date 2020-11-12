#include<stdint.h>
#include "Appconst.h"

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED


typedef struct _student_ Student;
        struct _student_{
        char name[STUDENT_NAME_LEN];
        int32_t regnumber;
        int32_t pgrank;
        float uggrade;
        char program[PROGRAM_NAME_LEN];
        char email[EMAIL_LEN];
        char status[ADMISSION_STATUS];
    };

typedef struct _program_  Program;
struct _program_{
    int8_t machine_learning_seats;
    int8_t bigdata_seats;
    int8_t embedded_seats;

    int8_t ml_seats_filled;
    int8_t bda_seats_filled;
    int8_t es_seats_filled;
};





Program program_seats(int8_t ml,int8_t bda,int8_t es);
Student student_new(char name[],char program[],char email[],int32_t pgrank,int32_t uggrade,int32_t regno,char status[]);
//int32_t test_admission_status(int a);

int8_t filled_seats_machine_learning();
int8_t filled_seats(Program pg,char pr[]);



#endif // STUDENT_H_INCLUDED
