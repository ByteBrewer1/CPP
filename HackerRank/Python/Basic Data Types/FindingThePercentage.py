if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        score = list(map(float, line))
        student_marks[name] = score
    query_name = input()
    # Write Your Program here
    marks = student_marks[query_name]
    avg_marks = sum(marks) / len(marks)
    print(format(avg_marks, '.2f'))