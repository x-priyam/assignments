use office;

-- unique primary key
insert into Department values(1, "Payroll", "Delhi");

-- unique candidate key
insert into Department values(5, "Accounts", "Bangalore");

-- valid foreign key
insert into Employee values(6, "Mithil", "M", 4000, "Delhi", 5);

-- gender check
insert into Employee values(6, "Mithil", "X", 1000, "Delhi", 4);

-- address not null (salary has default)
insert into Employee(EmpNo, EmpName, Gender, DNo) values(6, "Mithil", "M", 4);