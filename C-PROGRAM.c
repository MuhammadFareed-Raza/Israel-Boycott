#include <stdio.h>
#include <string.h>

// Structure to store company information
typedef struct Company {
  char name[100];
  char operations[200];
  char taxContribution[200];
} Company;

int main() {
  // Define an array of companies (adjust size as needed)
  Company companies[25];

  // Add company data (replace with actual parsing if needed)
  strcpy(companies[0].name, "Coca-Cola");
  strcpy(companies[0].operations, "Bottling Plant in Israel");
  strcpy(companies[0].taxContribution, "Supports Israel through taxes");

  strcpy(companies[1].name, "HP");
  strcpy(companies[1].operations, "Business operations, R&D");
  strcpy(companies[1].taxContribution, "Pays taxes in Israel");

  // ... (add data for remaining companies)

  strcpy(companies[2].name, "Intel");
  strcpy(companies[2].operations, "R&D, Manufacturing");
  strcpy(companies[2].taxContribution, "Pays taxes in Israel");

  strcpy(companies[3].name, "Microsoft");
  strcpy(companies[3].operations, "R&D centers, Acquisitions");
  strcpy(companies[3].taxContribution, "Pays taxes through local subsidiary");

  strcpy(companies[4].name, "Google");
  strcpy(companies[4].operations, "R&D centers, Investments");
  strcpy(companies[4].taxContribution, "Pays taxes for local activities");

  strcpy(companies[5].name, "Facebook");
  strcpy(companies[5].operations, "Offices, Investments");
  strcpy(companies[5].taxContribution, "Pays taxes in supportive countries");

  strcpy(companies[6].name, "Amazon");
  strcpy(companies[6].operations, "Data centers, Cloud services");
  strcpy(companies[6].taxContribution, "Pays taxes in supportive countries");

  strcpy(companies[7].name, "Nestle");
  strcpy(companies[7].operations, "Owns stake in Osem, Business activities");
  strcpy(companies[7].taxContribution, "Pays taxes in Israel and Switzerland");

  strcpy(companies[8].name, "wix.com");
  strcpy(companies[8].operations, "Israel-based company");
  strcpy(companies[8].taxContribution, "Pays taxes in Israel");

  strcpy(companies[9].name, "PepsiCo");
  strcpy(companies[9].operations, "Partnership with Strauss Group");
  strcpy(companies[9].taxContribution, "Pays taxes in supportive countries");

  strcpy(companies[10].name, "Unilever");
  strcpy(companies[10].operations, "Subsidiary, Manufacturing");
  strcpy(companies[10].taxContribution, "Pays taxes in Israel, UK, Netherlands");

  strcpy(companies[11].name, "Peak Freans");
  strcpy(companies[11].operations, "Owned by Mondelez International");
  strcpy(companies[11].taxContribution, "Pays taxes in Israel");

  strcpy(companies[12].name, "Cadbury");
  strcpy(companies[12].operations, "Owned by Mondelez International");
  strcpy(companies[12].taxContribution, "Pays taxes in Israel");

  strcpy(companies[13].name, "LU");
  strcpy(companies[13].operations, "Owned by Mondelez International");
  strcpy(companies[13].taxContribution, "Pays taxes in Israel");

  strcpy(companies[14].name, "AMD");
  strcpy(companies[14].operations, "R&D (semiconductor, processors)");
  strcpy(companies[14].taxContribution, "Pays taxes in Israel and US");

  strcpy(companies[15].name, "Johnson & Johnson");
  strcpy(companies[15].operations, "Investments, Partnerships (medical, biotech)");
  strcpy(companies[15].taxContribution, "Pays taxes in supportive countries");

  strcpy(companies[16].name, "Boeing");
  strcpy(companies[16].operations, "Partnerships, Aircraft supply");
  strcpy(companies[16].taxContribution, "Pays taxes in US");

  strcpy(companies[17].name, "Nike");
  strcpy(companies[17].operations, "Sales, Marketing, Distribution");
  strcpy(companies[17].taxContribution, "Pays tax in US and Israel");
  
  strcpy(companies[18].name, "Adidas");
  strcpy(companies[18].operations, "Market presence, Retail, Distribution");
  strcpy(companies[18].taxContribution, "Pays taxes in Germany and supportive countries");

  strcpy(companies[19].name, "Ford");
  strcpy(companies[19].operations, "Research center (smart mobility)");
  strcpy(companies[19].taxContribution, "Pays taxes in US");

  strcpy(companies[20].name, "Chevron(Noble Energy)");
  strcpy(companies[20].operations, "Investments in natural gas sector");
  strcpy(companies[20].taxContribution, "Pays taxes in US and Israel");

  strcpy(companies[21].name, "Caterpillar Inc.");
  strcpy(companies[21].operations, "Sales, Service, Machinery supply");
  strcpy(companies[21].taxContribution, "Pays taxes in US and supportive countries");

  strcpy(companies[22].name, "Samsung");
  strcpy(companies[22].operations, "R&D centers, Investments");
  strcpy(companies[22].taxContribution, "Pays taxes in South Korea and supportive countries");

  strcpy(companies[23].name, "Sony");
  strcpy(companies[23].operations, "Collaboration with tech firms, Sales");
  strcpy(companies[23].taxContribution, "Pays taxes in Japan and supportive countries");

  strcpy(companies[24].name, "Dell");
  strcpy(companies[24].operations, "R&D operations, Collaboration");
  strcpy(companies[24].taxContribution, "Pays taxes in US and supportive countries");

  int showSupportive = 0;  // Flag to indicate searching for supportive companies
  char searchName[100];

  while (1) {
    printf("\nMenu:\n");
    printf("1. Search by company name\n");
    printf("2. Display all companies supportive of Israel\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");

    int choice;
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter company name to search: ");
        scanf("%s", searchName);

        int found = 0;
        int i = 0;
        for (i = 0; i < 25; i++) {
          if (strcmp(companies[i].name, searchName) == 0) {
            printf("\nCompany: %s\n", companies[i].name);
            printf("Operations in Israel: %s\n", companies[i].operations);
            printf("Tax Contribution: %s\n", companies[i].taxContribution);
            found = 1;
            break;
          }
        }

        if (!found) {
          printf("Company not found!\n");
        }
        break;

      case 2:
        showSupportive = 1;
        break;

      case 3:
        return 0;

      default:
        printf("Invalid choice!\n");
    }

    // Display supportive companies
    if (showSupportive) {
      printf("\nCompanies supportive of Israel:\n");
      int i=0;
      for (i = 0; i < 25; i++) {
        if (strstr(companies[i].taxContribution, "Israel") != NULL ||
            strstr(companies[i].taxContribution, "supportive countries") != NULL) {
          printf("%s\n", companies[i].name);
        }
      }
      showSupportive = 0; // Reset flag for next iteration
    }
  }

  return 0;
}
