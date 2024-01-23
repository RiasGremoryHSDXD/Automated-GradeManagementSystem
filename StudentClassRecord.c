#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

char* AlphabetValidation(char InformationType[]);
char* StuFullNameConcat(char LastName[], char FirstName[], char Middle[]);
char* DigitValidation(char Number[]);



int main()
{
    printf("Automated Grade Management System\n\n");

    char UserEmailInput[100], UserPasswordInput[100];
    char LastNameText[20] = "Last Name: ", FirstNameText[20] = "First Name: ", MiddleNameText[20] = "Middle Name: ";
    char ITC_SubText[50] = "Introduction to Computing: ", ComProg_SubText[50] = "Programmer: ", PurCom_SubText[50] = "Purposive Communication: ", RPH_SubText[50] = "Reading in Philippine History: ", TWC_SubText[50] = "The Cotemporary World: ";
    char StudentLastName[100], StudentFirstName[100], StudentMiddleName[100], StudentFullNames[100];
    char ITC_Sub[5], ComProg_Sub[5], PurCom_Sub[5], RPH_Sub[5], TWC_Sub[5];
    char Choose[100];
    char **FullName = malloc(100 * 8);
    char **ITC_SubMal = malloc(100 * 8);
    char **ComProg_SubMal = malloc(100 * 8);
    char **PurCom_SubMal = malloc(100 * 8);
    char **RPH_SubMal = malloc(100 * 8);
    char **TWC_SubMal = malloc(100 * 8);
    char **FinalGrade = malloc(100 *8);
    char **Remark = malloc(100 * 8);
    float Average;

    FullName[0] = NULL;
    int i = 0;

    printf("Enter the details: \n");

    First_Loop:
    while (true)
    {
        printf("\nEmail: ");
        fgets(UserEmailInput, sizeof(UserEmailInput), stdin);
        UserEmailInput[strlen(UserEmailInput) - 1] = '\0';

        printf("Password: ");
        fgets(UserPasswordInput, sizeof(UserPasswordInput), stdin);
        UserPasswordInput[strlen(UserPasswordInput) - 1] = '\0';

        if(strcmp(UserEmailInput, "1") == 0 && strcmp(UserPasswordInput, "1") == 0)
        {   
            while (true)
            {
                while (true)
                {
                    printf("\n+--------------------------+");
                    printf("\n| ADD STUDENT RECORD -   A |");
                    printf("\n| BACK               -   B |");
                    printf("\n| SHOW               -   S |");
                    printf("\n| END PROGRAM        -   E |");
                    printf("\n+--------------------------+");

                    printf("\nChoose: ");
                    fgets(Choose, sizeof(Choose), stdin);
                    Choose[strlen(Choose) - 1] = '\0';

                    if(strcmp(Choose, "A") == 0 || strcmp(Choose, "a") == 0)
                    {
                        FullName[i] = malloc(150);
                        ITC_SubMal[i] = malloc(150);
                        ComProg_SubMal[i] = malloc(150);
                        PurCom_SubMal[i] = malloc(150);
                        RPH_SubMal[i] = malloc(150);
                        TWC_SubMal[i] = malloc(150);
                        FinalGrade[i] = malloc(150);
                        Remark[i] = malloc(150);

                        strcpy(StudentLastName, AlphabetValidation(LastNameText));
                        strcpy(StudentFirstName, AlphabetValidation(FirstNameText));
                        strcpy(StudentMiddleName, AlphabetValidation(MiddleNameText));
                        strcpy(StudentFullNames, StuFullNameConcat(StudentLastName, StudentFirstName, StudentMiddleName));
                        strcpy(ITC_Sub, DigitValidation(ITC_SubText));
                        strcpy(ComProg_Sub, DigitValidation(ComProg_SubText));
                        strcpy(PurCom_Sub, DigitValidation(PurCom_SubText));
                        strcpy(RPH_Sub, DigitValidation(RPH_SubText));
                        strcpy(TWC_Sub, DigitValidation(TWC_SubText));

                        strcpy(FullName[i], StudentFullNames);
                        strcpy(ITC_SubMal[i], ITC_Sub);
                        strcpy(ComProg_SubMal[i], ComProg_Sub);
                        strcpy(PurCom_SubMal[i], PurCom_Sub);
                        strcpy(RPH_SubMal[i], RPH_Sub);
                        strcpy(TWC_SubMal[i], TWC_Sub);
                        Average = (atof(ITC_Sub) + atof(ComProg_Sub) + atof(PurCom_Sub) + atof(RPH_Sub) + atof(TWC_Sub)) / 5;
                        sprintf(FinalGrade[i], "%.2f", Average);
                        if(Average >= 70)
                        {
                            strcpy(Remark[i], "Passed");
                        }
                        else
                        {
                            strcpy(Remark[i], "Fail");
                        }
                        i++;
                        FullName = realloc(FullName, (i + 1) * 8);
                        ITC_SubMal = realloc(ITC_SubMal, (i + 1) * 8);
                        ComProg_SubMal = realloc(ComProg_SubMal, (i + 1) * 8);
                        PurCom_SubMal = realloc(PurCom_SubMal, (i + 1) * 8);
                        RPH_SubMal = realloc(RPH_SubMal, (i + 1) * 8);
                        TWC_SubMal = realloc(TWC_SubMal, (i + 1) * 8);
                        break;
                    }
                    else if (strcmp(Choose, "B") == 0 || strcmp(Choose, "b") == 0)
                    {   
                        goto First_Loop;
                    }
                    else if(strcmp(Choose, "S") == 0 || strcmp(Choose, "s") == 0)
                    {
        
                        if(FullName[0] == NULL)
                        {
                            printf("Don't have any student yet!");
                        }
                        else
                        {   
                            printf("+-----------------------------------------------------------------------------------------------------------------------------------------+\n");
                            printf("|                                                         STUDENT RECORDS AND GRADES                                                      |\n");
                            printf("+-----------------------------------------------------------------------------------------------------------------------------------------+\n");
                            printf("|  ID |                    STUDENT NAME                    |    ITC   |  COMPROG |  PURCOM  |    RPH   |   TWC    | AVERAGE  |   REMARK   |\n");
                            printf("+-----------------------------------------------------------------------------------------------------------------------------------------+\n");

                            for (int j = 0; j < i; j++)
                            {
                                
                                printf("| %3d | %-50s | %8s | %8s | %8s | %8s | %8s | %8s | %10s |\n", j + 1, FullName[j], ITC_SubMal[j], ComProg_SubMal[j], PurCom_SubMal[j], RPH_SubMal[j], TWC_SubMal[j], FinalGrade[j], Remark[j]);
                            }

                            printf("+-----------------------------------------------------------------------------------------------------------------------------------------+\n");


                        }
                    }
                    else if(strcmp(Choose, "E") == 0 || strcmp(Choose, "e") == 0)
                    {
                        printf("\nEnd of the program.");
                        return 1;
                    }
                    else
                    {
                        printf("Invalid Input! Try Again!\n");   
                    }
                }
            }
        }
        else
        {
            printf("\nInvalid Credentials.\n");
        }
    }
    return 0;
}

char* AlphabetValidation(char InformationType[])
{   
    char* ReturnInput = malloc(100);
    char InputUserLetter[100];

    bool IsAlphabetic;
    do
    {
        IsAlphabetic = false;

        printf("%s", InformationType);
        fgets(InputUserLetter, sizeof(InputUserLetter), stdin);
        InputUserLetter[strlen(InputUserLetter) - 1] = '\0';
        
        for(int CheckLetter = 0; CheckLetter < strlen(InputUserLetter); CheckLetter++)
        {
            if(!isalpha(InputUserLetter[CheckLetter]) && !isspace(InputUserLetter[CheckLetter]))
            {
                printf("Please enter only alphabetical characters and spaces. \n");
                IsAlphabetic = true;
                break;
            }
        }
    } while (IsAlphabetic);

    ReturnInput = InputUserLetter;
    return ReturnInput;
}

char* StuFullNameConcat(char LastName[], char FirstName[], char Middle[])
{
    char* ReturnConcat = malloc(100);
    char FullName[100]; 
    strcpy(FullName, LastName);
    strcat(FullName, ", ");
    strcat(FullName, FirstName);
    strcat(FullName, " ");
    strcat(FullName, Middle);
    
    ReturnConcat = FullName;
    return ReturnConcat;
}

char* DigitValidation(char Number[])
{
    char* ReturnInput = malloc(100);
    char InputUserNumber[100];
    int StrToInt;

    bool IsNumber;
    do
    {
        IsNumber = false;
        printf("\nGrade range between 50 - 100.\n");
        printf("%s", Number);
        fgets(InputUserNumber, sizeof(InputUserNumber), stdin);
        InputUserNumber[strlen(InputUserNumber) - 1] = '\0';

        for(int CheckNumber = 0; CheckNumber < strlen(InputUserNumber); CheckNumber++)
        {
            if(!isdigit(InputUserNumber[CheckNumber]))
            {
                printf("Please enter only digit(s).\n");
                IsNumber = true;
                break;
            }
        }
    } while (IsNumber);

    StrToInt = atoi(InputUserNumber);
    if(StrToInt >= 50 && StrToInt <= 100)
    {
        ReturnInput = InputUserNumber;
        return ReturnInput;
    }
    else
    {
        printf("\nIncorrect grade input, Correct range (50 - 100)\n");
        DigitValidation(Number);
    }
}