#include <zephyr.h>

int triple(int number){
    return number * 3;
}

void string_reverse(char * string){
    int length = 0;
    for(char * p_l = string; *p_l != '\0'; p_l++, length++);

    for(int i = 0; i < length / 2; i++)
    {
        char temp = string[i];
        string[i] = string[length - i - 1];
        string[length - i - 1] = temp;
    }
}

int main(){
    char name[] = {'N', 'o', 'r', 'd', 'i', 'c', '\0'};

    int number = 0;
    while(1)
    {
        printk("Number: %d\n", number++);
        printk("Name: %s\n", name);
        string_reverse(name);
        k_sleep(K_MSEC(1000));
    }
}
