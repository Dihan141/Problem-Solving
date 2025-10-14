from collections import deque

moves = [[1, -2], [2, -1], [1, 2], [2, 1], [-2, 1], [-1, 2], [-2, -1], [-1, -2]]

def isValid(posX, posY, n, visited):
    if((posX >= 0 and posX < n) and (posY >= 0 and posY < n) and not visited[posX][posY]):
        visited[posX][posY] = True
        return True
    return False

def BFS(k, t, n):
    s = k

    q = deque()

    visited = [[False] * n for _ in range(n)] 

    visited[s[0]][s[1]] = True

    q.append([s, 0])

    while q:
        curr = q.popleft()
        if(curr[0] == t):
            return curr[1]
        
        for move in moves:
            X, Y = move

            knightX, knightY = curr[0]

            updatedX = knightX + X
            updatedY = knightY + Y

            if(isValid(updatedX, updatedY, n, visited)):
                q.append([[updatedX, updatedY], curr[1] + 1])
    
    return -1


if __name__ == "__main__":
    n = 6
    k = [1, 3]
    t = [5, 0]

    print(BFS(k, t, n))