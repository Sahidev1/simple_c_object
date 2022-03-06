#ifndef OBJECT_H
#define OBJECT_H

typedef struct Object {
    int field_int;
    char field_char;
    int (*instance_fun)(int arg);
    int (*inst_fun_use_fields)(struct Object* obj);
} object;

object* object_constructor (int field_int, char field_char);

void destructor (object* obj);

#endif