#include <stdio.h>
#include "object.h"

int main (void){
    // creating an object by calling the constructor
    object* obj = object_constructor (17, 'r');

    // reading objects fields 
    int field_int_val = obj->field_int;
    char field_char_val = obj->field_char;

    // calling an instance function in the obj
    int obj_fun_val = obj->instance_fun(23);

    // calling an instance function in the obj that uses the object fields
    int obj_fun_field_val = obj->inst_fun_use_fields(obj);

    // printing fields
    printf ("int field: %d,char field: %d \n", field_int_val, field_char_val);

    // printing instance_fun result
    printf ("obj_fun: %d \n", obj_fun_val);

    // printing result of instance function that uses fields
    printf ("obj instance function: %d \n", obj_fun_field_val);

    // destroying the object by freeing up memory that was allocated to it
    destructor (obj);

    return 0;
}