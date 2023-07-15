-- drop database office;
create database office;
use office;

create table Employee(
    EmpNo integer primary key,
    EmpName varchar(20) not null,
    Gender char not null check(Gender like 'M' or Gender like 'F'),
    Salary integer not null default 1000,
    Address varchar(20) not null,
    DNo integer
);