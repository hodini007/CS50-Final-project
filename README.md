# CLI Task Manager

## Description
This is a simple command-line task manager built in C as a final project for CS50. The program allows users to add tasks with priority levels and view the list of tasks.

## Features
- Add tasks with descriptions and priority levels.
- Display all tasks with their respective priority.
- Simple and easy-to-use CLI interface.

## How to Compile and Run
1. Compile the program using `gcc`:
   ```sh
   gcc -o task_manager task_manager.c
   ```
2. Run the executable:
   ```sh
   ./task_manager
   ```

## Usage
Once the program is running, the following options are available:
1. **Add Task**: Enter a task description and a priority (1-10).
2. **Display Tasks**: View all added tasks with their priority levels.
3. **Exit**: Quit the program.

## Example Usage
```
Task Manager Menu:
1. Add Task
2. Display Tasks
3. Exit
Enter your choice: 1
Enter task description: Complete CS50 project
Enter task priority (1-10): 5
Task added successfully!

Enter your choice: 2
Task List:
1. Priority 5: Complete CS50 project

Enter your choice: 3
Exiting. Have a productive day!
```

## Limitations
- The maximum number of tasks is **100**.
- Tasks cannot be removed or edited once added.

## Future Improvements
- Implement task deletion and modification.
- Save tasks to a file for persistence.
- Sort tasks based on priority.

## Author
Created as part of the CS50 final project.

## License
This project is open-source and available for modification and distribution.

