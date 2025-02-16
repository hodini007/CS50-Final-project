#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100

struct Task {
    char description[100];
    int priority;
};

struct Task taskList[MAX_TASKS];
int numTasks = 0;

void addTask(const char* description, int priority) {
    if (numTasks < MAX_TASKS) {
        strcpy(taskList[numTasks].description, description);
        taskList[numTasks].priority = priority;
        numTasks++;
        printf("Task added successfully!\n");
    } else {
        printf("Task list is full. Cannot add more tasks.\n");
    }
}

void displayTasks() {
    printf("Task List:\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%d. Priority %d: %s\n", i + 1, taskList[i].priority, taskList[i].description);
    }
}

int main() {
    int choice;
    char description[100];
    int priority;

    while (1) {
        printf("\nTask Manager Menu:\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task description: ");
                scanf(" %[^\n]", description);
                printf("Enter task priority (1-10): ");
                scanf("%d", &priority);
                addTask(description, priority);
                break;
            case 2:
                displayTasks();
                break;
            case 3:
                printf("Exiting. Have a productive day!\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
