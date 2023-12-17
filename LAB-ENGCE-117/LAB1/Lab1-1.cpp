/*
    Lab1.1 
    Problem
    จงเขียนโปรแกรมแสดงคำว่า Hello World จำนวน n บรรทัด (โดย n คือตัวเลขที่รับมาจากผู้ใช้)

    Pre-code
    #include <stdio.h>
*/
#include <stdio.h>
int main() {
	int n ;
    int i ;
    printf( "Input : " ) ;
    scanf( "%d", &n ) ;
    
    for( i = 1 ; i <= n ; i++ ) {
    	printf( "[%d] Hello world\n", i ) ;
    }//end for
    return 0;
}//end function
