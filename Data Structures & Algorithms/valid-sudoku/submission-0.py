def check_row(board,k):
    seen = set()
    for i in range(len(board)):
        if(board[k][i] != '.'):
            if(board[k][i] in seen):
                return False
            seen.add(board[k][i])    
    return True

def check_coloumn(board,k):
    seen = set()
    for i in range(len(board)):
        if(board[i][k] != '.'):
            if(board[i][k] in seen):
                return False
            seen.add(board[i][k])    
    return True
        
            
            
            

                    
def check_boxes(board):
    for box_row in range(0, 9, 3):
        for box_col in range(0, 9, 3):
            seen = set()

            for row in range(box_row, box_row + 3):
                for col in range(box_col, box_col + 3):
                    val = board[row][col]
                    if val != '.':
                        if val in seen:
                            return False

                        seen.add(val)

    return True




class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

                           
      
            
        valid = all(
            check_row(board, i) and check_coloumn(board, i)
            for i in range(9)
        )

        return valid and check_boxes(board)
                
                
                
            
        
        
            