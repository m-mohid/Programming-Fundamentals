students = int(input("Number of Students: "))
student_name = []
student_marks = []
student_grade = []
grade = ["A", "B", "C", "F"]
for i in range(students):
    name = input("Enter your Name: ")
    student_name.append(name)
    marks = int(input("Enter your Total Marks: "))
    student_marks.append(marks)
    if student_marks[i] >= 80:
        student_grade.append(grade[0])
    elif student_marks[i] >= 60 and student_marks[i] < 80:
        student_grade.append(grade[1])
    elif student_marks[i] >= 40 and student_marks[i] < 60:
        student_grade.append(grade[2])
    else:
        student_grade.append(grade[3])

for i in range(students):
    print("Name: ", student_name[i])
    print("Total Marks: ", student_marks[i])
    print("Grade: ", student_grade[i])
    print()

max = student_marks[0]
location = 0

for i in range(students):
    if (max < student_marks[i]):
        max = student_marks[i]
        location = i

print("The highest marks are: ", max)
print("The highest marks are achieved by: ", student_name[location])

sum = 0
average = 0

for i in range(students):
    sum = sum + student_marks[i]
    average = sum / students

print("The average of all students is: ", average)

