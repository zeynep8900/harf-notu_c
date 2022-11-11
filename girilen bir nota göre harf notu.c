#include <stdio.h>
 
 
int main(){
        
    int exam;
    float result;
    
    printf("enter your exam grade: ");
    scanf("%d", &exam);
    

        
        
    if ( result >=95 )
        printf("average: %.0f\nGrade: A\nCoefficient: 4.00", result);
        
    else if ( result <95 && result>=90 )
        printf("average: %.0f\nGrade: A-\nCoefficient: 3.70", result);
        
    else if ( result <90 && result>=85  )
        printf("average: %.0f\nGrade: B+\nCoefficient: 3.30", result);
        
    else if ( result <85 && result>=80  )
        printf("average: %.0f\nGrade: B\nCoefficient: 3.00", result);
        
    else if (result <80 && result>=75  )
        printf("average: %.0f\nGrade: B-\nCoefficient: 2.70", result);
        
    else if ( result <75 && result>=70)
        printf("average: %.0f\nGrade: C+\nCoefficient: 2.30", result);
        
    else if ( result <70 && result>=65)
        printf("average: %.0f\nGrade: C\nCoefficient: 2.00", result);
        
    else if ( result <65 && result>=60)
        printf("average: %.0f\nGrade: C-\nCoefficient: 1.70", result);
    else if ( result <60 && result>=55)
        printf("average: %.0f\nGrade: D+\nCoefficient: 1.30", result);
        
    else if ( result <55 && result>=50)
        printf("average: %.0f\nGrade: D\nCoefficient: 1.00", result);
        
    else 
        printf("average: %.0f\nGrade: F\nCoefficient: 0.00", result);    
    
    return 0;    
}
