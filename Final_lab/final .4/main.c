#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct student{
     int id;
     float grade;
     char name[50];
   };
    void input_data(  struct student *ptr){
      for (int x=0; x<10; x++){
        printf("please enter your id");
        scanf("%d",&ptr->id);
          printf("please enter your grade");
        scanf("%f",&ptr->grade);
         printf("please enter your name");
         scanf("%s",ptr->name);
        ptr++;
      }
    }


        void output_data( struct student *ptr){

            for(int x=0; x<10 ; x++){
                printf("id = %d \n",ptr->id);
                printf("grade = %f \n",ptr->grade);
                printf("name= %s \n",ptr->name);
                ptr++;
            }





        }


int main()
{
    struct student stu[10];
    struct student * ptr;
    ptr =stu;
    input_data(ptr);
     ptr=stu;
    output_data(ptr);




}
