📚 C++ Project: Library Management System (Design Spec)

🎯 Objective
Build a simple, object-oriented Library Management System in C++ that allows users to manage books and members. The system should support adding books, registering members, borrowing and returning books, and viewing available items.

📌 Entities & Responsibilities
📖 Book
Attributes:
• Unique ID
• Title
• Author
• Availability status (available/borrowed)
Responsibilities:
• Store metadata about a book
• Report its current status (borrowed or not)

👤 Member
Attributes:
• Unique Member ID
• Name
• List of borrowed book IDs (or references)
Responsibilities:
• Maintain record of borrowed books
• Be able to borrow or return a book

🏛️ Library
Attributes:
• List (or vector) of books
• List of members
Responsibilities:
• Add/remove/search books
• Add/search members
• Facilitate book borrowing and returning
• Validate rules (e.g. book availability, member exists)

🔧 Core Functional Requirements

Add Book- Library - Adds a book to collection;
Add Member- Library- Adds a new member;
Search Book - Library - Search by title/author;
Borrow Book - Library - Validate and mark book as borrowed;
Return Book - Library - Mark the book as available again;
View All Books - Library - Show all books with status;
View All Members - Library - Show member details;

⚠️ Optional Constraints & Rules
• A member can borrow up to N books (e.g. 3);
• A book can only be borrowed by one member at a time;
• Members can return only books they have borrowed;
• Prevent duplicate IDs or name clashes if needed;

🖥️ Input/Output Design (CLI)
Build a menu-driven command-line interface (CLI):
- Main loop for interaction
- Present numbered choices (1. Add Book, 2. Add Member, etc.)
- Read input and act accordingly
- Loop until user exits.
