-- drop the column phoneNo from customer table
use BANK;

alter table CUSTOMER drop column phoneNo;
desc CUSTOMER;