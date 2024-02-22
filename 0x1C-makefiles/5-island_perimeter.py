#!/usr/bin/python3
"""Get the perimeter of the island described in grid as list of lists or ints
    1s for land, 0s for water
"""


def island_perimeter(grid):
    """Get perimeter of the island described in grid

        Args:
            grid: A list of lists of ints
        Return: The perimeter
    """
    if type(grid) is not list or len(grid) <= 2 or\
            len(grid[0]) <= 2:
        return 0

    height = len(grid)
    width = len(grid[0])

    perimeter = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j]:
                if i != 0:
                    if grid[i-1][j] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if j != width - 1:
                    if grid[i][j+1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if i != height - 1:
                    if grid[i+1][j] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if j != 0:
                    if grid[i][j-1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

    return perimeter
