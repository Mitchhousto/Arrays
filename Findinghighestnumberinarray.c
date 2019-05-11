cd#include <stdio.h>

#include <stdio.h>
int main() {
const int N = 6; // const means "constant"
float data[6] = {1.2, 8.4, 10.8, -0.4, -8.234, 3.1};
int maxIndex ;
float maximum= -1e30;


    for(int i=0; i<N; i++)
    {
     if(data[i]>maximum)
     {
        maximum = data[i];
        maxIndex=i+1;
    } 
    }
       printf("The maximum value was %f, found at index %d", maximum, maxIndex); 
}  gcc 