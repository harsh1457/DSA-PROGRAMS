#include <stdio.h>

struct Student
{
    char name[20];
    int roll;
    float cgpa;
};

int main()
{
    struct Student s[50], temp;
    int n = 0, choice, i, j, roll, found;

    do
    {
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Modify");
        printf("\n4. Append");
        printf("\n5. Search");
        printf("\n6. Sort");
        printf("\n7. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of students: ");
                scanf("%d", &n);

                for(i = 0; i < n; i++)
                {
                    printf("\nEnter name: ");
                    scanf("%s", s[i].name);

                    printf("Enter roll no: ");
                    scanf("%d", &s[i].roll);

                    printf("Enter CGPA: ");
                    scanf("%f", &s[i].cgpa);
                }
                break;

            case 2:
                printf("\nName\tRoll\tCGPA\n");

                for(i = 0; i < n; i++)
                {
                    printf("%s\t%d\t%.2f\n",
                           s[i].name, s[i].roll, s[i].cgpa);
                }
                break;

            case 3:
                printf("Enter roll no to modify: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("Enter new name: ");
                        scanf("%s", s[i].name);

                        printf("Enter new CGPA: ");
                        scanf("%f", &s[i].cgpa);

                        printf("Record modified.\n");
                        break;
                    }
                }
                break;

            case 4:
                printf("Enter name: ");
                scanf("%s", s[n].name);

                printf("Enter roll no: ");
                scanf("%d", &s[n].roll);

                printf("Enter CGPA: ");
                scanf("%f", &s[n].cgpa);

                n++;
                break;

            case 5:
                printf("Enter roll no to search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("Name: %s\n", s[i].name);
                        printf("Roll: %d\n", s[i].roll);
                        printf("CGPA: %.2f\n", s[i].cgpa);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found.\n");

                break;

            case 6:
                for(i = 0; i < n-1; i++)
                {
                    for(j = 0; j < n-i-1; j++)
                    {
                        if(s[j].roll > s[j+1].roll)
                        {
                            temp = s[j];
                            s[j] = s[j+1];
                            s[j+1] = temp;
                        }
                    }
                }

                printf("Sorted by roll number.\n");
                break;

            case 7:
                printf("Exit.");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 7);

    return 0;
}
