char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (new_word && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			new_word = 0;
		}
		else if (strchr(separators, s[i]) != NULL)
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}
		i++;
	}
	return s;
}
