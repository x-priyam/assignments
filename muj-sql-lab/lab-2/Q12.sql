-- add a column phone number to customer table
use BANK;

alter table CUSTOMER add phoneNo varchar(10);
desc CUSTOMER;