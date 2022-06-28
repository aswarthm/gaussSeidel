#include<stdio.h>

int main(){
    int finished(float[], float[]);

    float matrix[3][4];

    printf("Enter the elements\n");
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            scanf("%f", &matrix[i][j]);
        }
    }
    
    float ans[3] = {0, 0, 0};
    float prevAns[3] = {0, 0, 0};

    do{
        for(int i = 0; i < 3; i++){
            //ans[i] = ( matrix[i][3] - ((matrix[i][(i+1)%3]*ans[(i+1)%3]) + (matrix[i][(i+2)%3]*ans[(i+2)%3])) ) / matrix[i][i]
            prevAns[i] = ans[i];
        }
        ans[0] = (matrix[0][3] - (matrix[0][1] * prevAns[1]) - (matrix[0][2] * prevAns[2]) ) / matrix[0][0];
        //prevAns[0] = ans[0];

        ans[1] = (matrix[1][3] - (matrix[1][0] * ans[0]) - (matrix[1][2] * prevAns[2])) / matrix[1][1];
        //prevAns[1] = ans[1];

        ans[2] = (matrix[2][3] - (matrix[2][0] * ans[0]) - (matrix[2][1] * ans[1])) / matrix[2][2];
        //prevAns[2] = ans[2];
    }while(!finished(ans, prevAns));
    printf("\nAns\n");
    for(int i = 0; i < 3; i++){
        printf("%f \n", ans[i]);
    }
}

int finished(float ans[], float prevAns[]){
    for (int i = 0; i < 3; i++)
    {
        if(ans[i] != prevAns[i]){
            return 0;
        }
    }
    return 1;
}