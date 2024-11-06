#include <stdio.h>
#include <math.h>
int interface (int) ;
int password (int) ;
int withdraw (int) ;
int add (int) ; 
int edit (int) ; 
int transfer (int) ; 
int fd (int) ; 
int compound (int) ; 
int editpass (int) ;
int emi (int) ; 
int a1 = 10000; int *x1 = &a1 ; int pass1 = 1111 ; int *p1 = &pass1 ; 
int a2 = 10000; int *x2 = &a2 ; int pass2 = 2222 ; int *p2 = &pass2 ; 
int a3 = 10000; int *x3 = &a3 ; int pass3 = 3333 ; int *p3 = &pass3 ; 
int a4 = 10000; int *x4 = &a4 ; int pass4 = 4444 ; int *p4 = &pass4 ; 
int a5 = 10000; int *x5 = &a5 ; int pass5 = 5555 ; int *p5 = &pass5 ; 
int run = 1 ; int *r = &run ; 
int response ; int *resp = &response ; 

int main () {
    printf("notishu264\n\n") ; 
    printf("Welcome to me bank system interface.\n\n") ; 
    printf("Preset password for user 1 is 1111 , user 2 is 2222 , user 3 is 3333 , user 4 is 4444 , user 5 is 5555. Preset account value is 10000\n\n") ; 
    while (run) { 
        printf("Which user do you want to access (1, 2, 3, 4 or 5) ? Or press '6' to exit.\n") ; 
        scanf("%d" , &response) ; 
        switch (response) {
            case 1 :  
            printf("Welcome user 1. Please enter your password. \n") ; 
            int i1 = password (pass1) ; 
            if (i1) {
                printf("Welcome user 1.\nYour account value is %d\n\n" , a1) ; 
                *x1 = interface (a1) ; 
                printf("Your current account value is %d\n" , *x1) ;
            } else {
                printf("Wrong password\n") ;
            }
            break ; 
            case 2 :  
            printf("Welcome user 2. Please enter your password. \n") ; 
            int i2 = password (pass2) ; 
            if (i2) {
                printf("Welcome user 2.\nYour account value is %d\n\n" , a2) ; 
                *x2 = interface (a2) ; 
                printf("Your current account value is %d\n" , *x2) ; 
            } else {
                printf("Wrong password\n") ;
            }
            break ;
            case 3 :  
            printf("Welcome user 3. Please enter your password. \n") ; 
            int i3 = password (pass3) ; 
            if (i3) {
                printf("Welcome user 3.\nYour account value is %d\n\n" , a3) ; 
                *x3 = interface (a3) ; 
                printf("Your current account value is %d\n" , *x3) ; 
            } else {
                printf("Wrong password\n") ;
            }
            break ;
            case 4 :  
            printf("Welcome user 4. Please enter your password. \n") ; 
            int i4 = password (pass4) ; 
            if (i4) {
                printf("Welcome user 4.\nYour account value is %d\n\n" , a4) ; 
                *x4 = interface (a4) ; 
                printf("Your current account value is %d\n" , *x4) ; 
            } else {
                printf("Wrong password\n") ;
            }
            break ;
            case 5 :  
            printf("Welcome user 5. Please enter your password. \n") ; 
            int i5 = password (pass5) ; 
            if (i5) {
                printf("Welcome user 5.\nYour account value is %d\n\n" , a5) ; 
                *x5 = interface (a5) ; 
                printf("Your current account value is %d\n" , *x5) ; 
            } else {
                printf("Wrong password\n") ;
            }
            break ;
            case 6 :  
            printf("Exited \n") ; 
            run = 0 ;
            break ;
            default : 
            printf("Please enter a valid number.\n\n") ; 
        }
    }
    return 0 ; 
}

int interface (int x) {
    int y ; 
    int res ; 
    printf("Enter \n1 to add amount \n2 to withdraw \n3 to transfer \n4 for fixed interest \n5 for compund interest \n6 for editting amount \n7 for edditting password \n8 for exitting. \n\n");
    scanf("%d" , &res) ; 
    switch (res) {
        case 1 :
        y = add (x) ; 
        return y ; 
        break ; 
        case 2 : 
        y = withdraw (x) ; 
        return y ; 
        case 3 :
        y = transfer (x) ; 
        return y ;
        break ; 
        case 4 : 
        y = fd (x) ; 
        return y ; 
        break ; 
        case 5 : 
        y = compound (x) ; 
        return y ; 
        break ; 
        case 6 : 
        y = edit (x) ; 
        return y ;
        break ; 
        case 7 : 
        y = editpass (x); 
        return y ;
        break ; 
        case 8 : 
        printf("Exited.\n") ;
        return x ;  
        break ; 
        default :
        printf("Enter a valid number.\n") ; 
    }
}

int add ( int num1) {
    int y ; 
    printf("Enter amount to add\n") ; 
    scanf("%d" , &y) ; 
    num1 = num1 + y ; 
    return num1 ; 
}

int withdraw ( int num1) {
    int y ; 
    printf("Enter amount to withdraw\n") ; 
    scanf("%d" , &y) ; 
    num1 = num1 - y ; 
    return num1 ; 
}

int edit (int num1) {
    int y ; 
    printf("Enter the value you want to change it to.\n") ; 
    scanf("%d" , &y) ; 
    num1 = y ; 
    return num1 ; 
}

int fd (int num1) {
    int rate , time , notime ; 
    printf("Enter the smple interest rate:\n") ;
    scanf("%d" , &rate) ; 
    printf("Enter number of years: \n") ; 
    scanf("%d" , &time) ; 
    printf("Enter the number of times per year\n") ; 
    scanf("%d" , &notime) ; 
    printf("Your interest = %d\n" , (num1 *  rate * time * notime) /100) ;
    num1 = num1 + ((num1 *  rate * time * notime) /100) ;
    return num1 ; 
}

int compound (int num1) {
    float rate , notime , time ;
    printf("Enter the smple interest rate:\n") ;
    scanf("%f" , &rate) ; 
    printf("Enter number of years: \n") ; 
    scanf("%f" , &time) ; 
    printf("Enter the number of times per year\n") ; 
    scanf("%f" , &notime) ; 
    printf("Your interest is %d" , num1*(pow(1+(rate/notime), notime*time)) ) ;
    num1 = num1*(pow(1+(rate/notime), notime*time)) ;
    return num1 ; 
}

int editpass (int num1) {
    int check , np ; 
    if (*resp == 1) {
        printf("Enter current password below:\n") ; 
        scanf("%d" , &check) ; 
        if (check == *p1) {
            printf("Please enter new password:\n") ; 
            scanf("%d" , &np) ; 
            *p1 = np ; 
        } else {
            printf("Wrong password.\n");
        } 
    } else if (*resp == 2) {
        printf("Enter current password below:\n") ; 
        scanf("%d" , &check) ; 
        if (check == *p2) {
            printf("Please enter new password:\n") ; 
            scanf("%d" , &np) ; 
            *p2 = np ; 
        } else {
            printf("Wrong password.\n");
        } 
    } else if (*resp == 3) {
        printf("Enter current password below:\n") ; 
        scanf("%d" , &check) ; 
        if (check == *p3) {
            printf("Please enter new password:\n") ; 
            scanf("%d" , &np) ; 
            *p3 = np ; 
        } else {
            printf("Wrong password.\n");
        } 
    } else if (*resp == 4) {
        printf("Enter current password below:\n") ; 
        scanf("%d" , &check) ; 
        if (check == *p4) {
            printf("Please enter new password:\n") ; 
            scanf("%d" , &np) ; 
            *p4 = np ; 
        } else {
            printf("Wrong password.\n");
        } 
    } else {
        printf("Enter current password below:\n") ; 
        scanf("%d" , &check) ; 
        if (check == *p5) {
            printf("Please enter new password:\n") ; 
            scanf("%d" , &np) ; 
            *p5 = np ; 
        } else {
            printf("Wrong password.\n");
        } 
    }
    return num1 ; 
}

int transfer (int num1) {
    int res , t ; 
    printf("Who do you want to transfer it to ?\n") ; 
    scanf("%d" , &res) ; 
    if (res == 1) {
        printf ("Enter amount to transfer from your account to user 1\n") ; 
        scanf("%d" ,&t) ; 
        if (t>0) {
            num1 = num1 - t ; 
            *x1 = *x1 + t ; 
        } else {
            printf("Please enter a positive number.\n\n") ; 
        }
    } else if (res == 2) {
        printf ("Enter amount to transfer from your account to user 2\n") ; 
        scanf("%d" ,&t) ; 
       if (t>0) {
            num1 = num1 - t ; 
            *x2 = *x2 + t ; 
        } else {
            printf("Please enter a positive number.\n\n") ; 
        } 
    } else if (res == 3) {
        printf ("Enter amount to transfer from your account to user 3\n") ; 
        scanf("%d" ,&t) ; 
        if (t>0) {
            num1 = num1 - t ; 
            *x3 = *x3 + t ; 
        } else {
            printf("Please enter a positive number.\n\n") ; 
        } 
    } else if (res == 4) {
        printf ("Enter amount to transfer from your account to user 4\n") ; 
        scanf("%d" ,&t) ; 
       if (t>0) {
            num1 = num1 - t ; 
            *x4 = *x4 + t ; 
        } else {
            printf("Please enter a positive number.\n\n") ; 
        } 
    } else if (res == 5) {
        printf ("Enter amount to transfer from your account to user 5\n") ; 
        scanf("%d" ,&t) ; 
        if (t>0) {
            num1 = num1 - t ; 
            *x5 = *x5 + t ; 
        } else {
            printf("Please enter a positive number.\n\n") ; 
        } 
    } else {
        printf("Choose a valid user\n\n") ; 
    }
    return num1 ; 
}
 
int password (int something) {
    int y ;
    printf("Enter passowrd below:\n") ; 
    scanf("%d" , &y) ; 
    if (y==something) {
        return 1 ; 
    } else {
        return 0 ; 
    }
}



        



                






    




