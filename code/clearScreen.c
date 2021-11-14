void getOsClearScreen(){   

    #ifdef __WIN32
        system("cls");
    #else
        system("clear"); // most other systems use this
    #endif
}

