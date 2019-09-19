#include <stdio.h>
#include "header.h"
int main() {
    FILE *infile = NULL;
    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab4P3\\input.txt","r");

    int choice;
    double one,two,three,four,five;
    one = read_number(infile);
    two = read_number(infile);
    three = read_number(infile);
    four = read_number(infile);
    five = read_number(infile);

    printf("Numbers read!\n\n");

    printf("What function would you like the result of? \n");
    printf("1. Average\n");
    printf("2. Largest\n");
    printf("3. Lowest\n");

    scanf("%d",&choice);

    if(choice == 1)printf("The average is %.2lf",calculate_average(one,two,three,four,five));
    if(choice == 2)printf("The Largest value is %.2lf",calculate_max(one,two,three,four,five));
    if(choice == 3)printf("The lowest value is %.2lf",calculate_min(one,two,three,four,five));

    if(choice < 1 || choice > 3)printf("Invalid response shutting down");

    return 0;
}