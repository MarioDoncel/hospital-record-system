 #include <stdio.h>
 #include <stdio_ext.h>

 int clearBuffer(void){   

    #ifdef __WIN32
        fflush(stdin);
    #else
        __fpurge(stdin);
    #endif

    return 0;
}

