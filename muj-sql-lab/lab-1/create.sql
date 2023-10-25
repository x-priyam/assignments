-- creating databse
create database uni;
use uni;

-- creating table
create table STUDENT (
  RollNo integer,
  FName text,
  M1 integer,
  M2 integer
);


-- adding primary key
alter table STUDENT add primary key (RollNo);


-- Checking if primary key is working
insert into STUDENT values(1234, "priyam", 90, 80);
insert into STUDENT values(1234, "ritik", 40, 30);


-- Adding 9 more entries and show table
insert into STUDENT values(1236, "sid", 59, 31);
insert into STUDENT values(1237, "harshit", 77, 96);
insert into STUDENT values(1238, "mithil", 33, 47);
insert into STUDENT values(1239, "ragini", 29, 99);
insert into STUDENT values(1240, "ananya", 88, 40);
insert into STUDENT values(1241, "sam", 87, 59);
insert into STUDENT values(1242, "vinul", 17, 67);
insert into STUDENT values(1243, "saniya", 66, 57);
insert into STUDENT values(1244, "riya", 22, 68);

select * from STUDENT;

-- Show FName of students who have more than 50 in M1
select FName from STUDENT where M1 > 50;