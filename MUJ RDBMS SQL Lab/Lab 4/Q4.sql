use office;

insert into Department values(1, "Accounts", "Delhi");
insert into Department values(2, "Marketing", "Bangalore");
insert into Department values(3, "HR", "Delhi");
insert into Department values(4, "IT", "Chennai");

insert into Employee values(1, "Priyam", "M", 3000, "Delhi", 4);
insert into Employee values(2, "Shubam", "M", 2500, "Delhi", 4);
insert into Employee values(3, "Ragini", "F", 5000, "Delhi", 3);
insert into Employee values(4, "Ananya", "F", 3000, "Bangalore", 2);
insert into Employee(EmpNo, EmpName, Gender, Address, DNo) values(5, "Varun", "M", "Bangalore", 1);