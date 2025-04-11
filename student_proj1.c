//Project name:ACADEMIC REPORT GENERATOR(v1.o) USING BASIC C.
//Description: Takes input of student details, subject marks, and prints total marks,percentage and division/class.
//Author:codelgd

#include <stdio.h>

int main(){
    
    int total,no_of_students,disp_students,roll_no,b,sub_marks[100],n,grade_of_ten; //Declare necessary variables for processing student data
    float percentage;
    char name[20];
    printf("\n\t * ACADEMIC PERFORMANCE REPORT *\n");//heading
    printf("\nEnter the class strength :");
    scanf("%d",&no_of_students);

    for(int k=1;k<=no_of_students;k++){//Loop to reattempt input if invalid number of students entered
            printf("Enter no of students whose result is to be displayed :");//Asking how many students’ reports to show
            scanf("%d",&disp_students);
    
            if((disp_students<=no_of_students)&&(disp_students>0)){//validation of  information display of required no of students

                for(int i=1;i<=disp_students;i++){//loop to reattempt roll no.
                    printf("\nEnter student %d rollno :",i);
                    scanf("%d",&roll_no);

                     if((roll_no>0&&roll_no<=no_of_students)){//validates if entered roll no is within range
                         printf("Enter student %d name :",i);
                         scanf("%s",name);
                         printf("Enter no of subjects :");
                         scanf("%d",&n);
                         total=0;//re-initialisation
            
                         for(int b =0; b<n; b++) {//loop for reading marks and calculate total
                                printf("Enter subject %d marks :",  b+1);
                                scanf("%d", &sub_marks[b]);
                                total +=sub_marks[b];
                            }
            
                                percentage=(float)total/n;
                                grade_of_ten=(int)(percentage/10);//converting percentage to grade out of 10
                                printf("\nName :%s",name);//display student name
                                printf("\nTOTAL SCORE :%d",total);//display total score
                                printf("\nPERCENTAGE :%0.2f",percentage);//display percentage
                                printf("\nCLASS :");

                                switch(grade_of_ten){//switch statement for class/division classification 
                                 case 10:
                                 case 9: 
                                 case 8:  
                                     printf("DISTINCTION");
                                     break;
                                 case 7: 
                                 case 6:
                                    printf("FIRST CLASS");
                                     break;
                                 case 5: 
                                     printf("SECOND CLASS");
                                     break;
                                 case 4: 
                                    printf("PASS");
                                    break;  
                                 case 3:
                                 case 2:
                                 case 1:
                                 case 0: 
                                    printf("FAIL");
                                    break;
                                 default :
                                     printf("INVALID !");
                                    
                             
                                }
                                 printf("\n-------------------------");//students info separtor
            
                            }
                            else{
                                printf("\nRoll no is invalid.Try again!\n");//output for invalid rollno
                                i--;
                                printf("\n=========================\n");
                            }
                    }   
                     break;
            } 
                 else {
                        printf("Student strength is invalid.Try again\n\n");//output for invalid student strength
                        k--;//decrement outer loop counter to retry on invalid student strength input
                        printf("\n=========================\n");
                     }                                                 
    }
    printf("\n\t************");//ending liner
    return 0;

}