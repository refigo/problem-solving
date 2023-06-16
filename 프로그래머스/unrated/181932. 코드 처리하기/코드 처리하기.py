def solution(code):
    answer = ''
    
    mode = 0
    idx = 0
    for each in code:
        if (mode == 0):
            if (each == "1"):
                mode = 1
            elif (idx % 2 == 0):
                answer += each
        else:
            if (each == "1"):
                mode = 0
            elif (idx % 2 == 1):
                answer += each
        idx += 1
    if answer == '':
        answer = "EMPTY"
    return answer

