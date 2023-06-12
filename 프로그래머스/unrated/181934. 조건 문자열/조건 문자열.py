def solution(ineq, eq, n, m):
    answer = 0
    if eq == "=" and ineq == ">":
        answer = int(n >= m)
    elif eq == "=" and ineq == "<":
        answer = int(n <= m)
    elif eq == "!" and ineq == ">":
        answer = int(n > m)
    elif eq == "!" and ineq == "<":
        answer = int(n < m)
    return answer