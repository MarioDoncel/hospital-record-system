 int clearScreen(void){   

    #ifdef __WIN32
        system("cls");
    #else
        system("clear"); // most other systems use this
    #endif

    return 0;
}

