# Gauss-Jordan Elimination Function

## Steps

1. **Loop through rows**:
   - For each row `i`, make the diagonal element `matrix[i][i]` equal to `1`.

2. **Make diagonal element 1**:
   - Divide the row by `matrix[i][i]`. If `matrix[i][i] == 0`, print an error and exit.

3. **Make other elements in the column 0**:
   - For each row `k ≠ i`, subtract a multiple of row `i` to make all elements in column `i` zero.

4. **Display the solution**:
   - The solution is the last column of the transformed matrix.
