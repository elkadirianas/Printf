# Printf

This project is part of the 42 cursus. It involves implementing a custom version of the `printf` function in C.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Overview

The `Printf` project aims to create a custom version of the standard `printf` function. This custom implementation will handle a variety of format specifiers and provide similar functionality to the standard library version.

## Features

- Supports various format specifiers such as `%d`, `%s`, `%c`, `%x`, etc.
- Error handling for invalid format specifiers.

## Installation

Clone the repository to your local machine using:

```bash
git clone https://github.com/elkadirianas/Printf.git
```

Navigate to the project directory:

```bash
cd Printf
```

Compile the project using the provided Makefile:

```bash
make
```

## Usage

Include the `printf.h` header file in your C project and link against the compiled library.

Example:

```c
#include "printf.h"

int main() {
    ft_printf("Hello, World! %d\n", 42);
    return 0;
}
```

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure your code follows the project's coding standards and includes appropriate tests.
