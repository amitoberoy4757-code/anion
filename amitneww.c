#include<stdio.h>
#include<string.h>
int main(){
  typedef struct classroom{
    int rollno;
    char house[40];
    float height;
    }gula;
     
     gula amit= {6,"BHABA",646.7374};
    struct school{
      char beststudent[50];
      struct classroom x ;
    }gyandeep;
    strcpy(gyandeep.beststudent,"Shakti");
  gyandeep.x.rollno=51;
  strcpy(gyandeep.x.house,"sarabhai");
   
  printf("%d\n",amit.rollno);
    printf("%s\n",amit.house);
    printf("%f\n",amit.height);
    printf("%s\n",gyandeep.beststudent);
   printf("%d\n",gyandeep.x.rollno=51);
    return 0;
}