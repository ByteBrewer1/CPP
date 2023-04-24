if __name__ == '__main__':
    # STEP 1 : CREATE LIST RESULTS, NAME, SCORE AND SECOND LOWEST NAMES
    # STEP 2 : SCAN DATA
    # STEP 3 : SORT THE SCORES
    # STEP 4 : FIND THE LOWEST MARK
    # STEP 5 : APPEND NAMES IN SECOND LOWEST NAMES
    # STEP 6 : SORT THEM
    # STEP 7 : PRINT THEM
    results = []
    scores = []
    second_lowest_names = []
    second_lowest_marks = 0
    
    for i in range(int(input())):
        name = input()
        score = float(input())
        scores.append(score)
        results.append([name, score])

        scores.sort()
    for num in scores:
        if num != min(scores):
            second_lowest_marks = num
            break
    for i in results:
        if i[1] == second_lowest_marks:
            second_lowest_names.append(i[0])
        else:
            continue
    second_lowest_names.sort()
    for j in second_lowest_names:
        print(j)