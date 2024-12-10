
# get_next_line

A project that implements a function to read a line from a file descriptor, designed to handle buffer-based reading. This repository includes both mandatory and bonus implementations.

## Features

- **Read Line by Line:** The `get_next_line` function reads a single line at a time from the provided file descriptor.
- **Buffer Management:** Supports customizable buffer size via `BUFFER_SIZE` macro.
- **Static Variable Usage:** Efficiently handles multi-line reads with minimal overhead.
- **Bonus Achieved:** Multi-file descriptor support implemented for advanced use cases.

## Compilation

To compile the project, use the following command:

```sh
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c -D BUFFER_SIZE=10 -I .
```

For the bonus version:

```sh
cc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main.c -D BUFFER_SIZE=10 -I .
```

## Notes

- The recommended `BUFFER_SIZE` is 10 but can be adjusted during compilation.
- This project was completed with a grade of **125/100**, showcasing extra effort and implementation of additional features.

## Files Included

- `get_next_line.c`: Core implementation of the line-reading function.
- `get_next_line.h`: Header file for the mandatory implementation.
- `get_next_line_bonus.c`: Implementation supporting multiple file descriptors.
- `get_next_line_bonus.h`: Header file for the bonus implementation.
- `get_next_line_utils.c`: Utility functions for the mandatory implementation.
- `get_next_line_utils_bonus.c`: Utility functions for the bonus implementation.
- `main.c`: Example usage of the `get_next_line` function.

## Author

This project was implemented by **lle-duc**. For questions or contributions, feel free to open an issue or a pull request.

![image](https://github.com/user-attachments/assets/fa9ee4e5-7dad-41f9-a45f-37bd696baf23)
