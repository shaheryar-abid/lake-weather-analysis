#include <stdio.h>
#include <stdlib.h>
#define MAX 366
#define max 366

char degree = 248; // chacaracter type to input degree symbol

/*PROBLEM 3*/
void date(int day_year) // function to convert the days of the year to days per month
{
    int day_month;

    // if day of the year is within a certain range it determines the month by subtracting certain value
    // January
    if (day_year >= 1 && day_year <= 31)
    {
        day_month = day_year;
        printf("\n January %d, 2020", day_month);
    }
    // February
    if (day_year >= 32 && day_year <= 60)
    {
        day_month = day_year - 31;
        printf("\n February %d, 2020", day_month);
    }
    // March
    if (day_year >= 61 && day_year <= 91)
    {
        day_month = day_year - 60;
        printf("\n March %d, 2020", day_month);
    }
    // April
    if (day_year >= 92 && day_year <= 121)
    {
        day_month = day_year - 91;
        printf("\n April %d, 2020", day_month);
    }
    // May
    if (day_year >= 122 && day_year <= 152)
    {
        day_month = day_year - 121;
        printf("\n May %d, 2020", day_month);
    }
    // June
    if (day_year >= 153 && day_year <= 182)
    {
        day_month = day_year - 152;
        printf("\n June %d, 2020", day_month);
    }
    // July
    if (day_year >= 183 && day_year <= 213)
    {
        day_month = day_year - 182;
        printf("\n July %d, 2020", day_month);
    }
    // August
    if (day_year >= 214 && day_year <= 244)
    {
        day_month = day_year - 213;
        printf("\n August %d, 2020", day_month);
    }
    // September
    if (day_year >= 245 && day_year <= 274)
    {
        day_month = day_year - 244;
        printf("\n September %d, 2020", day_month);
    }
    // October
    if (day_year >= 275 && day_year <= 305)
    {
        day_month = day_year - 274;
        printf("\n October %d, 2020", day_month);
    }
    // November
    if (day_year >= 306 && day_year <= 335)
    {
        day_month = day_year - 305;
        printf("\n November %d, 2020", day_month);
    }
    // December
    if (day_year >= 336 && day_year <= 366)
    {
        day_month = day_year - 335;
        printf("\n December %d, 2020", day_month);
    }
}
// function to find hottest days
void warmestDay(int day[MAX], double sup[MAX], double mich[MAX], double huron[MAX], double erie[MAX], double ont[MAX], double st_clr[MAX])
{
    double hSup, hMich, hHuron, hErie, hOnt, hStClr;
    int s, m, h, e, o, st, dayS[MAX], dayM[MAX], dayH[MAX], dayE[MAX], dayO[MAX], daySt[MAX];

    s = m = h = e = o = st = 0;
    hSup = hMich = hHuron = hErie = hOnt = hStClr = 0;

    for (int i = 0; i < MAX; i++) // scans through arrays to determine warmest temps
    {
        // compares data to find largest temps
        if (sup[i] > hSup)
        {
            hSup = sup[i];
        }
        if (mich[i] > hMich)
        {
            hMich = mich[i];
        }
        if (huron[i] > hHuron)
        {
            hHuron = huron[i];
        }
        if (erie[i] > hErie)
        {
            hErie = erie[i];
        }
        if (ont[i] > hOnt)
        {
            hOnt = ont[i];
        }
        if (st_clr[i] > hStClr)
        {
            hStClr = st_clr[i];
        }
    }
    for (int i = 0; i < MAX; i++) // scans through arrays to determine every index that equals the largest temp
    {
        // if warmest temp is found, store the day of the year in an array
        if (sup[i] == hSup)
        {
            dayS[s] = day[i];
            s++;
        }
        if (mich[i] == hMich)
        {
            dayM[m] = day[i];
            m++;
        }
        if (huron[i] == hHuron)
        {
            dayH[h] = day[i];
            h++;
        }
        if (erie[i] == hErie)
        {
            dayE[e] = day[i];
            e++;
        }
        if (ont[i] == hOnt)
        {
            dayO[o] = day[i];
            o++;
        }
        if (st_clr[i] == hStClr)
        {
            daySt[st] = day[i];
            st++;
        }
    }

    // display temperature and dates
    // read through each day variable to determine every date with the same value
    printf("\n\nLake Superior: Temperature:%.2lf%cC Dates:", hSup, degree);
    for (int i = 0; i < s; i++)
    {
        date(dayS[i]);
    }
    printf("\nLake Michigan: Temperature:%.2lf%cC Dates:", hMich, degree);
    for (int i = 0; i < m; i++)
    {
        date(dayM[i]);
    }
    printf("\nLake Huron: Temperature:%.2lf%cC Dates:", hHuron, degree);
    for (int i = 0; i < h; i++)
    {
        date(dayH[i]);
    }
    printf("\nLake Erie: Temperature:%.2lf%cC Dates:", hErie, degree);
    for (int i = 0; i < e; i++)
    {
        date(dayE[i]);
    }
    printf("\nLake Ontario: Temperature:%.2lf%cC Dates:", hOnt, degree);
    for (int i = 0; i < o; i++)
    {
        date(dayO[i]);
    }
    printf("\nLake St. Clair: Temperature:%.2lf%cC Dates:", hStClr, degree);
    for (int i = 0; i < st; i++)
    {
        date(daySt[i]);
    }
}
// function to find coldest temperatures
void coldestDay(int day[MAX], double sup[MAX], double mich[MAX], double huron[MAX], double erie[MAX], double ont[MAX], double st_clr[MAX])
{
    double cSup, cMich, cHuron, cErie, cOnt, cStClr;
    int s, m, h, e, o, st, dayS[MAX], dayM[MAX], dayH[MAX], dayE[MAX], dayO[MAX], daySt[MAX];
    s = m = h = e = o = st = 0;
    cSup = cMich = cHuron = cErie = cOnt = cStClr = 100;

    for (int i = 0; i < MAX; i++) // scans through arrays to determine warmest temps
    {
        // compares data to find largest temps
        if (sup[i] < cSup)
        {
            cSup = sup[i];
        }
        if (mich[i] < cMich)
        {
            cMich = mich[i];
        }
        if (huron[i] < cHuron)
        {
            cHuron = huron[i];
        }
        if (erie[i] < cErie)
        {
            cErie = erie[i];
        }
        if (ont[i] < cOnt)
        {
            cOnt = ont[i];
        }
        if (st_clr[i] < cStClr)
        {
            cStClr = st_clr[i];
        }
    }
    for (int i = 0; i < MAX; i++) // scans through arrays to determine every index that equals the smallest temp
    {
        // if coldest temp is found, store the day of the year in an array
        if (sup[i] == cSup)
        {
            dayS[s] = day[i];
            s++;
        }
        if (mich[i] == cMich)
        {
            dayM[m] = day[i];
            m++;
        }
        if (huron[i] == cHuron)
        {
            dayH[h] = day[i];
            h++;
        }
        if (erie[i] == cErie)
        {
            dayE[e] = day[i];
            e++;
        }
        if (ont[i] == cOnt)
        {
            dayO[o] = day[i];
            o++;
        }
        if (st_clr[i] == cStClr)
        {
            daySt[st] = day[i];
            st++;
        }
    }
    // display temperature and dates
    // read through each day variable to determine every date with the same value
    printf("\n\nLake Superior: Temperature: %.2lf%cC Dates:", cSup, degree);
    for (int i = 0; i < s; i++)
    {
        date(dayS[i]);
    }
    printf("\nLake Michigan: Temperature: %.2lf%cC Dates:", cMich, degree);
    for (int i = 0; i < m; i++)
    {
        date(dayM[i]);
    }
    printf("\nLake Huron: Temperature: %.2lf%cC Dates:", cHuron, degree);
    for (int i = 0; i < h; i++)
    {
        date(dayH[i]);
    }
    printf("\nLake Erie: Temperature: %.2lf%cC Dates:", cErie, degree);
    for (int i = 0; i < e; i++)
    {
        date(dayE[i]);
    }
    printf("\nLake Ontario: Temperature: %.2lf%cC Dates:", cOnt, degree);
    for (int i = 0; i < o; i++)
    {
        date(dayO[i]);
    }
    printf("\nLake St. Clair: Temperature: %.2lf%cC Dates:", cStClr, degree);
    for (int i = 0; i < st; i++)
    {
        date(daySt[i]);
    }
}

/*PROBLEM 7*/
// function to find how many days it is possible to swim
void daysToSwim(double sup[MAX], double mich[MAX], double huron[MAX], double erie[MAX], double ont[MAX], double st_clr[MAX])
{
    int numDaysSup, numDaysMich, numDaysHuron, numDaysErie, numDaysOnt, numDaysStClr;
    numDaysSup = numDaysMich = numDaysHuron = numDaysErie = numDaysOnt = numDaysStClr = 0;
    for (int i = 0; i < MAX; i++) // reads through array to determine comfortable days
    {
        // if temp is greater than 20, than add 1 to the number of days
        if (sup[i] >= 20)
        {
            numDaysSup++;
        }
        if (mich[i] >= 20)
        {
            numDaysMich++;
        }
        if (huron[i] >= 20)
        {
            numDaysHuron++;
        }
        if (erie[i] >= 20)
        {
            numDaysErie++;
        }
        if (ont[i] >= 20)
        {
            numDaysOnt++;
        }
        if (st_clr[i] >= 20)
        {
            numDaysStClr++;
        }
    }
    // display number of days it is possible to swim
    printf("\nIn 2020, there are %d days where it is possible swim comfortably in Lake Superior.", numDaysSup);
    printf("\nIn 2020, there are %d days where it is possible swim comfortably in Lake Michigan.", numDaysMich);
    printf("\nIn 2020, there are %d days where it is possible swim comfortably in Lake Huron.", numDaysHuron);
    printf("\nIn 2020, there are %d days where it is possible swim comfortably in Lake Erie.", numDaysErie);
    printf("\nIn 2020, there are %d days where it is possible swim comfortably in Lake Ontario.", numDaysOnt);
    printf("\nIn 2020, there are %d days where it is possible swim comfortably in Lake St.Clair.", numDaysStClr);
}

/*PROBLEM 8*/
// function to find the number of days when the lakes are frozen
void frozen(double sup[MAX], double mich[MAX], double huron[MAX], double erie[MAX], double ont[MAX], double st_clr[MAX])
{
    int numDaysSup, numDaysMich, numDaysHuron, numDaysErie, numDaysOnt, numDaysStClr;
    numDaysSup = numDaysMich = numDaysHuron = numDaysErie = numDaysOnt = numDaysStClr = 0;
    for (int i = 0; i < MAX; i++) // reads through array to determine frozen days
    {
        // if temp is less than 0 degrees, than add 1 to the number of days
        if (sup[i] < 0)
        {
            numDaysSup++;
        }
        if (mich[i] < 0)
        {
            numDaysMich++;
        }
        if (huron[i] < 0)
        {
            numDaysHuron++;
        }
        if (erie[i] < 0)
        {
            numDaysErie++;
        }
        if (ont[i] < 0)
        {
            numDaysOnt++;
        }
        if (st_clr[i] < 0)
        {
            numDaysStClr++;
        }
    }

    // display the number of days the lake is frozen
    printf("\nIn 2020, there are %d days when Lake Superior is frozen.", numDaysSup);
    printf("\nIn 2020, there are %d days when Lake Michigan is frozen.", numDaysMich);
    printf("\nIn 2020, there are %d days when Lake Huron is frozen.", numDaysHuron);
    printf("\nIn 2020, there are %d days when Lake Erie is frozen.", numDaysErie);
    printf("\nIn 2020, there are %d days when Lake Ontario is frozen.", numDaysOnt);
    printf("\nIn 2020, there are %d days when Lake St.Clair is frozen.", numDaysStClr);
}

// functions for question 4 to 6

//////////////////////////////////////////FUNCTIONS FOR QUESTION 4-6//////////////////////////////////////////////////////////////////////////////////
float call_high(int n1, float n2[]) // function to sort numbers from hight to low and then return high    n1 is number of data in array and n2 is array
{
    float temp_array[n1];
    float temp, low, high;
    int a, b, i, x, y, z;
    for (i = 0; i < n1; i++) /// copy array to temporary array
    {
        temp_array[i] = n2[i];
    }
    for (a = 0; a < n1; ++a)
    {
        for (b = 0; b < n1; ++b)
        {
            if (temp_array[a] > temp_array[b])
            {
                temp = temp_array[a];          // put higher number in temporary value
                temp_array[a] = temp_array[b]; // move make replace number on the left with number on the right
                temp_array[b] = temp;          // replace number on the right with temporary value
            }
        }
    }
    high = temp_array[0];
    //  for (x = 0; x < max; x++){          //print out array use for test only
    //     printf("%.2lf\n", temp_array[x]);
    // }
    // printf("\n");
    return (high);
}

float call_low(int n1, float n2[]) // function to sort numbers from hight to low and then return high    n1 is number of data in array and n2 is array
{
    float temp_array[n1];
    float temp, low, high;
    int a, b, i, x, y, z;
    for (i = 0; i < n1; i++) /// copy array to temporary array
    {
        temp_array[i] = n2[i];
    }
    for (a = 0; a < n1; ++a)
    {
        for (b = 0; b < n1; ++b)
        {
            if (temp_array[a] > temp_array[b])
            {
                temp = temp_array[a];          // put higher number in temporary value
                temp_array[a] = temp_array[b]; // move make replace number on the left with number on the right
                temp_array[b] = temp;          // replace number on the right with temporary value
            }
        }
    }
    //  for (x = 0; x < max; x++){          //print out array use for test only
    //     printf("%.2lf\n", temp_array[x]);
    // }
    // printf("\n");
    low = temp_array[n1 - 1]; // last number in array and -1 becasue array start at 0
    return (low);
}

int *locate(float n1[], float n2) // find the day of temp ||||||array,temp,day for temp <-- will keep update for each loop
{
    int x, y = 0, z, a, b = 0;
    static int day[max];
    float temp_array[max];

    for (a = 0; a < max; a++) /// copy array to temporary array
    {
        day[a] = 0;
    }
    for (z = 0; z < max; z++) /// copy array to temporary array
    {
        temp_array[z] = n1[z];
    }

    for (x = 0; x < max; x++)
    {
        if (temp_array[x] == n2)
        {
            day[y + 1] = x + 1;  // put day into array and +1 is to increase it to real day because the array is start from 0
            day[0] = day[0] + 1; // first number in array is the count of day that dupucate
            temp_array[x] = 0;   // make that number in array equal to zero so it doesnt get repeat in next loop
            y++;                 // move to a next element in day
        }
    }
    return day;
}

float hottest_lake(float n1, float n2, float n3, float n4, float n5, float n6)
{
    float a[6];

    a[0] = n1; // put highest temp of each lake into array
    a[1] = n2;
    a[2] = n3;
    a[3] = n4;
    a[4] = n5;
    a[5] = n6;

    float hot_lake = call_high(6, a);

    return hot_lake; /// hotest_lake
}

float coldest_lake(float n1, float n2, float n3, float n4, float n5, float n6)
{
    float a[6];

    a[0] = n1; // put low temp of each lake into array
    a[1] = n2;
    a[2] = n3;
    a[3] = n4;
    a[4] = n5;
    a[5] = n6;

    float cold_lake = call_low(6, a);

    return cold_lake; /// coldest_lake
}

int print_out_hottest_lake(float highest_temp_sup, float highest_temp_mich, float highest_temp_huron, float highest_temp_erie, float highest_temp_ont, float highest_temp_st_clr,
                           int real_day_highest_temp_sup[], int real_day_highest_temp_mich[], int real_day_highest_temp_huron[], int real_day_highest_temp_erie[], int real_day_highest_temp_ont[],
                           int real_day_highest_temp_st_clr[], float hotlake_of_the_year)
{
    int x, y, z;

    if (hotlake_of_the_year == highest_temp_sup)
    {
        printf("The hottest lake of whole year is sup. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_sup[0]; x++)
        {
            int day, month;
            day = (real_day_highest_temp_sup[x + 1] % 30) + 1;

            if (day == 0)
            {
                day = 1;
            }

            month = (real_day_highest_temp_sup[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }

            if (real_day_highest_temp_sup[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }

    else if (hotlake_of_the_year == highest_temp_mich)
    {
        printf("The hottest lake of whole year is mich. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_mich[0]; x++)
        {
            int day, month;

            day = (real_day_highest_temp_mich[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }

            month = (real_day_highest_temp_mich[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_highest_temp_mich[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (hotlake_of_the_year == highest_temp_huron)
    {
        printf("The hottest lake of whole year is huron. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_huron[0]; x++)
        {
            int day, month;
            day = (real_day_highest_temp_huron[x + 1] % 30) + 1;

            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_highest_temp_huron[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_highest_temp_huron[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (hotlake_of_the_year == highest_temp_erie)
    {
        printf("The hottest lake of whole year is erie. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_erie[0]; x++)
        {
            int day, month;
            day = (real_day_highest_temp_erie[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_highest_temp_erie[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (hotlake_of_the_year == highest_temp_ont)
    {
        printf("The hottest lake of whole year is ont. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_ont[0]; x++)
        {
            int day, month;
            day = (real_day_highest_temp_ont[x + 1] % 30) + 1;

            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_highest_temp_ont[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (hotlake_of_the_year == highest_temp_erie)
    {
        printf("The hottest lake of whole year is erie. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_erie[0]; x++)
        {
            int day, month;
            day = (real_day_highest_temp_erie[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_highest_temp_erie[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_highest_temp_erie[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (hotlake_of_the_year == highest_temp_st_clr)
    {
        printf("The hottest lake of whole year is st_clr. The hottest temputure of the lake was %.2lf and the date for hottest temp: ", hotlake_of_the_year);
        for (x = 0; x < real_day_highest_temp_st_clr[0]; x++)
        {
            int day, month;
            day = (real_day_highest_temp_st_clr[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_highest_temp_st_clr[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_highest_temp_st_clr[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
}

int print_out_coldest_lake(float lowest_temp_sup, float lowest_temp_mich, float lowest_temp_huron, float lowest_temp_erie, float lowest_temp_ont, float lowest_temp_st_clr,
                           int real_day_lowest_temp_sup[], int real_day_lowest_temp_mich[], int real_day_lowest_temp_huron[], int real_day_lowest_temp_erie[], int real_day_lowest_temp_ont[], int real_day_lowest_temp_st_clr[], float coldlake_of_the_year)
{
    int x, y, z;
    if (coldlake_of_the_year == lowest_temp_sup)
    {
        printf("The coldest lake of whole year is sup. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_sup[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_sup[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_sup[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_sup[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (coldlake_of_the_year == lowest_temp_mich)
    {
        printf("The coldest lake of whole year is mich. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_mich[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_mich[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_mich[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_mich[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (coldlake_of_the_year == lowest_temp_huron)
    {
        printf("The coldest lake of whole year is huron. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_huron[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_huron[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_huron[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_huron[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (coldlake_of_the_year == lowest_temp_erie)
    {
        printf("The coldest lake of whole year is erie. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_erie[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_erie[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_erie[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_erie[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (coldlake_of_the_year == lowest_temp_ont)
    {
        printf("The coldest lake of whole year is ont. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_ont[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_ont[x + 1] % 30) + 1;

            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_ont[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_ont[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (coldlake_of_the_year == lowest_temp_erie)
    {
        printf("The coldest lake of whole year is erie. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_erie[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_erie[x + 1] % 30) + 1;
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_erie[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_erie[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
    else if (coldlake_of_the_year == lowest_temp_st_clr)
    {
        printf("The coldest lake of whole year is st_clr. The coldest temputure of the lake was %.2lf and the date for coldest temp: ", coldlake_of_the_year);
        for (x = 0; x < real_day_lowest_temp_st_clr[0]; x++)
        {
            int day, month;
            day = (real_day_lowest_temp_st_clr[x + 1] % 30);
            if (day == 0)
            {
                day = 1;
            }
            month = (real_day_lowest_temp_st_clr[x + 1] / 30) + 1;
            if (month == 0)
            {
                month = 1;
            }
            else if (month > 12)
            {
                month = 1;
            }
            if (real_day_lowest_temp_st_clr[x + 1] % 30 == 0)
            {
                day = 30;
                month = month - 1;
            }
            printf("%d/%d, ", day, month);
        }
        printf("\n");
    }
}

float lake_average(float n1[], int date1, int date2) // array of 6 lakes and start date and end deat for average calculation
{

    int total_day = date2 - date1;
    float average = 0;

    for (int x = date1 - 1; x < date2; x++) // -1 at date1 becasue array start counting at 0 not 1
    {
        average = average + n1[x];
    }
    average = average / total_day;
    return (average);
}

float call_high_and_sort_name(int n1, float n2[]) // function to sort numbers from hight to low and then return high    n1 is number of data in array and n2 is array
{
    float temp_array[n1];
    float temp, low, high;
    int a, b, i, x, y, z;
    for (i = 0; i < n1; i++)
    { /// copy array to temporary array
        temp_array[i] = n2[i];
    }
    for (a = 0; a < n1; ++a)
    {
        for (b = 0; b < n1; ++b)
        {
            if (temp_array[a] > temp_array[b])
            {
                temp = temp_array[a];          // put higher number in temporary value
                temp_array[a] = temp_array[b]; // move make replace number on the left with number on the right
                temp_array[b] = temp;          // replace number on the right with temporary value
            }
        }
    }

    printf("The order of the lakes from warmest to coldest in summer: ");
    for (x = 0; x < 6; x++)
    {
        if (temp_array[x] == n2[0])
        {
            printf("sup ");
        }
        else if (temp_array[x] == n2[1])
        {
            printf("mich ");
        }
        else if (temp_array[x] == n2[2])
        {
            printf("huron ");
        }
        else if (temp_array[x] == n2[3])
        {
            printf("erie ");
        }
        else if (temp_array[x] == n2[4])
        {
            printf("ont ");
        }
        else if (temp_array[x] == n2[5])
        {
            printf("st_clr ");
        }
    }
    printf("\n");
    //  for (x = 0; x < max; x++){          //print out array use for test only
    //     printf("%.2lf\n", temp_array[x]);
    // }
    // printf("\n");
}

float call_high_and_sort_name_winter(int n1, float n2[])
{ // function to sort numbers from hight to low and then return high    n1 is number of data in array and n2 is array
    float temp_array[n1];
    float temp, low, high;
    int a, b, i, x, y, z;
    for (i = 0; i < n1; i++)
    { /// copy array to temporary array
        temp_array[i] = n2[i];
    }
    for (a = 0; a < n1; ++a)
    {
        for (b = 0; b < n1; ++b)
        {
            if (temp_array[a] > temp_array[b])
            {
                temp = temp_array[a];          // put higher number in temporary value
                temp_array[a] = temp_array[b]; // move make replace number on the left with number on the right
                temp_array[b] = temp;          // replace number on the right with temporary value
            }
        }
    }

    printf("The order of the lakes from warmest to coldest in winter: ");

    for (x = 0; x < 6; x++)
    {

        if (temp_array[x] == n2[0])
        {
            printf("sup ");
        }

        else if (temp_array[x] == n2[1])
        {
            printf("mich ");
        }

        else if (temp_array[x] == n2[2])
        {
            printf("huron ");
        }

        else if (temp_array[x] == n2[3])
        {
            printf("erie ");
        }

        else if (temp_array[x] == n2[4])
        {
            printf("ont ");
        }

        else if (temp_array[x] == n2[5])
        {
            printf("st_clr ");
        }
    }

    printf("\n");

    //  for (x = 0; x < max; x++){          //print out array use for test only
    //     printf("%.2lf\n", temp_array[x]);
    // }
    // printf("\n");
}

float lake_average_for_2parts(float n1[], int date1, int date2, int date3, int date4) // array of 6 lakes and start date and end date for average calculation this one support 2 start and end dates
{

    int total_day = (date2 - date1) + (date4 - date3);
    float average = 0;

    for (int x = date1 - 1; x < date2; x++) // -1 at date1 becasue array start counting at 0 not 1 finding first part
    {
        average = average + n1[x];
    }
    for (int x = date3 - 1; x < date4; x++) // -1 at date1 becasue array start counting at 0 not 1 finding second part
    {
        average = average + n1[x];
    }
    average = average / total_day;
    return (average);
}

////////////////////////////// main ///////////////////////////////////////////

int main(void)
{

    FILE *file;

    double sup[MAX], mich[MAX], huron[MAX], erie[MAX], ont[MAX], st_clr[MAX];
    int year, day[MAX];

    file = fopen("temp.txt", "r");

    while (!feof(file))
    {
        for (int i = 0; i < MAX; i++)
        {
            fscanf(file, "%d %d %lf %lf %lf %lf %lf %lf", &year, &day[i], &sup[i], &mich[i], &huron[i], &erie[i], &ont[i], &st_clr[i]);
        }
    }

    ////////////////////////////DATA FOR QUESTION 9 2019 temps///////////////////////////////
    FILE *file2;

    double sup2[MAX], mich2[MAX], huron2[MAX], erie2[MAX], ont2[MAX], st_clr2[MAX];
    int year2, day2;

    file2 = fopen("temp2019.txt", "r");

    while (!feof(file2))
    {
        for (int i = 0; i < MAX; i++)
        {
            fscanf(file2, "%d %d %lf %lf %lf %lf %lf %lf", &year2, &day2, &sup2[i], &mich2[i], &huron2[i], &erie2[i], &ont2[i], &st_clr2[i]);
        }
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////

    /////////////////////////////////QUESTION 1////////////////////////////////////////////////////
    printf("**Question 1**\n");
    // yearly avg for sup
    double sup_avg;
    double sup_total = 0;
    // for loop that adds up all the temperatures and puts it into one variable
    for (int i = 0; i < MAX; i++)
    {
        sup_total = (sup_total + sup[i]);
    }
    sup_avg = (sup_total) / 366;

    printf("\n");
    printf("The yearly average temperature in 2020 for Lake Superior is %7.2lf degrees.\n", sup_avg);

    // yearly avg for mich
    double mich_avg;
    double mich_total = 0;
    // for loop that adds up all the temperatures and puts it into one variable
    for (int i = 0; i < MAX; i++)
    {
        mich_total = (mich_total + mich[i]);
    }
    mich_avg = (mich_total) / 366;

    printf("\n");
    printf("The yearly average temperature in 2020 for Lake Michigan is %7.2lf degrees.\n", mich_avg);

    // yearly avg for huron
    double huron_avg;
    double huron_total = 0;
    // for loop that adds up all the temperatures and puts it into one variable
    for (int i = 0; i < MAX; i++)
    {
        huron_total = (huron_total + huron[i]);
    }
    huron_avg = (huron_total) / 366;

    printf("\n");
    printf("The yearly average temperature in 2020 for Lake Huron is %7.2lf degrees.\n", huron_avg);

    // yearly avg for Erie
    double erie_avg;
    double erie_total = 0;
    // for loop that adds up all the temperatures and puts it into one variable
    for (int i = 0; i < MAX; i++)
    {
        erie_total = (erie_total + erie[i]);
    }

    erie_avg = (erie_total) / 366;

    printf("\n");
    printf("The yearly average temperature in 2020 for Lake Erie is %7.2lf degrees.\n", erie_avg);

    // yearly avg for Ontario
    double ont_avg;
    double ont_total = 0;
    // for loop that adds up all the temperatures and puts it into one variable
    for (int i = 0; i < MAX; i++)
    {
        ont_total = (ont_total + ont[i]);
    }
    ont_avg = (ont_total) / 366;

    printf("\n");
    printf("The yearly average temperature in 2020 for Lake Ontario is %7.2lf degrees.\n", ont_avg);

    // yearly avg for st_clr
    double st_clr_avg;
    double st_clr_total = 0;
    // for loop that adds up all the temperatures and puts it into one variable
    for (int i = 0; i < MAX; i++)
    {
        st_clr_total = (st_clr_total + st_clr[i]);
    }
    st_clr_avg = (st_clr_total) / 366;

    printf("\n");
    printf("The yearly average temperature in 2020 for Lake St. Clair is %7.2lf degrees.\n", st_clr_avg);

    // the average of all the lakes combined(using each yearly avg)
    double combined_avg;
    // combines all avgs and devides by 6 to calc new avg
    combined_avg = (st_clr_avg + ont_avg + erie_avg + mich_avg + huron_avg + sup_avg) / 6;

    // prints results
    printf("\nThe yearly average for all six lakes put together is %7.2lf degrees.\n", combined_avg);

    fclose(file);

    ////////////////////////////////////////////Question 2//////////////////////////////////////////////////////
    printf("\n");
    printf("\n**Question 2**\n\n");
    // Finding the Warmest Value

    if (st_clr_avg > ont_avg && st_clr_avg > erie_avg && st_clr_avg > mich_avg && st_clr_avg > huron_avg && st_clr_avg > sup_avg)
    {
        printf("Lake St.Claire has the Warmest yearly average temperature\n");
        // Next comparison
    }
    if (ont_avg > st_clr_avg && ont_avg > erie_avg && ont_avg > mich_avg && ont_avg > huron_avg && ont_avg > sup_avg)
    {
        printf("Lake Ontario has the Warmest yearly average temperature\n");
    }
    // Next comparison
    if (erie_avg > st_clr_avg && erie_avg > ont_avg && erie_avg > mich_avg && erie_avg > huron_avg && erie_avg > sup_avg)
    {
        printf("Lake Erie has the Warmest yearly average temperature\n");
    }
    // Next comparison
    if (mich_avg > st_clr_avg && mich_avg > ont_avg && mich_avg > erie_avg && mich_avg > huron_avg && mich_avg > sup_avg)
    {
        printf("Lake Michigan has the Warmest yearly average temperature\n");
    }
    // Next comparison
    if (huron_avg > st_clr_avg && huron_avg > ont_avg && huron_avg > mich_avg && huron_avg > erie_avg && huron_avg > sup_avg)
    {
        printf("Lake Huron has the Warmest yearly average temperature\n");
    }
    // Next comparison
    if (sup_avg > st_clr_avg && sup_avg > ont_avg && sup_avg > mich_avg && sup_avg > huron_avg && sup_avg > erie_avg)
    {
        printf("Lake Superior has the Warmest yearly average temperature\n");
    }
    printf("\n");

    //////Finding the lowest Value/////

    if (st_clr_avg < ont_avg && st_clr_avg < erie_avg && st_clr_avg < mich_avg && st_clr_avg < huron_avg && st_clr_avg < sup_avg)
    {
        printf("Lake St.Claire has the Coldest yearly average temperature");
        // Next comparison
    }
    if (ont_avg < st_clr_avg && ont_avg < erie_avg && ont_avg < mich_avg && ont_avg < huron_avg && ont_avg < sup_avg)
    {
        printf("Lake Ontario has the Coldest yearly average temperature");
    }
    // Next comparison
    if (erie_avg < st_clr_avg && erie_avg < ont_avg && erie_avg < mich_avg && erie_avg < huron_avg && erie_avg < sup_avg)
    {
        printf("Lake Erie has the Coldest yearly average temperature");
    }
    // Next comparison
    if (mich_avg < st_clr_avg && mich_avg < ont_avg && mich_avg < erie_avg && mich_avg < huron_avg && mich_avg < sup_avg)
    {
        printf("Lake Michigan has the Coldest yearly average temperature");
    }
    // Next comparison
    if (huron_avg < st_clr_avg && huron_avg < ont_avg && huron_avg < mich_avg && huron_avg < erie_avg && huron_avg < sup_avg)
    {
        printf("Lake Huron has the Coldest yearly average temperature");
    }
    // Next comparison
    if (sup_avg < st_clr_avg && sup_avg < ont_avg && sup_avg < mich_avg && sup_avg < huron_avg && sup_avg < erie_avg)
    {
        printf("Lake Superior has the Coldest yearly average temperature");
    }
    printf("\n");

    //////Tetsing if avg temps are above total avg temps (part 2 of q2)///////
    // first comparison
    if (sup_avg > combined_avg)
    {
        printf("\nLake Superior has an average temperature above the total average temperature\n");
    }
    else
    {
        printf("\nLake Superior has an average temperature above the total average temperature\n");
    }
    // Next comparison
    if (st_clr_avg > combined_avg)
    {
        printf("\nLake St. Claire has an average temperature above the total average temperature\n");
    }
    else
    {
        printf("\nLake St. Claire has an average temperature above the total average temperature\n");
    }
    // Next comparison
    if (ont_avg > combined_avg)
    {
        printf("\nLake Ontario has an average temperature above the total average temperature\n");
    }
    else
    {
        printf("\nLake Ontario has an average temperature above the total average temperature\n");
    }
    // Next comparison
    if (mich_avg > combined_avg)
    {
        printf("\nLake Michigan has an average temperature above the total average temperature\n");
    }
    else
    {
        printf("\nLake Michigan has an average temperature above the total average temperature\n");
    }

    // Next comparison
    if (huron_avg > combined_avg)
    {
        printf("\nLake Huron has an average temperature above the total average temperature\n");
    }
    else
    {
        printf("\nLake Huron has an average temperature above the total average temperature\n");
    }
    // Next comparison
    if (erie_avg > combined_avg)
    {
        printf("\nLake Erie has an average temperature above the total average temperature\n");
    }
    else
    {
        printf("\nLake Erie has an average temperature above the total average temperature\n");
    }

    /*Problem 3*/
    printf("\n\n**QUESTION 3**");
    printf("\n\n------THE WARMEST WATER TEMPERATURE OF EACH LAKE------");
    warmestDay(day, sup, mich, huron, erie, ont, st_clr); // call warmest days function
    printf("\n\n------THE COLDEST WATER TEMPERATURE OF EACH LAKE------");
    coldestDay(day, sup, mich, huron, erie, ont, st_clr); // call coldest days function

    /////////////////////////////////Question 4///////////////////////////////////////////////////

    printf("\n\n*Question 4\n");

    int year_nep[max], day_nep[max], day_high_nep[max], day_low_nep[max];
    float sup_nep[max], mich_nep[max], huron_nep[max], erie_nep[max], ont_nep[max], st_clr_nep[max];
    int x, y, z;

    FILE *data;

    data = fopen("temp.txt", "r");

    while (!feof(data))
    {
        for (x = 0; x < max; x++)
        {
            if (!feof(data))
            {

                fscanf(data, "%d %d %f %f %f %f %f %f", &year_nep[x], &day_nep[x], &sup_nep[x], &mich_nep[x], &huron_nep[x], &erie_nep[x], &ont_nep[x], &st_clr_nep[x]);
            }
        }
    }

    // for (y = 0; y < sizeof(day)/sizeof(day[0]); y++)
    // {
    //     printf("%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",year_nep[y],day_nep[y],sup_nep[y],mich_nep[y],huron_nep[y],erie_nep[y],ont_nep[y],st_clr_nep[y]);

    // }

    float highest_temp_sup_nep, highest_temp_mich_nep, highest_temp_huron_nep, highest_temp_erie_nep, highest_temp_ont_nep, highest_temp_st_clr_nep;
    float lowest_temp_sup_nep, lowest_temp_mich_nep, lowest_temp_huron_nep, lowest_temp_erie_nep, lowest_temp_ont_nep, lowest_temp_st_clr_nep;

    highest_temp_sup_nep = call_high(max, sup_nep);
    highest_temp_mich_nep = call_high(max, mich_nep);
    highest_temp_huron_nep = call_high(max, huron_nep);
    highest_temp_erie_nep = call_high(max, erie_nep);
    highest_temp_ont_nep = call_high(max, ont_nep);
    highest_temp_st_clr_nep = call_high(max, st_clr_nep);

    lowest_temp_sup_nep = call_low(max, sup_nep);
    lowest_temp_mich_nep = call_low(max, mich_nep);
    lowest_temp_huron_nep = call_low(max, huron_nep);
    lowest_temp_erie_nep = call_low(max, erie_nep);
    lowest_temp_ont_nep = call_low(max, ont_nep);
    lowest_temp_st_clr_nep = call_low(max, st_clr_nep);

    // printf("highest %.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", highest_temp_sup_nep,highest_temp_mich_nep,highest_temp_huron_nep,highest_temp_erie_nep,highest_temp_ont_nep,highest_temp_st_clr_nep);    // print highest and lowest for testing only
    // printf("lowest %.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", lowest_temp_sup_nep,lowest_temp_mich_nep,lowest_temp_huron_nep,lowest_temp_erie_nep,lowest_temp_ont_nep,lowest_temp_st_clr_nep);

    int *day_nep_higest_sup_nep, *day_nep_higest_mich_nep, *day_nep_higest_huron_nep, *day_nep_higest_erie_nep, *day_nep_higest_ont_nep, *day_nep_higest_st_clr_nep;
    int *day_nep_lowest_sup_nep, *day_nep_lowest_mich_nep, *day_nep_lowest_huron_nep, *day_nep_lowest_erie_nep, *day_nep_lowest_ont_nep, *day_nep_lowest_st_clr_nep;

    day_nep_higest_sup_nep = locate(sup_nep, highest_temp_sup_nep);

    int real_day_nep_highest_temp_sup_nep[max], real_day_nep_highest_temp_mich_nep[max], real_day_nep_highest_temp_huron_nep[max], real_day_nep_highest_temp_erie_nep[max], real_day_nep_highest_temp_ont_nep[max], real_day_nep_highest_temp_st_clr_nep[max];
    int real_day_nep_lowest_temp_sup_nep[max], real_day_nep_lowest_temp_mich_nep[max], real_day_nep_lowest_temp_huron_nep[max], real_day_nep_lowest_temp_erie_nep[max], real_day_nep_lowest_temp_ont_nep[max], real_day_nep_lowest_temp_st_clr_nep[max];

    for (int x_2 = 0; x_2 < *(day_nep_higest_sup_nep + x_2 - x_2); x_2++) /// use loop to put the day_nep of highest temp into an array  note: subtract x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_higest_sup_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_highest_temp_sup_nep[0] = *(day_nep_higest_sup_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicate
        real_day_nep_highest_temp_sup_nep[x_2 + 1] = *(day_nep_higest_sup_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_higest_mich_nep = locate(mich_nep, highest_temp_mich_nep);

    for (int x_2 = 0; x_2 < *(day_nep_higest_mich_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_higest_mich_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_highest_temp_mich_nep[0] = *(day_nep_higest_mich_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicate
        real_day_nep_highest_temp_mich_nep[x_2 + 1] = *(day_nep_higest_mich_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_higest_huron_nep = locate(huron_nep, highest_temp_huron_nep);

    for (int x_2 = 0; x_2 < *(day_nep_higest_huron_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_higest_huron_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_highest_temp_huron_nep[0] = *(day_nep_higest_huron_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_highest_temp_huron_nep[x_2 + 1] = *(day_nep_higest_huron_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_higest_erie_nep = locate(erie_nep, highest_temp_erie_nep);

    for (int x_2 = 0; x_2 < *(day_nep_higest_erie_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_higest_erie_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_highest_temp_erie_nep[0] = *(day_nep_higest_erie_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_highest_temp_erie_nep[x_2 + 1] = *(day_nep_higest_erie_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_higest_ont_nep = locate(ont_nep, highest_temp_ont_nep);

    for (int x_2 = 0; x_2 < *(day_nep_higest_ont_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_higest_ont_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_highest_temp_ont_nep[0] = *(day_nep_higest_ont_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_highest_temp_ont_nep[x_2 + 1] = *(day_nep_higest_ont_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_higest_st_clr_nep = locate(st_clr_nep, highest_temp_st_clr_nep);

    for (int x_2 = 0; x_2 < *(day_nep_higest_st_clr_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_higest_st_clr_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_highest_temp_st_clr_nep[0] = *(day_nep_higest_st_clr_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_highest_temp_st_clr_nep[x_2 + 1] = *(day_nep_higest_st_clr_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_lowest_sup_nep = locate(sup_nep, lowest_temp_sup_nep);

    for (int x_2 = 0; x_2 < *(day_nep_lowest_sup_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_lowest_sup_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_lowest_temp_sup_nep[0] = *(day_nep_lowest_sup_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_lowest_temp_sup_nep[x_2 + 1] = *(day_nep_lowest_sup_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_lowest_mich_nep = locate(mich_nep, lowest_temp_mich_nep);

    for (int x_2 = 0; x_2 < *(day_nep_lowest_mich_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_lowest_mich_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_lowest_temp_mich_nep[0] = *(day_nep_lowest_mich_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_lowest_temp_mich_nep[x_2 + 1] = *(day_nep_lowest_mich_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_lowest_huron_nep = locate(huron_nep, lowest_temp_huron_nep);

    for (int x_2 = 0; x_2 < *(day_nep_lowest_huron_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_lowest_huron_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_lowest_temp_huron_nep[0] = *(day_nep_lowest_huron_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_lowest_temp_huron_nep[x_2 + 1] = *(day_nep_lowest_huron_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_lowest_erie_nep = locate(erie_nep, lowest_temp_erie_nep);

    for (int x_2 = 0; x_2 < *(day_nep_lowest_erie_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_lowest_erie_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_lowest_temp_erie_nep[0] = *(day_nep_lowest_erie_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_lowest_temp_erie_nep[x_2 + 1] = *(day_nep_lowest_erie_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_lowest_ont_nep = locate(ont_nep, lowest_temp_ont_nep);

    for (int x_2 = 0; x_2 < *(day_nep_lowest_ont_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_lowest_ont_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_lowest_temp_ont_nep[0] = *(day_nep_lowest_ont_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_lowest_temp_ont_nep[x_2 + 1] = *(day_nep_lowest_ont_nep + x_2 + 1); // put day_nep into an array
    }

    day_nep_lowest_st_clr_nep = locate(st_clr_nep, lowest_temp_st_clr_nep);
    for (int x_2 = 0; x_2 < *(day_nep_lowest_st_clr_nep + x_2 - x_2); x_2++) /// print array of highes temp day_nep use for testing only  note: subtract - x_2 after adding x_2 fixed the unintensional extra for loop for some reason
    {
        // printf("%d\n", *(day_nep_lowest_st_clr_nep + x_2 + 1)); // +1 becasue the first one is element count
        real_day_nep_lowest_temp_st_clr_nep[0] = *(day_nep_lowest_st_clr_nep + x_2 - x_2);     // the first element in array is the total day_nep that duplicated
        real_day_nep_lowest_temp_st_clr_nep[x_2 + 1] = *(day_nep_lowest_st_clr_nep + x_2 + 1); // put day_nep into an array
    }

    float hotlake_of_the_year = hottest_lake(highest_temp_sup_nep, highest_temp_mich_nep, highest_temp_huron_nep, highest_temp_erie_nep, highest_temp_ont_nep, highest_temp_st_clr_nep); // find the hottest lake of the year
    float coldlake_of_the_year = coldest_lake(lowest_temp_sup_nep, lowest_temp_mich_nep, lowest_temp_huron_nep, lowest_temp_erie_nep, lowest_temp_ont_nep, lowest_temp_st_clr_nep);      // find the coldest lake of the year

    print_out_hottest_lake(highest_temp_sup_nep, highest_temp_mich_nep, highest_temp_huron_nep, highest_temp_erie_nep, highest_temp_ont_nep, highest_temp_st_clr_nep, real_day_nep_highest_temp_sup_nep,
                           real_day_nep_highest_temp_mich_nep, real_day_nep_highest_temp_huron_nep, real_day_nep_highest_temp_erie_nep, real_day_nep_highest_temp_ont_nep, real_day_nep_highest_temp_st_clr_nep, hotlake_of_the_year);

    print_out_coldest_lake(lowest_temp_sup_nep, lowest_temp_mich_nep, lowest_temp_huron_nep, lowest_temp_erie_nep, lowest_temp_ont_nep, lowest_temp_st_clr_nep, real_day_nep_lowest_temp_sup_nep, real_day_nep_lowest_temp_mich_nep,
                           real_day_nep_lowest_temp_huron_nep, real_day_nep_lowest_temp_erie_nep, real_day_nep_lowest_temp_ont_nep, real_day_nep_lowest_temp_st_clr_nep, coldlake_of_the_year);

    printf("\n");

    fclose(data);

    ////////////////////////////////// Question 5 ////////////////////////////////////////////

    printf("\n*Question 5\n");

    float avg_sup_nep_summer = lake_average(sup_nep, 172, 265);
    float avg_mich_nep_summer = lake_average(mich_nep, 172, 265);
    float avg_huron_nep_summer = lake_average(huron_nep, 172, 265);
    float avg_erie_nep_summer = lake_average(erie_nep, 172, 265);
    float avg_ont_nep_summer = lake_average(ont_nep, 172, 265);
    float avg_st_clr_nep_summer = lake_average(st_clr_nep, 172, 265);

    float array_of_avg_summer_lake[6];

    array_of_avg_summer_lake[0] = avg_sup_nep_summer;
    array_of_avg_summer_lake[1] = avg_mich_nep_summer;
    array_of_avg_summer_lake[2] = avg_huron_nep_summer;
    array_of_avg_summer_lake[3] = avg_erie_nep_summer;
    array_of_avg_summer_lake[4] = avg_ont_nep_summer;
    array_of_avg_summer_lake[5] = avg_st_clr_nep_summer;

    call_high_and_sort_name(6, array_of_avg_summer_lake);

    ////////////////////////////////Question 6////////////////////////////////////////////////////

    printf("\n*Question 6\n");

    float avg_sup_nep_winter = lake_average_for_2parts(sup_nep, 1, 79, 355, 366);
    float avg_mich_nep_winter = lake_average_for_2parts(mich_nep, 1, 79, 355, 366);
    float avg_huron_nep_winter = lake_average_for_2parts(huron_nep, 1, 79, 355, 366);
    float avg_erie_nep_winter = lake_average_for_2parts(erie_nep, 1, 79, 355, 366);
    float avg_ont_nep_winter = lake_average_for_2parts(ont_nep, 1, 79, 355, 366);
    float avg_st_clr_nep_winter = lake_average_for_2parts(st_clr_nep, 1, 79, 355, 366);

    float array_of_avg_winter_lake[6];

    array_of_avg_winter_lake[0] = avg_sup_nep_winter;
    array_of_avg_winter_lake[1] = avg_mich_nep_winter;
    array_of_avg_winter_lake[2] = avg_huron_nep_winter;
    array_of_avg_winter_lake[3] = avg_erie_nep_winter;
    array_of_avg_winter_lake[4] = avg_ont_nep_winter;
    array_of_avg_winter_lake[5] = avg_st_clr_nep_winter;

    call_high_and_sort_name_winter(6, array_of_avg_winter_lake);