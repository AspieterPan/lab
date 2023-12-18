import random
import time

import numpy as np
from rich.console import Console
from rich.padding import Padding
from rich.table import Table

console = Console()

# Game settings
GRID_SIZE = 80
SNAKE_CHAR = "O"
FOOD_CHAR = "*"


class SnakeGame:
    def __init__(self):
        self.snake = [(GRID_SIZE // 2, GRID_SIZE // 2)]
        self.food = self.generate_food()
        self.direction = "RIGHT"
        self.board = np.array(
            [[" " for _ in range(GRID_SIZE)] for _ in range(GRID_SIZE)], dtype="str"
        )
        self.set_board()
        self.board[self.food] = FOOD_CHAR

    def generate_food(self):
        while True:
            food = (random.randint(0, GRID_SIZE - 1), random.randint(0, GRID_SIZE - 1))
            if food not in self.snake:
                return food

    def set_board(self):
        for row in range(GRID_SIZE):
            for col in range(GRID_SIZE):
                self.board[row, col] = SNAKE_CHAR if (row, col) in self.snake else " "

    def listen_keys(self):
        # TODO: use arrow to control the direction of the snake
        pass

    def draw_board(self):
        grid = Table.grid()
        # TODO: add the grid's border
        grid.border_style = "bold"

        for _ in range(GRID_SIZE):
            grid.add_column()
        for row in range(GRID_SIZE):
            grid.add_row(*self.board[row, :])
        console.print(grid)

    def move_snake(self):
        head = self.snake[0]
        if self.direction == "UP":
            new_head = ((head[0] - 1) % GRID_SIZE, head[1])
        elif self.direction == "DOWN":
            new_head = ((head[0] + 1) % GRID_SIZE, head[1])
        elif self.direction == "LEFT":
            new_head = (head[0], (head[1] - 1) % GRID_SIZE)
        elif self.direction == "RIGHT":
            new_head = (head[0], (head[1] + 1) % GRID_SIZE)
        else:
            raise Exception(f"self direction is: {self.direction}")

        if new_head == self.food:
            self.snake = [new_head] + self.snake
            self.food = self.generate_food()
            self.board[new_head] = SNAKE_CHAR
            self.board[self.food] = FOOD_CHAR
        else:
            self.board[self.snake[-1]] = " "
            self.snake = [new_head] + self.snake[:-1]
            self.board[new_head] = SNAKE_CHAR

    def check_collision(self):
        head = self.snake[0]
        if head in self.snake[1:]:
            return True
        return False


def main():
    game = SnakeGame()

    console.print(Padding("Welcome to Snake Game!", (0, 1)))

    for i in range(3, 0, -1):
        console.print(f"Game starting in {i} seconds...")
        time.sleep(1)

    while True:
        console.clear()
        game.draw_board()
        game.move_snake()

        if game.check_collision():
            console.print("Game Over!", style="bold red")
            break

        time.sleep(0.5)


if __name__ == "__main__":
    main()
