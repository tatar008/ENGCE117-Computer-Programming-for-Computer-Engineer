/*
    Lab1.6
    Problem
    เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

    Pre-code
    #include <stdio.h>

    int GetMatrix( int *row, int *col ) ;

    int main() {
     int *data, m, n ;
     data = GetMatrix( &m, &n ) ;
     return 0 ;
    }//end function
*/
#include <stdio.h>

int GetMatrix( int *row, int *col ) ;

int main() {
 int *data, m, n ;
 data = GetMatrix( &m, &n ) ;
 return 0 ;
}//end function