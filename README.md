# Exp-12-Constructors_and_destructors_in_cpp

# CONSTRUCTORS & DESTRUCTORS IN CPP

## Aim  
I studied and implemented Constructors and Destructors.

## Tools Used  
I used VS Code and the Programiz online compiler.

## Theory  
### Constructors in Cpp  
A constructor is a special member function of a class that is automatically invoked when I create an object. Its main job is to initialize data members of the class. A constructor has the same name as the class and does not have a return type (not even void).

# Default Constructor

Takes no arguments and automatically initializes objects with default values.  

class Student {
    int age;
public:
    Student() {  // default constructor
        age = 18;
    }
};

# Parameterized Constructor

Accepts parameters to initialize an object with specific values.

class Student {
    int age;
public:
    Student(int a) {  // parameterized constructor
        age = a;
    }
};


# Copy Constructor

Creates a new object as a copy of an existing object.

class Student {
    int age;
public:
    Student(int a) { age = a; }
    Student(const Student &s) {  // copy constructor
        age = s.age;
    }
};

# Destructors in Cpp

A destructor is a special member function that is automatically invoked when my object goes out of scope or is deleted. Its purpose is to free resources like memory, file handles, or database connections. It has the same name as the class but is preceded with a tilde (~), takes no arguments, and returns nothing.

class Student {
public:
    ~Student() {  // destructor
        cout << "Destructor called, object destroyed" << endl;
    }
};

## Program-1: Default Constructor

This program defines a class Marks with five subjects as data members. The constructor takes input for all subjects when I create an object. In main(), when I declare Marks m1;, the constructor runs automatically and prompts me to enter marks. No destructor or other functions are defined, so the program ends after input.

## Algorithm
# Start
Define a class Marks with five integer data members: MTT, DCLD, EDC, NT, SS.
Define a constructor inside the class that prompts me to enter marks for each subject and stores the input in the respective data members.
In the main() function create an object m1 of class Marks. The constructor is called automatically and inputs are taken.
End

## Program-2: Constructor Outside Class

This program defines a class Marks with five subject marks as data members. The constructor takes input for all marks when I create an object. A separate display() function is defined to print the entered marks. In main(), creating object m1 calls the constructor for input, and then m1.display() shows the stored marks.

## Algorithm
# Start
Define a class Marks with five integer data members: MTT, DCLD, EDC, NT, SS.
Declare a constructor Marks() to prompt me to enter marks for all five subjects and store the input values.
Define a member function display() that outputs all the stored marks.
In the main() function create an object m1 of class Marks. The constructor automatically runs to take input. Call m1.display() to show the entered marks.
End

## Program-3: Parameterized Constructor

This program defines a class Num with two integers as data members. It uses a parameterized constructor to initialize the values of num1 and num2 at the time of object creation. The display() function prints these values. In main(), when I create object n1 with values (23, 78), the constructor sets them, and display() outputs the result.

## Algorithm
# Start
Define a class Num with two integer data members: num1 and num2.
Define a parameterized constructor Num(int a, int b) that assigns a to num1 and b to num2.
Define a member function display() that prints the values of num1 and num2.
In the main() function create an object n1 of class Num by passing values (23, 78) to the constructor. Call n1.display() to output the stored values.
End

## Program-4: Copy Constructor (Printing 2 numbers)

This program demonstrates the use of a copy constructor in C++. The class Num has two integers that are initialized either through a parameterized constructor or by copying another object. When I create object n2 from n1, the copy constructor is called, and it duplicates the values of n1 into n2. The display() function prints the values of both objects.

## Algorithm
# Start
Define a class Num with two integer data members: num1 and num2.
Define a parameterized constructor Num(int a, int b) that assigns a to num1 and b to num2.
Define a copy constructor Num(const Num &n) that copies the values of num1 and num2 from another object n and prints "Copy constructor is called!".
Define a member function display() that outputs the values of num1 and num2.
In the main() function create object n1 with values (23, 78) using the parameterized constructor. Call n1.display() to print its values. Create another object n2 as a copy of n1. The copy constructor is invoked automatically. Call n2.display() to print the copied values.
End

## Program-5: Copy Constructor (Book Details)

This program defines a class Book with data members for book name, author, and price. I use a parameterized constructor to initialize these details when I create an object. A copy constructor duplicates the values of one object into another and prints a message. In main(), book details are entered, stored in object b1, displayed, and then copied into b2 using the copy constructor.

## Algorithm
# Start
Define a class Book with three data members: b_name (string), b_auth (string), and price (float).
Define a parameterized constructor Book(string b, string a, float p) that assigns the values of book name, author, and price.
Define a copy constructor Book(const Book &b) that copies the data members from another object and prints "Copy constructor is called!".
Define a member function display() that outputs the book details.
In the main() function take input from the user for book name, author, and price. Create object b1 using the parameterized constructor and display its details. Create another object b2 as a copy of b1, which automatically calls the copy constructor. Display the details of b2.
End

## Program-6: Destructor (counting number of cars added and discarded)

This program demonstrates the use of constructors and destructors with a static counter. Each time I create a Car object, the constructor increments count and displays the number of objects. When an object goes out of scope, the destructor is called, decrementing count and showing how many objects remain. It illustrates object creation and destruction order in C++.

## Algorithm
# Start
Declare a global integer variable count = 0 to keep track of the number of objects.
Define a class Car with a constructor that increments count by 1 and prints the number of objects created and a destructor that decrements count by 1 and prints the number of objects destroyed.
In the main() function create three objects c1, c2, and c3. Each constructor call increases and displays the count. Create a new block { ... } inside which two more objects c4 and c5 are created. Their constructors update and display the count. When the block ends, destructors of c4 and c5 are called automatically, reducing the count. At the end of main(), destructors of c1, c2, and c3 are called, again decreasing the count step by step.
End

## Program-7: Destructor (without specifying constructor)

This program shows the working of a destructor in C++. The class Date has only a destructor, which prints "Destructor Called" whenever an object is destroyed. In main(), I create four objects (d1, d2, d3, d4), and additional temporary objects inside a loop. As each object goes out of scope, its destructor is automatically invoked. Here, a constructor isn’t specifically written but the default constructor is present.

## Algorithm
# Start
Define a class Date with a destructor that prints "Destructor Called" whenever an object is destroyed.
In the main() function create four objects d1, d2, d3, d4. Enter a for loop that runs 4 times (i = 0 to 3). In each iteration, create a temporary object d1 inside the loop. At the end of each iteration, the loop’s local object d1 goes out of scope, and its destructor is called. After the loop ends, when main() completes, the destructors of d1, d2, d3, d4 (created outside the loop) are invoked automatically in reverse order of creation.
End

## Conclusion

Across these seven programs, I explored how constructors and destructors work in C++. Program 1 and 2 showed how a default constructor can be used to take input at object creation, and how a separate display() function outputs the data. Program 3 introduced a parameterized constructor, allowing initialization of objects with values passed during creation. Program 4 and 5 demonstrated the copy constructor, which duplicates the values of one object into another, ensuring object data can be cloned correctly. Program 6 illustrated the interaction of constructors and destructors using a counter to track object creation and destruction, emphasizing scope and lifetime of objects. Program 7 highlighted how a destructor is automatically invoked when objects go out of scope, including temporary objects inside loops. Together, these programs gave me a complete understanding of object lifecycle in C++, showing how data is initialized, copied, and cleaned up through constructors and destructors.
