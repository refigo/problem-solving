def solution(a, b, c, d):
    answer = 0
    dice_list = [a,b,c,d]
    game_set = set(dice_list)
    game_set_list = list(game_set)
    len_of_set = len(game_set)
    if len_of_set == 1:
        answer = 1111 * game_set_list[0]
    elif len_of_set == 2:
        frst = game_set_list[0]
        scnd = game_set_list[1]
        cnt_of_frst = dice_list.count(frst)
        if cnt_of_frst == 1:
            answer = (10 * scnd + frst)**2
        elif cnt_of_frst == 3:
            answer = (10 * frst + scnd)**2
        else :
            answer = (frst + scnd) * abs(frst - scnd)
    elif len_of_set == 3:
        answer = 1
        for each in game_set:
            if dice_list.count(each) != 2:
                answer *= each
    else :
        answer = min(game_set)
    return answer