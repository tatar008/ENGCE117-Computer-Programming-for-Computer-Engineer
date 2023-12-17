/*
Lab1.2
    Problem
    จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้

    Pre-code
    #include <stdio.h>
    #include <string.h>

    void GetSet( int [], int * ) ;

    int main() {
        int *data, num ;
        GetSet( &data, &num ) ;
        return 0 ;
    }//end function
*/
#include <stdio.h>

void GetSet(int[], int *);

int main() {
    int data[100], num;  
    GetSet(data, &num);
    return 0;
}

void GetSet(int array[], int *num) {
    printf("Enter the number of elements: ");
    scanf("%d", num);

    printf("Enter %d elements:\n", *num);
    for (int i = 1; i <= *num; i++) {
        printf("Element %d: ", i );
        scanf("%d", &array[i]);
    }

    printf("You entered the following elements:\n");
    for (int i = 1; i <= *num; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

