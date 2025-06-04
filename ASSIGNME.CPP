#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student { int id; char name[50]; };
  clrscr();
int main() {
 struct Student records[100]; // Fixed size array int count = 0, choice, id, i, found; char name[50];
    int choice ,id,i,found;
    char name;
while (1) {
    printf("\n1. Add Record\n2. Display Records\n3. Search Record\n4. Modify Record\n5. Delete Record\n6. Sort Records\n7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int n;

    if (choice == 1) { // Add Record
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("Enter ID: ");
    scanf("%d", &id);
     printf("Enter Name: ");
     scanf("%s",name);
     }
    }
    else if (choice == 2) { // Display Records
	printf("\nStudent Records:\n");
	for (i = 1; i <=n; i++)
	    printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }
    else if (choice == 3) { // Search Record
	printf("Enter ID to search: ");
	scanf("%d", &id);
	found = 0;
	for (i = 1; i <= n; i++) {
	    if (records[i].id == id) {
		printf("Record Found: ID: %d, Name: %s\n", records[i].id, records[i].name);
		found = 1;
		break;
	    }
	}
	if (!found) printf("Record not found!\n");
    }
    else if (choice == 4) { // Modify Record
	printf("Enter ID to modify: ");
	scanf("%d", &id);
	found = 0;
	for (i = 1; i <=n; i++) {
	    if (records[i].id == id) {
		printf("Enter New Name: ");
		scanf("%s", records[i].name);
		printf("Record Updated Successfully!\n");
		found = 1;
		break;
	    }
	}
	if (!found) printf("Record not found!\n");
    }
    else if (choice == 5) { // Delete Record
	printf("Enter ID to delete: ");
	scanf("%d", &id);
	found = 0;
	for (i = 1; i <=n; i++) {
	    if (records[i].id == id) {
		for (int j = i; j <n - 1; j++)
		    records[j] = records[j + 1];
		n--;
		printf("Record Deleted Successfully!\n");
		found = 1;
		break;
	    }
	}
	if (!found) printf("Record not found!\n");
    }
    else if (choice == 6) { // Sort Records
	struct Student temp;
	for (i = 1; i <= n - 1; i++) {
	    for (int j = 1; j <= n - i - 1; j++) {
		if (records[j].id > records[j + 1].id) {
		    temp = records[j];
		    records[j] = records[j + 1];
		    records[j + 1] = temp;
		}
	    }
	}
	printf("Records sorted by ID successfully!\n");
    }
    else if (choice == 7) { // Exit
	break;
    }
    else {
	printf("Invalid Choice!\n");
    }
}
return 0;

}