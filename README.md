# TicTacToe

A complete two-player Tic Tac Toe game in C++ with input validation, board rendering, and win/draw logic implemented using object-oriented programming.

## 🧠 Features

- ✔️ Console-based 3x3 Tic Tac Toe grid  
- ✔️ Two-player mode  
- ✔️ Symbol selection with input validation  
- ✔️ Win detection for rows, columns, and diagonals  
- ✔️ Draw detection  
- ✔️ Clean and beginner-friendly code structure  

## 📂 Project Structure

| File Name            | Description                                  |
|----------------------|----------------------------------------------|
| `GameBoard.cpp`      | Manages the Tic Tac Toe board and game status |
| `GameBoard.h`        | Header file for the `GameBoard` class         |
| `TicTacToe.cpp`      | Controls game flow, player turns, and inputs  |
| `TicTacToe.h`        | Header file for the `TicTacToe` class         |
| `Source.cpp`         | Main file that starts the game                |
| `*.sln`, `*.vcxproj` | Visual Studio solution and project files      |

## 🧑‍💻 How to Run

### Compile using g++ (if using terminal):

```bash
g++ GameBoard.cpp TicTacToe.cpp Source.cpp -o tictactoe
```

Or simply run it through Visual Studio using the provided `.sln` file.

## 👨‍🏫 Purpose

This project was developed as part of a C++ learning journey to:

- Practice OOP (Object-Oriented Programming)  
- Understand class structure and responsibilities  
- Learn about modular design and game logic  

## 🚫 .gitignore (Recommended)

To keep the repo clean, you may want to ignore:

```gitignore
.vs/
x64/
*.db
*.suo
*.ipch
*.vcxproj.user
```

## 👩‍💻 Author

**Laiba Khalid**  
GitHub: [https://github.com/Laibakhalid23](https://github.com/Laibakhalid23)

## 📃 License

This project is open-source and free to use under the MIT License.
