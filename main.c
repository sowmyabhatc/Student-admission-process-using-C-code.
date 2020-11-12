#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include <assert.h>
#include <string.h>

void test_program_seats()
{

    Program pg=program_seats(40,40,40);
    //assert(pg.machine_learning_seats==40);
    //assert(pg.bda_seats_filled==0);
    assert(filled_seats(pg,"ML")==20);
    int ml=0;
    int bda=0;
    int es=0;

    int n=10;
    Student s1[n];
    s1[0] =  student_new("Giri","BDA","giri@gmail.com",78,4.8,0,NULL);
    s1[1]=  student_new("Sowmya","ML","soumi@gmail.com",22,7.8,0,NULL);
    s1[2] =  student_new("Sanju","ES", "sanj@gmail.com",18,8,0,NULL);
    s1[3] =  student_new("Akshay", "ML","akshay@gmail.com",13,5.12,0,NULL);

    assert (s1[0].pgrank==78);
    assert (strcmp(s1[0].name,"Giri")==0);
    assert (strcmp(s1[0].status,"REJECTED")==0);
    assert (s1[0].regnumber==0);
    assert (strcmp(s1[1].status,"ACCEPTED")==0);
    assert (s1[2].regnumber!=0);
    assert (strcmp(s1[3].status,"WAITING")==0);


    for(int i = 0;i<10;i++){
        if(strcmp(s1[i].program,"ML")==0){
            ++ml;
        }
        else if(strcmp(s1[i].program,"BDA")==0){
            ++bda;
        }
        else if(strcmp(s1[i].program,"ES")==0){
            ++es;
        }
    }
    assert(ml+bda+es==4);


    for(int j=0;j<10;j++){
        if(strcmp(s1[j].status,"WAITING")==0){
            strcpy(s1[j].program,"ES");
            strcpy(s1[j].status,"ACCEPTED");
            s1[j].regnumber=2010510+s1[j].pgrank;

        }
    }

    assert(strcmp(s1[3].status,"ACCEPTED")==0);
    assert(s1[3].regnumber==2010523);

}






int main()
{










    test_program_seats();
    return 0;
}

