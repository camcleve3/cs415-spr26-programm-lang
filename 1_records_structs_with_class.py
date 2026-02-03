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
    Student("Alex Johnson", 18, 3.91, "freshman"),
    Student("Cam Smith", 20, 3.84, "sophomore"),
    Student("Carol White", 21, 3.72, "junior")
]

# Display student information
print("=== Student Records (Using Class/Dataclass) ===")
for student in students:
    print(f"Name: {student.name}")
    print(f"Age: {student.age}")
    print(f"GPA: {student.gpa:.2f}")
    print(f"Grade Level: {student.grade_level}")
    print("---")
