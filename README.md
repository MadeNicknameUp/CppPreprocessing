# CppPreprocessing

This repository contains a C++ program that analyzes the number of people in rooms and identifies rooms where the number of people exceeds or falls below a specified limit (20 people). The program outputs the room numbers that do not meet the specified conditions.

## Features

- **Macro `new(name)`**: Initializes a variable `name` to 0.
- **Vectors `too_much` and `free_room`**: Store room numbers with excess or insufficient people.
- **Function `too_much_output`**: Recursively outputs room numbers with too many people.
- **Function `too_free_room`**: Recursively outputs room numbers with too few people.
- **Function `check`**: Recursively checks the number of people in each room and updates the corresponding vectors.
- **Function `main`**: Initiates the room-checking process.

## Usage

1. Compile the program using a C++ compiler (e.g., `g++`):
   ```bash
   g++ -o room_checker main.cpp```
2. Run the compiled program:
   ```bash
   ./room_checker```
3. Enter the number of people in each of the 10 rooms. The program will output the room numbers that do not meet the conditions.

## Example

```bash
Enter the number of people in room 1: 25
Enter the number of people in room 2: 15
...
Rooms with too many people: 1
Rooms with too few people: 2
```

## Requirements

  *A C++ compiler (e.g., g++).*

  *Standard C++ library.*

## License

This project is licensed under the MIT License. See the [LICENSE](https://github.com/MadeNicknameUp/CppPreprocessing/blob/main/LICENSE) file for details.
