SELECT project_id,ROUND(AVG(experience_years),2) AS average_years 
FROM Employee 
JOIN Project p ON p.employee_id = Employee.employee_id
GROUP BY project_id
