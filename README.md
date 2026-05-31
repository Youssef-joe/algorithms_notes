# Algorithms Notes

A collection of algorithm implementations, explanations, and notes for study and reference.

## Contents

### Graph Algorithms

| Algorithm | Description | Complexity | File |
|-----------|-------------|------------|------|
| Cycle Detection (DFS) | Detects cycles in a directed graph using depth-first search | O(V + E) | [main.cpp](main.cpp) |

## Cycle Detection Algorithm

The implementation in `main.cpp` uses a recursive DFS approach to detect cycles in a directed graph.

### How it works

1. For each unvisited vertex, perform DFS traversal
2. Maintain a recursion stack (`recStack`) to track vertices in the current DFS path
3. If we encounter a vertex already in the recursion stack, a back edge exists → cycle detected
4. Self-loops (edges from a vertex to itself) are also detected as cycles

### Key concepts

- **Back edge**: An edge connecting a vertex to an ancestor in the DFS tree
- **Recursion stack**: Tracks vertices currently being processed in the DFS call stack
- Time complexity: O(V + E) where V is vertices and E is edges

### Example graph used

```
0 → 1 → 2
↓         ↓
2 ←───────┘
2 → 3 → 3 (self-loop)
```

This graph contains cycles: 0 → 1 → 2 → 0 and 3 → 3.

## Running the code

```bash
g++ -std=c++17 main.cpp -o main
./main
```

Output: `1` (true, indicating a cycle exists)