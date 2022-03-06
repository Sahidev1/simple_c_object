#include "object.h"
#include <stdlib.h>

int object_function (int arg){
    return arg*arg;
}

int object_fun_use_fields (object*  obj){
    return obj->field_int + (int) obj->field_char;
}

object* object_constructor (int field_int, char field_char){
    object* obj = (object*) malloc(sizeof(object));
    obj->field_int = field_int;
    obj->field_char = field_char;
    obj->instance_fun = object_function;
    obj->inst_fun_use_fields = object_fun_use_fields;
    return obj;
}

void destructor (object* obj){
    free(obj);
}
