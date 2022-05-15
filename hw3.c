#include <stdio.h>
#include <stddef.h>
#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    int* pi;
    int c;
    printf(1, "HW3 - Testing null-ptr dereference\n");
    pi = NULL;
    c = *pi; // this is a NULL pointer dereference
    printf(1, "pi value = %x\n", c);
    exit();
}