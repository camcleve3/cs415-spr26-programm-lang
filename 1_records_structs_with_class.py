from dataclasses import dataclass

@dataclass
class Student:
    """Student record using a class (equivalent to struct)"""
    name: str
    age: int
    gpa: float
    grade_level: str

# Create a list of students
students = [
    Student("Alice Johnson", 18, 3.85, "freshman"),
    Student("Bob Smith", 19, 3.92, "sophomore"),
    Student("Carol White", 20, 3.76, "junior")
]

# Display student information
print("=== Student Records (Using Class/Dataclass) ===")
for student in students:
    print(f"Name: {student.name}")
    print(f"Age: {student.age}")
    print(f"GPA: {student.gpa:.2f}")
    print(f"Grade Level: {student.grade_level}")
    print("---")
