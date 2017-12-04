#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

int main(){
    insert("fish");
    insert("fish");
    insert("fish");

    struct nlist *n;
    
    n = lookup("fish");
    printf("%d\n", n->occurances);

    return 0;
}
