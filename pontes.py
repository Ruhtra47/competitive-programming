import heapq


def dijkstra(graph, start, end):
    heap = [(start, 0)]
    visited = set()

    while heap:
        u, cost = heapq.heappop(heap)
        if u in visited:
            continue
        visited.add(u)
        if u == end:
            return cost
        for v, c in graph[u]:
            if v in visited:
                continue
            heapq.heappush(heap, (v, cost + c))


def main():
    n, m = map(int, input().split())
    graph = {i: set() for i in range(0, n + 2)}
    for _ in range(m):
        s, t, b = map(int, input().split())
        graph[s].add((t, b))
        graph[t].add((s, b))

    print(dijkstra(graph, 0, n + 1))


if __name__ == "__main__":
    main()
