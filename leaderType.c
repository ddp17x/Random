#include <stdio.h>
int main(void) {

    int result = 0;
    char answer;
    char answerSheet[12];

    for (int i = 0; i < 12; i++)
    {
        printf("A, B, C?\n");
        scanf(" %c", &answer);

        if (answer == 'a' || answer == 'A')
        {
            result+=1;
            answerSheet[i] = answer;
        }
        else if (answer == 'b' || answer == 'B')
        {
            result+=2;
            answerSheet[i] = answer;
        }
        else
        {
            result+=3;
            answerSheet[i] = answer;
        }
    }

    printf("\nTally of Answers:\n");
    for (int a = 0; a < 12; a++)
    {
        printf("\n%d. %c", a+1, answerSheet[a]);
    }
    printf("\n\nTotal: %d", result);

    if (result <= 20)
    {
        printf("\nYou most commonly adopt an authoritarian or autocratic leadership style.");
    }
    else if (result >= 21 && result <= 27)
    {
        printf("\nYou lean toward a democratic or paticipative style of leadership");
    }
    else
    {
        printf("\nYour default leadership style is probably delegating or \"laissez faire\"");
    }

    return 0;
}