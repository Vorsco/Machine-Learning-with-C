#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int X[5] ={11,21,13,14,17}; //umur
    int Y[5] = {30000,41000,25000,45000,34500}; //penghasilan
    int i;
    float tebak;
    printf("input the number that want to be predict: ");
    scanf("%f",&tebak);
    float mean_x;
    float mean_y;
    float predict;
    for (i = 0;i < 5;i++){
        mean_x += (float)X[i]/5;
        mean_y += (float)Y[i]/5;

    }



    //x-mean x
   float x1,y1;
   float x2;
   float sumOfx1y1;
   float squaredOfy;
   float sumy1;
    for(i =0;i< 5;i++){
        x1 = X[i] - mean_x;

        y1 = Y[i]- mean_y;
        x2 += pow(x1,2);
        sumOfx1y1 += x1 * y1;
        squaredOfy = pow(y1,2);
        sumy1 = predict - mean_y;



    }

    float m = sumOfx1y1 / x2;


    float c = mean_y-(m*mean_x);


    //predict

    for(i = 0;i < 5;i++){
        predict = (m*X[i]) + c;

    }
    float as;
    as =(m*tebak)+c;
    printf("\nini hasil prediksi %.2f\n",as);





    return 0;
}


