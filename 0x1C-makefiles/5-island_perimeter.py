#!/usr/bin/python3
"""
Function to calculate the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    - grid (list of list of integers): Represents the island where:
        - 0 represents a water zone
        - 1 represents a land zone
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height do not exceed 100.
        - Grid is completely surrounded by water,
          and there is one island (or nothing).
        - The island does not have “lakes”
          (water inside that is not connected to the water around the island).

    Returns:
    - Perimeter of the island (integer).
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
