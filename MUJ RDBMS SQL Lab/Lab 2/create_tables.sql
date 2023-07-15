-- creating tables
use BANK;

-- account(account_number, branch_name, balance)
create table ACCOUNT (
    ACCOUNT_NUMBER varchar(15) primary key,
    BRANCH_NAME varchar(15) not null,
    BALANCE integer not null
);
desc ACCOUNT;

-- branch(branch_name, branch_city, assets)
create table BRANCH (
    BRANCH_NAME varchar(15) not null,
    BRANCH_CITY varchar(15) not null,
    ASSETS integer primary key
);
desc BRANCH;

-- customer(customer_name, customer_street, customer_city)
create table CUSTOMER(
    CUSTOMER_NAME varchar(15) primary key,
    CUSTOMER_STREET varchar(15) not null,
    CUSTOMER_CITY varchar(15) not null
);
desc CUSTOMER;

-- loan(loan_number, branch_name, amount)
create table LOAN (
    LOAN_NUMBER varchar(15) primary key,
    BRANCH_NAME varchar(15) not null,
    AMOUNT integer not null
);
desc LOAN;

-- depositor(customer_name, account_number)
create table DEPOSITOR (
    CUSTOMER_NAME varchar(15) not null,
    ACCOUNT_NUMBER varchar(15) not null
);
alter table DEPOSITOR add primary key(CUSTOMER_NAME, ACCOUNT_NUMBER);
desc DEPOSITOR;

-- borrower(customer_name, loan_number)
create table BORROWER (
    CUSTOMER_NAME varchar(15) not null,
    LOAN_NUMBER varchar(15) not null
);
alter table BORROWER add primary key(CUSTOMER_NAME, LOAN_NUMBER);
desc BORROWER;
