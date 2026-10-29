# Write your MySQL query statement below
SELECT d.name AS Department,e.name AS Employee,salary AS Salary 
FROM Employee e
JOIN Department d ON d.id = e.departmentId
WHERE e.salary = (SELECT MAX(e1.salary) FROM Employee e1 
WHERE e.departmentId = e1.departmentId);
