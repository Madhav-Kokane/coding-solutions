# Department Highest Salary

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Table: `Employee`

```
+--------------+---------+
| Column Name  | Type    |
+--------------+---------+
| id           | int     |
| name         | varchar |
| salary       | int     |
| departmentId | int     |
+--------------+---------+
id is the primary key (column with unique values) for this table.
departmentId is a foreign key (reference columns) of the ID from the Department table.
Each row of this table indicates the ID, name, and salary of an employee. It also contains the ID of their department.

```

 

Table: `Department`

```
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table. It is guaranteed that department name is not NULL.
Each row of this table indicates the ID of a department and its name.

```

 

Write a solution to find employees who have the highest salary in each of the departments.

Return the result table in  **any order**.

The result format is in the following example.

 

 **Example 1:** 

```
Input: 
Employee table:
+----+-------+--------+--------------+
| id | name  | salary | departmentId |
+----+-------+--------+--------------+
| 1  | Joe   | 70000  | 1            |
| 2  | Jim   | 90000  | 1            |
| 3  | Henry | 80000  | 2            |
| 4  | Sam   | 60000  | 2            |
| 5  | Max   | 90000  | 1            |
+----+-------+--------+--------------+
Department table:
+----+-------+
| id | name  |
+----+-------+
| 1  | IT    |
| 2  | Sales |
+----+-------+
Output: 
+------------+----------+--------+
| Department | Employee | Salary |
+------------+----------+--------+
| IT         | Jim      | 90000  |
| Sales      | Henry    | 80000  |
| IT         | Max      | 90000  |
+------------+----------+--------+
Explanation: Max and Jim both have the highest salary in the IT department and Henry has the highest salary in the Sales department.

```

## Solution

**Language:** SQL  
**Runtime:** 912 ms (beats 48.55%)  
**Memory:** 0B (beats 100.00%)  
**Submitted:** 2026-10-31T11:54:03.916Z  

```sql
# Write your MySQL query statement below
-- SELECT 
-- d.name AS Department,
-- e.name AS Employee,
-- e.salary AS Salary
-- FROM Employee as e
-- JOIN Department as d 
-- ON e.departmentId=d.id
-- WHERE e.salary = (
--     SELECT MAX(salary) FROM Employee WHERE departmentId=d.id
-- );


-- HIGHEST SALARY IN EACH DEPARTMENT
with highest_salary AS (
    SELECT departmentId,MAX(salary) AS max_salary FROM employee
    GROUP BY(departmentId)
)

SELECT 
d.name AS Department,
e.name AS Employee,
e.salary AS Salary
FROM 
Employee AS e
JOIN 
Department AS d
ON e.departmentId=d.id
JOIN 
highest_salary as c 
ON e.departmentId=c.departmentId
AND e.salary=c.max_salary;
```

---

[View on LeetCode](https://leetcode.com/problems/department-highest-salary/)