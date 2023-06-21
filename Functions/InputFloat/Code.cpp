void InputInt(double* tmp)
{
	while (!(cin >> *tmp) || (cin.peek() != '\n') || (*tmp <= 0))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Incorrect double input!" << endl;
	}
}
