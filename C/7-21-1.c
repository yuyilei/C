#include<sys/types.h>
#include<unistd.h>
int main() {
    pid_t pid ;
    int x = 1 ;
    pid = Fork() ;
    if ( pid == 0 ) {
        printf("child %d\n",++x) ;
        exit(0) ;
    }
    printf("parent %d\n",--x) ;
    exit(0);
}
