#include <iostream>
#include <vector>

const int BOARD_SIZE = 11;
const char EMPTY = ' ';
const char BLUE = 'B';
const char RED = 'R';

// Function to display the hex board
void displayBoard(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        // Indent rows based on index for better visualization
        std::cout << std::string(i, ' ');

        // Print hexagon symbols for each position
        for (int j = 0; j < BOARD_SIZE; j++) {
            std::cout << board[i][j] << " - ";
        }

        std::cout << std::endl;

        // Indent rows based on index for better visualization
        std::cout << std::string(i, ' ');

        // Print horizontal connections between hexagons
        if (i < BOARD_SIZE - 1) {
            for (int j = 0; j < BOARD_SIZE - 1; j++) {
                std::cout << " \\ / ";
            }
            std::cout << " \\";
        }

        std::cout << std::endl;
    }
}

// Function to check if a move is valid
bool isValidMove(const std::vector<std::vector<char>>& board, int row, int col) {
    return (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == EMPTY);
}

// Function to check if a player has won
bool hasWon(const std::vector<std::vector<char>>& board, char player) {
    // Check if there is a path connecting the opposite sides for the given player
    std::vector<std::vector<bool>> visited(BOARD_SIZE, std::vector<bool>(BOARD_SIZE, false));
    std::vector<std::pair<int, int>> stack;
    int startRow, endRow;

    if (player == BLUE) {
        startRow = 0;
        endRow = BOARD_SIZE - 1;
    } else {
        startRow = BOARD_SIZE - 1;
        endRow = 0;
    }

    // Perform a depth-first search to find a path
    for (int col = 0; col < BOARD_SIZE; col++) {
        if (board[startRow][col] == player) {
            stack.push_back(std::make_pair(startRow, col));
            visited[startRow][col] = true;
        }
    }

    while (!stack.empty()) {
        int currRow = stack.back().first;
        int currCol = stack.back().second;
        stack.pop_back();

        if (currRow == endRow) {
            return true; // Path found
        }

        // Explore neighbors
        std::vector<std::pair<int, int>> neighbors;
        if (currRow > 0) {
            neighbors.push_back(std::make_pair(currRow - 1, currCol));
            if (currCol < BOARD_SIZE - 1) {
                neighbors.push_back(std::make_pair(currRow - 1, currCol + 1));
            }
        }
        if (currRow < BOARD_SIZE - 1) {
            neighbors.push_back(std::make_pair(currRow + 1, currCol));
            if (currCol > 0) {
                neighbors.push_back(std::make_pair(currRow + 1, currCol - 1));
            }
        }
        if (currCol > 0) {
            neighbors.push_back(std::make_pair(currRow, currCol - 1));
        }
        if (currCol < BOARD_SIZE - 1) {
            neighbors.push_back(std::make_pair(currRow, currCol + 1));
        }

        for (const auto& neighbor : neighbors) {
            int neighborRow = neighbor.first;
            int neighborCol = neighbor.second;

            if (board[neighborRow][neighborCol] == player && !visited[neighborRow][neighborCol]) {
                stack.push_back(std::make_pair(neighborRow, neighborCol));
                visited[neighborRow][neighborCol] = true;
            }
        }
    }

    return false;
}

int main() {
    std::vector<std::vector<char>> board(BOARD_SIZE, std::vector<char>(BOARD_SIZE, EMPTY));
    char currentPlayer = BLUE;
    bool gameOver = false;

    while (!gameOver) {
        // Display the board
        displayBoard(board);

        // Get player's move
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        std::cin >> row >> col;

        // Check if the move is valid
        if (!isValidMove(board, row, col)) {
            std::cout << "Invalid move. Please try again." << std::endl;
            continue;
        }

        // Update the board
        board[row][col] = currentPlayer;

        // Check if the player has won
        if (hasWon(board, currentPlayer)) {
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            gameOver = true;
        }

        // Switch to the next player
        currentPlayer = (currentPlayer == BLUE) ? RED : BLUE;
    }

    return 0;
}

