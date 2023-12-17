/*
    Lab2.1
    Problem
    เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
    ตัวอย่างเช่น str1 = "I love you"
    จะได้ str2 = "uoy evol I"

    Pre-code
    #inclue

    void reverse( char str1[], char str2[] ) ;

    int main() {
     char text[ 50 ] = "I Love You" ;
     char out[ 50 ] ;
     reverse( text, out ) ;
    }//end function

    Test Case 1
    Input :	
        I Love You
    Output :
    	uoY evoL I

    Test Case 2
    Input :	
        Hello World
    Output :
    	dlroW olleH
*/
#inclue

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
}//end function