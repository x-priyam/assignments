create database company;
use company;

-- create table
create table EMPLOYEE (
  EID integer primary key,
  EName text not null,
  ESal integer not null
);

desc EMPLOYEE;

-- Adding 10 entries and show table
insert into EMPLOYEE values(101, "priyam", 1500);
insert into EMPLOYEE values(102, "ragini", 1700);
insert into EMPLOYEE values(103, "ananya", 9800);
insert into EMPLOYEE values(104, "sam", 4700);
insert into EMPLOYEE values(105, "vinul", 5600);
insert into EMPLOYEE values(106, "saniya", 7700);
insert into EMPLOYEE values(107, "ritik", 7200);
insert into EMPLOYEE values(108, "mithil", 2900);
insert into EMPLOYEE values(109, "harshit", 8400);
insert into EMPLOYEE values(110, "riya", 6800);

select * from EMPLOYEE;

-- Show name of employess with salary more than 5000
select EName from EMPLOYEE where ESal > 5000;