#include <stdio.h>
void func1(void){
    
    puts("segunda funcion");
    
    return;
}

int func2(){
    
    puts("tercera funcion");
return 0;
}
 int main ()
 {
     puts("funcion principal");
     func1();
     func2();
     return 0;
 }