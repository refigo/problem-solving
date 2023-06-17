def solution(n, control):
    for key in control:
        if key == 'w':
            n += 1
        elif key == 's':
            n -= 1
        elif key == 'd':
            n += 10
        elif key == 'a':
            n -= 10
    return n