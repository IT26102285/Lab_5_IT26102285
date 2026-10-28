#include<stdio.h>
int main (void)
{   
	float bmi;
	float wt_lb;
	float ht_in;


	printf("Enter weight in pounds:\n");
	scanf("%f",&wt_lb);
                        
	printf("Enter height in inches:\n");
	scanf("%f",&ht_in);

	bmi=(wt_lb /(ht_in * ht_in)) * 703;
	printf("Your BMI: %.2f\n",bmi);

	if(bmi<18.5){
	       	printf("Underweight\n");
	}
        else if(bmi>=18.5 && bmi<25){ 
		printf("Normal weight\n");
	}
        else if(bmi>=25 && bmi<30){
	       	printf("Overweight\n");
	}
        else if(bmi>=30){
	       	printf("Obese\n");
	}

        return 0;
}	
