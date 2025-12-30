# text-database
A small text-based database engine: support creating named tables, inserting rows, querying by simple conditions, updating rows, and exporting/importing in a compact binary format.

The database will have three tables representing a small Incident / Ticket Tracking System like in a small company or SOC tracking IT or security incidents.

**Table 1 - Tickets:**
- Ticket ID:	            int             (1024)
- Title:	                char[50]	    ("Suspicious login attempt")
- Category:	                enum / int	    (Security / Network / Hardware)
- Asset ID:                 int (FK)        (301)
- Severity:	                int (1–5)	    (4)
- Status:	                enum / int	    (Open / In Progress / Closed)
- Reporter employee ID:     int (FK)	    (7)
- Date created:             char[11]	    ("2025-03-12")
- Short notes:	            char[200]       ("Multiple failed logins from RU IP")

**Table 2 - Employees:**
- Employee ID:	            int	            (7)
- Username:	                char[20]	    (jsmith)
- First name:	            char[20]	    (John)
- Last name:	            char[20]	    (Smith)
- Department:	            enum / int	    (IT / HR / Finance)
- Role:	                    enum / int	    (Analyst / Engineer / Manager)
- Email:	                char[40]	    (john.smith@company.com)
- Account status:	        enum	        (Active / Disabled)

**Table 3 - Assets:**
- Asset ID:	                int	            (301)
- Hostname:	                char[30]	    (SRV-WEB-01)
- Asset type:	            enum	        (Server / Laptop / Network)
- IP address:	            char[16]	    (192.168.1.10)
- OS:	                    char[30]	    (Ubuntu 22.04)
- Owner employee ID:	    int (FK)	    (12)
- Criticality:	            int (1–5)	    (5)
- Location:	                char[30]	    (DataCenter-A)

## 💡 Key Learnings
_Summarize what you learned overall — techniques, functions, gotchas, or concepts that clicked._  
_Will be filled in at the end of the project_

## 🚀 Future Improvements
_Ideas for expanding or refining the project later._
_Will be filled in at the end of the project_

## 🧰 Tech Used
- **Language**: C
- **APIs / Libraries**:
    - 

# Challenges:


A table is the fundamental database object in SQL (Structured Query Language) used to store and organize data in a structured, relational format, much like a spreadsheet. It is comprised of rows and columns. 

**Key Components of an SQL Table**

- Columns (Fields/Attributes): These define the structure of the data and represent specific attributes or categories of information.
    Each column has a unique name within the table.
    Each column is assigned a specific data type (e.g., INT for integers, VARCHAR for text, DATE for dates), which dictates the kind of data it can hold.
    Constraints can be applied to columns or the entire table to enforce data integrity (e.g., PRIMARY KEY, UNIQUE, NOT NULL, FOREIGN KEY).

- Rows (Records/Tuples): Each row represents a single, complete entry or record within the table. For example, in an "Employees" table, one row would contain all the information related to a single employee.

- Cells: The intersection of a row and a column, which holds a single data value. 

**Example** 
A simple Customers table might look like this:
CustomerID      FirstName	    LastName	    City
-----------------------------------------------------------
1	            Alfreds	        Futterkiste	    Berlin
2	            Ana	            Trujillo	    México D.F.

In this example:
    CustomerID, FirstName, LastName, and City are the columns.
    The data for "Ana Trujillo" is a single row or record. 

**How Tables are Used in SQL**
Tables are the core of a relational database management system (RDBMS). Multiple tables within a database can be related to each other using keys (like primary and foreign keys) to avoid data redundancy and maintain data integrity. 

You use SQL statements to interact with tables: 
- CREATE TABLE: Defines and creates a new table structure.
- INSERT INTO: Adds new rows (records) of data to a table.
- SELECT: Retrieves data from one or more tables.
- UPDATE: Modifies existing data within a table.
- DELETE: Removes rows from a table. 

