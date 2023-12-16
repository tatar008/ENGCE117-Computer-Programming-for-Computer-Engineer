#include <stdio.h>
int main() {
	int n ;
    int i ;
    printf( "Input : " ) ;
    scanf( "%d", &n ) ;
    
    for( i = 1 ; i <= n ; i++ ) {
    	printf( "[%d] Hello world\n", i ) ;
    }
    return 0;
}
