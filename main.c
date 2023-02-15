#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include<string.h>
char bar[15]="#";
char bar2[15]="#";
void progressbar(int s)
{
    if (s % 150 == 0)
    {
        printf("\t\t");
        strcat(bar,"#");
        printf("%s", bar);
    }
}

void progressbar2(int s)
{
    if (s % 30 == 0)
    {
        printf("\t\t");
        strcat(bar2,"#");
        printf("%s", bar2);
    }
}
int main()
{

    int flag = 1;
    int numberofsessions = 0;
    while (flag)
    {
        numberofsessions++;
        int s = 0;
        while (s <= 1500)
        {
            printf("\e[?25l");
            sleep(1);
            progressbar(s);
            printf("\rStudy period ends in: %d sec.", 1500 - s);
            fflush(stdout);
            s++;
        }
        printf("\a");
        printf("\n");
        s = 0;
        while (s <= 300)
        {
            printf("\e[?25l");
            sleep(1);
            progressbar2(s);
            printf("\rBreak time ends in: %d sec.", 300 - s);
            fflush(stdout);
            s++;
        }
        printf("\e[?25h");
        printf("\nEnter 1 to have another session or 0 to exit: ");
        scanf("%d", &flag);
    }
    int choice = 0;
    printf("\nRate your study session? (1) for yes, (2) for no: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        char rating;
        FILE *fptr;
        fptr=fopen("feedback.csv", "a");
        printf("\nEnter (G) for good, (B) for bad, (A) for average study session: ");
        scanf("%c", &rating);
        scanf("%c", &rating);
        if (rating == 'A' || rating == 'B' || rating == 'G')
        {
            fprintf(fptr, "%s,%d,%c\n", __DATE__, numberofsessions, rating);
        }

        else
        {
            printf("Invalid option!!!\n");
        }
        fclose(fptr);
        
        break;
    case 2:
        printf("\nThank you for studying with me! :)");
        break;

    default:
        printf("Invalid option!!!\n");
        break;
    }
    system("python3 analytics.py");
    return 0;
}