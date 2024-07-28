
# Switch
    switch(condition){
        case 1:
            printf("");
            break;
        default:
            printf("");
    }

    eg : 
    
    printf("1 for porotta \n 2 for chappathi \n 3 for kari \n choose one ");
    int da;
    scanf("%d",&da);
    switch(da){
        case 1:
            printf("you choose porotta");
            break;
        case 2:
            printf("you choose chappathi");
            break;
        case 3:
            printf("you choose kari");
            break;
        default:
            printf("are you a fool?");
    }

# switch and case 
	int day = 1;
	switch(day){
	case 1 :
		printf("case is 1 bru");
		break;
	case 2:
		printf("case is 2 bro");
		break;
	}
 	default:
		printf("nothing");