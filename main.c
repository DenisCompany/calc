#include <stdion.h>

float version = 0.2;
float oneNumb, twoNumb;

int active=1;
int main(){
    char value;
    printf("Hello, I calc vesion %.2f and My creater is Denis Mustafin.\n ", version);
    do{
        active=TRUE;
        printf("What are you doing now?\n");
        printf("Input your number, pls->");
        scanf("%f", &oneNumb);
        printf("Input your second number, pls->");
        scanf("%f", &twoNumb);
        printf("What do you want doing now? *, /, +, -. \ndor you can exit insert | -->");
        scanf("%s", &value);
        switch(value) {
        case '+': printf("%.f+%.f=%.f\n", oneNumb, twoNumb, oneNumb+twoNumb);
        break;
         case '-': printf("%.f-%.f=%.f\n", oneNumb, twoNumb, oneNumb-twoNumb);
        break;
         case '*': printf("%.f*%.f=%.f\n", oneNumb, twoNumb, oneNumb*twoNumb);
        break;
         case '/': printf("%.f/%.f=%.f\n", oneNumb, twoNumb, oneNumb/twoNumb);
        break;
        case '|' : printf("Exit, Goodbye my friend!");

            active = 0;
            break;
    default:
        printf("Nothing  =)\n");
        }

    } while(active==1);
};
