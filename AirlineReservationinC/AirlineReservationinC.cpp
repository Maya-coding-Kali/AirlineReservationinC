// AirlineReservationinC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include<stdio.h>
void Reserve();
void Cancel();
void  PrintSeats();
void printMenu();
int bizCol = 4, col = 10, c, row = 30, bizRow = 5, rowseat, colseat, Bizrowseat, Bizcolseat;
int choice, input;
char peasentLastName[300];
char peasentFirstName[300];

char bizFirstName[20], bizlastName[20];
char peasentarr[300];
char Bizaarr[20];
int index = 0;
int Bizindex = 0, pFirstNameIndex = 0, BFirstNameIndex = 0;
int main()
{
    for (index; index < 300; index++)
    {
        peasentarr[index] =  'E' ;
    }
    for (Bizindex = 0; Bizindex < 20; Bizindex++)
    {
        Bizaarr[Bizindex] = 'E';
    }
    for (pFirstNameIndex = 0; pFirstNameIndex < 300; pFirstNameIndex++)
    {
        peasentFirstName[pFirstNameIndex] = ' ';
    }
    for (BFirstNameIndex = 0; BFirstNameIndex < 20; BFirstNameIndex++)
    {
        bizFirstName[BFirstNameIndex] = ' ';
    }
     
    while (true)
    {
        printMenu();
       
       

    }
}
void printMenu()
{
    printf("1. Reserve a seat\n");
    printf("2. Cancel a reservation\n");
    printf("3. Report all seat data\n");
    printf("4. Exit\n");
    scanf_s("%i", &input);
    if (input == 1)
    {


        Reserve();

    }

    else if (input == 2)

    {
        Cancel();
    }
    
    else if (input == 3)
    {

        PrintSeats();
    }
    else if (input == 4)
    {

        exit(0);
    }


    
}
//For Map



// For Seats
void  PrintSeats()
{
    int Select;
    printf("For Business class map press 1\n");
    printf("For Peasent class map press 2\n");
    scanf_s("%i", &Select);
    
    if (Select == 1)
    {


        for (int Bizindexnow = 0, BFirstNameIndex = 0; Bizindexnow < 20 && BFirstNameIndex <20 ; Bizindexnow++, BFirstNameIndex++)
        {


            if (Bizindexnow == 3 || Bizindexnow == 7 || Bizindexnow == 11 || Bizindexnow == 15
                || Bizindexnow == 19)
            {
                printf("| %c %c|\n", Bizaarr[Bizindexnow], bizFirstName[BFirstNameIndex]);
            }

            else
            {
                printf("| %c %c", Bizaarr[Bizindexnow], bizFirstName[BFirstNameIndex]);
            }


        }

    }
    else if (Select == 2)
    {
        for (int indexnow = 0, pFirstNameIndex = 0; indexnow < 300 && pFirstNameIndex < 300; indexnow++, pFirstNameIndex++)
        {
           
       
            if ( indexnow == 9 || indexnow == 19 || indexnow == 29 || indexnow == 39 
                || indexnow == 49 || indexnow == 59 || indexnow == 69 || indexnow == 79 ||
                indexnow == 89 || indexnow == 99 || indexnow == 109 || indexnow == 119 ||
                indexnow == 129 || indexnow == 139 || indexnow == 149 || indexnow == 159 || indexnow == 169 || indexnow == 179||
                indexnow == 189 || indexnow == 199 || indexnow == 209 || indexnow == 219 || indexnow == 229 || indexnow == 239||
                indexnow == 249 || indexnow == 259 || indexnow == 269 || indexnow == 279 || indexnow == 289 || indexnow == 299)
            {
                printf("| %c %c|\n", peasentarr[indexnow], peasentFirstName[pFirstNameIndex]);
            }
            
            else
            {
                printf("| %c %c ", peasentarr[indexnow], peasentFirstName[pFirstNameIndex]);
            }
           
            
        }
    
          

        
    }
}

// Reserve Function
void Reserve()
{
    char nameSave ;
    printf("What kind of class would you like to take?\n");
    printf("For Peasent class press 1\n");
    printf("For Business class press 2\n");

    scanf_s("%i", &choice);
    if (choice == 1)
    {
       
        
        printf("Please Select the row you would like to have\n");
        scanf_s("%i", &rowseat);
        printf("Please Select the Column you would like to have\n");
        scanf_s("%i", &colseat);
        printf("Please Enter your first inital\n");
        scanf_s(" %c", &nameSave);
        int index = (rowseat - 1) * 10 + (colseat - 1);
        int pFirstNameIndex = (rowseat - 1) * 10 + (colseat - 1);


            if (peasentarr[index] == 'E' )
            {
                peasentarr[index] = 'X';
                peasentFirstName[pFirstNameIndex] = nameSave;
            }
            else
            {
                printf("seat taken\n");
            }
           
       
        
    }
    else if (choice == 2)
    {
       
        char biznameSave ;
        printf("Please Select the row you would like to have\n");
        scanf_s("%i", &Bizrowseat);
        printf("Please Select the Column you would like to have\n");
        scanf_s("%i", &Bizcolseat);
        printf("Please Enter your first inital\n");
        scanf_s(" %c", &biznameSave);
        int Bizindex = (Bizrowseat - 1) * 4 + (Bizcolseat - 1);
        int BizFirstNameIndex = (Bizrowseat - 1) * 4 + (Bizcolseat - 1);


        if (Bizaarr[Bizindex] == 'E')
        {
            Bizaarr[Bizindex] = 'X';
            bizFirstName[BizFirstNameIndex] = biznameSave;
        }
        else
        {
            printf("seat taken\n");
        }
    }
    else
    {
        printf("Invalid input\n");
    }
 
}
void Cancel()
{
    printf("What kind of class would you like to Cancel?\n");
    printf("For Peasent class press 1\n");
    printf("For Business class press 2\n");
    scanf_s("%i", &choice);
    if (choice == 1)
    {
        printf("Please Select the row you would like to Cancel\n");
        scanf_s("%i", &rowseat);
        printf("Please Select the Column you would like to Cancel\n");
        scanf_s("%i", &colseat);
        int index = (rowseat - 1) * 10 + (colseat - 1);
        int pFirstNameIndex = (rowseat - 1) * 10 + (colseat - 1);


        if (peasentarr[index] == 'X')
        {
            peasentarr[index] = 'E';
            peasentFirstName[pFirstNameIndex] = 'c';
        }
        else
        {
            printf("Seat was already empty\n");
        }
    }
    else if (choice == 2)
    {
        char biznameSave;
        printf("Please Select the row you would like to Cancel\n");
        scanf_s("%i", &Bizrowseat);
        printf("Please Select the Column you would like to Cancel\n");
        scanf_s("%i", &Bizcolseat);
        printf("Please Enter your first inital\n");
        scanf_s(" %c", &biznameSave);
        int Bizindex = (Bizrowseat - 1) * 4 + (Bizcolseat - 1);
        int BizFirstNameIndex = (Bizrowseat - 1) * 4 + (Bizcolseat - 1);
        if (Bizaarr[Bizindex] == 'X')
        {
            Bizaarr[Bizindex] = 'E';
            bizFirstName[BizFirstNameIndex] = 'c';
        }
        else
        {
            printf("seat taken\n");
        }
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file