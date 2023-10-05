int main()
{
	// Create and populate 3 employees using C++20 designated initializers.
	HR::Employee employee1{
		.firstInitial = 'J',
			.lastInitial = 'W',
			.employeeNumber = 42,
			.salary = 80'000,
			.title = HR::Title::SeniorEngineer
	};

	array<HR::Employee, 3> employees{
		employee1, employee2, employee3

	for (const auto& employee : employees) {
		// output the values of an employee
		cout << format("Employee: {}{}", employee.firstInitial,
			employee.lastInitial) << endl;
		cout << format("Number: {}", employee.employeeNumber) << endl;
		cout << format("Salary: ${}", employee.salary) << endl;
	}
}