/*
This program calculates the total income of an employee working at In-N-Out Burger over the summer.
It includes regular pay, overtime pay, and handles different weeks with varying hours.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0)); // Seed the random number generator

    int totalWeeks = 12; // Total number of weeks in the summer
    int regularHoursPerWeek = 40; // Standard working hours per week
    int overtimeThreshold = 40; // Threshold for overtime hours per week
    double regularPayRate = 17.0; // Regular pay rate per hour at In-N-Out Burger
    double overtimePayRate = 25.5; // Overtime pay rate per hour at In-N-Out Burger
    double totalRegularIncome; // Total regular income (should be initialized to 0)
    double totalOvertimeIncome = 0; // Total overtime income (should be initialized to 0)
    double totalIncome; // Total income (should be initialized to 0)

    for (int week = 0; week < totalWeeks; week++)
    {
        int hoursWorkedThisWeek; // Hours worked in the current week (should be initialized)
        
        // Simulate hours worked this week (random value between 35 and 50)
        hoursWorkedThisWeek = rand() % 16 + 35

        if (hoursWorkedThisWeek > overtimeThreshold)
        {
            int regularHours = overtimeThreshold;
            int overtimeHours = hoursWorkedThisWeek - overtimeThreshold;
            totalRegularIncome += regularHours * regularPayRate;
            totalOvertimeIncome += overtimeHours * overtimePayRate;
        }
        else
        {
            totalRegularIncome += hoursWorkedThisWeek * regularPayRate;
        }

        std::cout << "Week " << week + 1 << ": " << hoursWorkedThisWeek << " hours worked at In-N-Out Burger" << std::endl;
    }

    totalIncome = totalRegularIncome + totalOvertimeIncome;

    std::cout << "Total regular income: $" << totalRegularIncome << std::endl;
    std::cout << "Total overtime income: $" << totalOvertimeIncome << std::endl;
    std::cout << "Total income over the summer at In-N-Out Burger: $" << totalIncome << std::endl

    return 0;
}
