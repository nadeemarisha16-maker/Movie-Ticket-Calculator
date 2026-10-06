# Movie-Ticket-Calculator
This is a small movie calculator I made using C++

# Movie Ticket Calculator

A small C++ console program that calculates the total cost of movie tickets based on ticket type and quantity.

## Ticket prices

| Option | Type   | Price  |
|--------|--------|--------|
| 1      | Child  | $8.00  |
| 2      | Adult  | $12.00 |
| 3      | Senior | $10.00 |

## Download

Prebuilt executables are available on the [Releases](../../releases) page:

- `movie_tickets-windows.exe` – Windows (64-bit)
- `movie_tickets-linux` – Linux (64-bit)

## Usage

**Windows** (Command Prompt or PowerShell):
```
movie_tickets-windows.exe
```

**Linux:**
```
chmod +x movie_tickets-linux
./movie_tickets-linux
```

### Example

```
Movie Ticket Menu
1. Child
2. Adult
3. Senior
Please enter your choice (1-3): 2
How many tickets would you like? 3
Your total is: $36.00
```

Entering a choice outside 1-3 prints an "invalid choice" message and exits.

## Build from source

Requires a C++ compiler with C++11 support (g++, clang++, or MinGW).

```
git clone https://github.com/YOUR-USERNAME/movie-ticket-calculator.git
cd movie-ticket-calculator
make
./movie_tickets
```

Or compile directly without `make`:

```
g++ -std=c++11 -O2 -o movie_tickets src/main.cpp
```

## Project structure

```
.
├── src/main.cpp                 # Program source
├── Makefile                     # Build script
├── .github/workflows/build.yml  # CI: builds on Linux, Windows, macOS
├── .gitignore
├── LICENSE
└── README.md
```

## Possible improvements

- Validate non-numeric input and negative ticket counts
- Allow multiple ticket types in one order
- Add tax or discounts

## License

Released under the [MIT License](LICENSE).
