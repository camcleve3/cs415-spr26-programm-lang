# Without classes: store data in dictionaries within a list
students = [
    {"name": "Alice Johnson", "age": 18, "gpa": 3.85, "grade_level": "freshman"},
    {"name": "Bob Smith", "age": 19, "gpa": 3.92, "grade_level": "sophomore"},
    {"name": "Carol White", "age": 20, "gpa": 3.76, "grade_level": "junior"}
]

# Display student information
print("=== Student Records (Using Dictionaries) ===")
for student in students:
    print(f"Name: {student['name']}")
    print(f"Age: {student['age']}")
    print(f"GPA: {student['gpa']:.2f}")
    print(f"Grade Level: {student['grade_level']}")
    print("---")
