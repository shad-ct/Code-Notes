 
# FIle handling  :  
    FILE *something;
    something  = fopen("hey.txt","w");    // w => write/new file (it overwrite shits)  // r => read   // a=> edit/append  (it add new shits )

    fprintf(something, "hellot"); 

    fclose(something);