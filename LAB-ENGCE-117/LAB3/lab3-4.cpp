/*
    Lab3.4
    Problem
    เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด

    Pre-code
    #include <stdio.h>

    void GetStudent( struct student child[][ 10 ], int *room ) ;

    int main() {
     struct student children[ 20 ][ 10 ] ;
     int group ;
     GetStudent( children, &group ) ;
     return 0 ;
    }//end function
*/
#include <stdio.h>

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function