int main() {
    /*int stackMatrixB[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };*/

    int rows = 3;
    int cols = 4;
    int** heapMatrix = new int*[rows];

    for (int i = 0; i < rows; i++) 
        heapMatrix[i] = new int[cols];


    for (int i = 0; i < rows; i++)  
        for (int j = 0; j < cols; j++)  
            heapMatrix[i][j] = (rows*i + i) + j;

    for(int i = 0; i < rows; i++) 
        delete[] heapMatrix[i];
    
    delete[] heapMatrix;

    return 0;
}

