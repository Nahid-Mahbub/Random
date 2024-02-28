#include<stdio.h>
int main()
{
    int profit[] = {5, 10, 15, 7, 8, 9, 4};
    int weight[] = {1, 3, 5, 4, 1, 3, 2};
    float retio[6];
    float temp;
    int temp1, temp2;
    printf("\n\n");
    for(int i = 0; i < 7; i++)
    {
        retio[i] = ((float)profit[i] / weight[i]);
    }
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            if(retio[j] < retio[j+1])
            {
                //For retio_Short

                temp = retio[j+1];
                retio[j+1] = retio[j];
                retio[j] = temp;

                //For profit_Short

                temp1 = profit[j+1];
                profit[j+1] = profit[j];
                profit[j] = temp1;

                // For weight_Short

                temp2 = weight[j+1];
                weight[j+1] = weight[j];
                weight[j] = temp2;
                
            }
        }
    }

    for(int i = 0; i < 7; i++)
    {
        printf("%0.2f ", retio[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", profit[i]);
    }
    printf("\n\n");
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", weight[i]);
    }
    printf("\n\n");
    return 0;
}