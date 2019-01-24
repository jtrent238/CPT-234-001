#include <stdio.h>

int main()
{
    double powerOnSeconds   = 0.0;
    double powerOnMinutes   = 0.0;
    double powerOnHours     = 0.0;
    double powerOnDays      = 0.0;
    double powerOnWeeks     = 0.0;
    double powerOnMonths    = 0.0;
    double powerOnYears     = 0.0;
    
    printf("Enter the POH (Power On Hours) for your hard drive: ");
    scanf("%lf", &powerOnHours);
    
    
    powerOnMinutes = powerOnHours * 60;
    powerOnSeconds = powerOnMinutes * 60;
    powerOnDays = powerOnHours / 24;
    powerOnWeeks = powerOnDays / 7;
    powerOnMonths = powerOnWeeks / (double)(4.34524);
    powerOnYears = powerOnMonths / 12;

    printf("Your hard drive has been on for: " "\n");
    printf("    " "%.2lf seconds." "\n", powerOnSeconds);
    printf("    " "%.2lf minutes." "\n", powerOnMinutes);
    printf("    " "%.2lf hours." "\n", powerOnHours);
    printf("    " "%.2lf days." "\n", powerOnDays);
    printf("    " "%.2lf weeks." "\n", powerOnWeeks);
    printf("    " "%.2lf months." "\n", powerOnMonths);
    printf("    " "%.2lf years." "\n", powerOnYears);
    
    return 0;
}
