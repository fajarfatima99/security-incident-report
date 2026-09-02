#include <stdio.h>
int main()
{
  int affsys;
  float totalcost,cost,time;
  char name[50];
  char id[50];
  printf("Enter Incident Id: ");
  scanf("%s", id);
  printf("\nEnter Analyst Name: ");
  scanf("%s",name);
  printf("\nEnter Number of affected systems: ");
  scanf("%d",&affsys);
  printf("\nEnter Estimated Recovery Cost: ");
  scanf("%f",&cost);
  printf("\nEnter downtime in hours: ");
  scanf("%d",&time);
  totalcost = affsys * cost; 
  printf("\n=================================\n"); 
  printf(" SECURITY INCIDENT REPORT\n"); 
  printf("=================================\n"); 
  printf("Incident ID : %s\n", id); 
  printf("Analyst : %s\n", name); 
  printf("Affected Systems : %d\n", affsys); 
  printf("Recovery Cost : %.2f\n", cost); 
  printf("Total Cost : %.2f\n", totalcost); 
  printf("Downtime : %.2f hours\n", time); 
  printf("=================================\n");
}
