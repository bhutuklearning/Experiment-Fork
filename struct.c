#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char firstname[20];
        char lastname[20];
        int age;
        int noOfTest;
        float avg;
    }cricketer;
    
    cricketer arr[3];
    for(int i=0;i<3;i++){
        
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
       
        scanf("%d",&arr[i].noOfTest);
        
        scanf("%f",&arr[i].avg);
    }

    for(int i=0;i<3;i++){
        printf("Name:%s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age:%d\n",arr[i].age);
        printf("No of Test match:%d\n",arr[i].noOfTest);
        printf("Avg:%f\n\n",arr[i].avg);
    }
    return 0;
}