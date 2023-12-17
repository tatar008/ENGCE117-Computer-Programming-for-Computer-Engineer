/*
    Lab1.4
    Problem
    จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้ 

    Pre-code
    #include <stdio.h>

    int GetSet( int [] ) ;

    int main() {
     int *data, num ;
     num = GetSet( &data ) ;
     return 0 ;
    }//end function
*/
#include <stdio.h>

int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}//end function