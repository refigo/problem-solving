def solution(arr, queries):
    answer = []
    for s,e,k in queries:
        finding = -1
        for i in range(s,e+1):
            if (arr[i] > k) and ((finding == -1) or (arr[i] < finding)):
                finding = arr[i]
        answer.append(finding)
    return answer