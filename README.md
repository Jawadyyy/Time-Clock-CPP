# Time Clock

This is a simple console-based timer application written in C++. The program takes input for hours, minutes, and seconds and displays a timer that updates every second.

## Requirements

- A C++ compiler (e.g., g++, Visual Studio)
- Windows operating system (due to the use of `windows.h` and `Sleep` functions)

## Usage

1. **Compile the Program**

   Use a C++ compiler to compile the source code. For example, if you are using g++, you can compile the program with the following command:
   ```bash
   g++ -o Time_Clock timer.cpp

2. **Run the Program**

   ./timer

3. **Enter Time**

   - The program will prompt you to enter hours, minutes, and seconds.
   - If the entered time is invalid (hours >= 24, minutes >= 60, or seconds >= 60), you will be asked to enter the time again.

4. **Timer Display**

   - The timer will display the time in the format `HH:MM:SS` and update every second.
   - The timer will reset to `00:00:00` after 23:59:59.


## Notes

   - This program uses `system("cls")` to clear the console screen, which is specific to Windows. This will not work on other operating systems.
   - The `windows.h` header is included for the `Sleep` function, which is also specific to Windows.

## License

This project is open source and available under the [MIT License](LICENSE).
