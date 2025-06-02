-- Database: CRM

-- Table: registration
CREATE TABLE registration (
    RegNo INT PRIMARY KEY,
    UserID VARCHAR(10) UNIQUE NOT NULL,
    FirstName VARCHAR(10),
    LastName VARCHAR(10),
    Sex VARCHAR(5),
    Address VARCHAR(20),
    Country VARCHAR(10),
    State VARCHAR(10),
    City VARCHAR(10),
    Email VARCHAR(20),
    Password VARCHAR(10),
    Zip NUMERIC(6),
    Mobile NUMERIC(10)
);

-- Table: product_master
CREATE TABLE product_master (
    ProductId VARCHAR(10) PRIMARY KEY,
    ProductName VARCHAR(20),
    ProductDesc VARCHAR(50),
    Company VARCHAR(10),
    ProductPrice SMALLINT,
    Product_Guarantee NUMERIC(2),
    Product_Model_No VARCHAR(10)
);

-- Table: service
CREATE TABLE service (
    Id VARCHAR(5) PRIMARY KEY,
    FirstName VARCHAR(10),
    LastName VARCHAR(10),
    ProviderDetails VARCHAR(20)
);

-- Table: contacts
CREATE TABLE contacts (
    Contact_id INT PRIMARY KEY,
    Company_name VARCHAR(20),
    Location VARCHAR(20),
    Contact_no NUMERIC(10)
);

-- Table: feedback
CREATE TABLE feedback (
    FeedbackDate DATETIME,
    UserId VARCHAR(10),
    Feedback TEXT
);

-- Table: complaints
CREATE TABLE complaints (
    Complaint_Id INT PRIMARY KEY,
    Complaint_date DATETIME,
    Customer_name VARCHAR(20),
    Complaint_details VARCHAR(50)
);

-- Table: user_passwords
CREATE TABLE user_passwords (
    Username VARCHAR(10) PRIMARY KEY,
    Password VARCHAR(10)
);

-- Table: sales
CREATE TABLE sales (
    UserId VARCHAR(10),
    ProductTitle VARCHAR(20)
);

-- Table: customers
CREATE TABLE customers (
    CUST_ID INT PRIMARY KEY,
    CUST_NAME VARCHAR(50),
    CITY VARCHAR(50)
);
