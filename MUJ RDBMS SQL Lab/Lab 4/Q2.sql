use office;

create table Department(
    DeptNo integer primary key,
    DeptName varchar(20) unique,
    Location varchar(20)
);
