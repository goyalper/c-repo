#include<stdio.h>
int main(){
    // pizza name is farmhouse
    char name[15] = "Farm House";

    // size is M
    char size = 'M';
    
    // person it serves is 2
    int personItServes = 2;

    // price including tax is 368.5
    float priceIncludingTax= 368.8;

    printf("pizza name is = %s\n", name);
    printf("size is = %c\n", size);
    printf("person it serves is = %d\n", personItServes);
    printf("price including tax is = %.1f\n", priceIncludingTax);

    // Yay you have ordered a Farm House Pizza of size M that serves 2.
    // Please pay Rs. 368.8 to te delivery person.
    printf("Yay you have ordered a %s Pizza of size %c that serves %d. "
    "Please pay Rs. %.1f to the delivery person.", name, size, personItServes, priceIncludingTax);
    

    
return 0;

}