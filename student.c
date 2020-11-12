#include <string.h>
#include "student.h"
//input :3 int value corresponding to number of seats available in each program.
//output returns variable of the type 'Program' initializing number of seats in each alloted program and also tells that filled seats are zero.

Program program_seats(int8_t ml,int8_t bda, int8_t es){

Program prg={ml,bda,es,20,0,0};

return prg;
}

int8_t filled_seats(Program pg,char program[]){
if (!strcmp(program,"ML"))
   return pg.ml_seats_filled;
else if(!strcmp(program,"BDA"))
    return pg.bda_seats_filled;
else if(!strcmp(program,"ES"))
    return pg.es_seats_filled;

return 0;
}

Student student_new(char name[],char program[],char email[],int32_t pgrank,int32_t uggrade,int32_t regno,char status[]){
Student s1;
strcpy(s1.name,name);
strcpy(s1.program,program);
strcpy(s1.email,email);
s1.pgrank=pgrank;
s1.uggrade=uggrade;

if(s1.uggrade<5.0){
    s1.regnumber=0;
    strcpy(s1.status,"REJECTED");
}
else if(s1.uggrade>5.0){
    s1.regnumber=2010510+s1.pgrank;
    strcpy(s1.status,"ACCEPTED");
}
else{
    s1.regnumber=0;
    strcpy(s1.status,"WAITING");
}
return s1;
}




