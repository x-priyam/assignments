use office;

alter table Employee add foreign key(DNo) references Department(DeptNo) on delete cascade;

select * from Employee;
delete from Department where DeptNo = 4;
select * from Employee;