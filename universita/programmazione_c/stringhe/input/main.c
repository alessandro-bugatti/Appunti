#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[] = "Ciao mondo";
    char s2[100];
//    printf("%s\n", s1);
//    s1[3] = 't';
//    printf("%s\n", s1);
//    int i;
//    for (i = 0; s1[i] != '\0'; i++)
//        printf("%c", s1[i]);
//    printf("\nInserisci una stringa: ");
//    scanf("%s", s2);
//    printf("%s\n", s2);
//    s2[9] = 'p';
//    printf("%s\n", s2);
//    for (i = 0; i < 100; i++)
//        printf("%c", s2[i]);
//    printf("\n");
    char s3[100];
    printf("Inserisci una stringa: ");
    //scanf("%s", s3);
    //printf("%s", s3);
    fgets(s3,100,stdin);//cosa succede con la scanf

    char s4[100];
    printf("Inserisci una stringa: ");
    fgets(s4,100,stdin);
    printf("%s", s3);
    printf("%s", s4);


    printf("Inserisci una stringa: ");
    //scanf("%s", s3);
    //printf("%s", s3);
    scanf("%s", s3);
    char c;
    scanf("%c", &c);
    printf("Inserisci una stringa: ");
    fgets(s4,100,stdin);
    printf("s3: %s", s3);
    printf("s4: %s", s4);



    return 0;
}



