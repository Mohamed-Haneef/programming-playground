#include <stdio.h>

int main()
{
    int array[10] = {1, 2, 7, 3, 5, 2};
    int temp;
    for(int i=0; i<sizeof(array)/sizeof(int); i++){
        int lowest_element = i;
        for(int j=i; j<sizeof(array)/sizeof(int); j++){
            printf("Current index: #%d; Current element #%d \n", i, j);
            printf("array[i]: #%d; array[j]: #%d; \n", array[i], array[j], lowest_element);
            printf("lowest element index: #%d ; lowest element: #%d \n\n", lowest_element, array[lowest_element]);
            if(array[j] < array[lowest_element]){
                // temp = array[j];
                // array[j] = array[i];
                // array[i] = temp;
                printf("Low swapping done \n");
                lowest_element = j;
            }
        }
        temp = array[lowest_element];
        array[lowest_element] = array[i];
        array[i] = temp;
        printf("The lowest element from index %d is %d \n", i, lowest_element);
    }

    for(int x=0; x<sizeof(array)/sizeof(int); x++){
        printf("%d \n",array[x]);
    }
    return 0;
}