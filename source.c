//
// Created by Jordan on 9/19/2019.
//
#include <stdio.h>
#include "header.h"

double read_number(FILE *infile){
    double val;
    fscanf(infile,"%lf",&val);
    return val;

}
double calculate_average(double one,double two,double three,double four,double five){
    return (one + two + three + four + five) / 5;
}
double calculate_max(double one,double two,double three,double four,double five){
    double *largest = &one;
    if(*largest < two)largest = &two;
    if(*largest < three)largest = &three;
    if(*largest < four)largest = &four;
    if(*largest < five)largest = &five;

    return *largest;
}
double calculate_min(double one,double two,double three,double four,double five){
    double *smallest = &one;
    if(*smallest > two)smallest = &two;
    if(*smallest > three)smallest = &three;
    if(*smallest > four)smallest = &four;
    if(*smallest > five)smallest = &five;

    return *smallest;
}
