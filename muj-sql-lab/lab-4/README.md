## Lab 4 Experiments
Consider the following schema:
```
Employee (EmpNo, EmpName, Gender, Salary, Address, DNo)
Department (DeptNo, DeptName, Location)
```

### Questions
1. Create Employee table with following constraints:
    * Make `EmpNo` as Primary key
    * Do not allow `EmpName`, `Gender`, `Salary` and `Address` to have null values
    * Allow `Gender` to have one of the two values: `M`, `F`
    * Set the default salary value to `Rs. 1000`
2. Create Department table with following:
    * Make `DeptNo` as Primary key
    * Make `DeptName` as candidate key
3. Make `DNo` of Employee as foreign key which refers to `DeptNo` of Department
4. Insert few tuples into Employee and Department which satisfies the above constraints
5. Insert few tuples into Employee and Department which violates some of the above constraints
6. Modify the foreign key constraint of Employee table such that whenever a department tuple is deleted, the employees belonging to that department will also be deleted
