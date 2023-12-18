import numpy as np

GRID_SIZE = 80

board = np.array(
    [["H" for _ in range(GRID_SIZE)] for _ in range(GRID_SIZE)], dtype="str"
)
board[1, 2] = "A"
loc = (1, 2)
board[loc] = "B"
print(board[1, :])
