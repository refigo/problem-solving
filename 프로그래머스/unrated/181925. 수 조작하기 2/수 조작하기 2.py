def solution(numLog):
    answer = ''
    objs = dict(zip([1,-1,10,-10], ['w','s','d','a']))
    currIdx = 0
    sizeOfLog = len(numLog)
    while (currIdx + 1 < sizeOfLog):
        diff = numLog[currIdx + 1] - numLog[currIdx]
        answer += objs[diff]
        currIdx += 1
    return answer