# include "libft.h"

#define test1 printf("Test 1 OK!\n")
#define test2 printf("Test 2 OK!\n")
#define test3 printf("Test 3 OK!\n")
#define test4 printf("Test 4 OK!\n")
#define error1 printf("Error test 1\n")
#define error2 printf("Error test 2\n")
#define error3 printf("Error test 3\n")
#define error4 printf("Error test 4\n")
#define testi printf("Test %d OK!\n", i + 1)
#define errori printf("error test %d!\n", i + 1)

void	test_ft_atoi()
{
	int	i = 1;
	typedef struct {
		char	*str;
		int	result;
	} atoi_input;
	atoi_input tests[] = {
	{"  001000", 1000},
	{"  +-1000", 0},
	{"  -1000", -1000},
	{"   -234234344243", -2147483648},
	{"  2147483648", 2147483647},
	{NULL, 0}
	};
	while (tests[i].str != NULL)
	{
		if (ft_atoi(tests[i].str) == tests[i].result)
			printf("Test %d OK!\n", i);
		else
			printf("Error test %d.\n", i);
		i++;
	}		
}

void	test_ft_bzero()
{
	char	string[] = "Hello World";
	int	arr[] = {1, 2, 3, 4, 5};
	ft_bzero(string, 5);
	if (ft_memcmp(string, "\0\0\0\0\0 World", 5) == 0)
		printf("Test 1 OK!\n");
	ft_bzero(arr, sizeof (int) * 5);
	int i;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] != 0)
		{
			printf("Error test 2!\n");
			break;
		}
	}
	if (i == 5)
		printf("Test 2 OK!\n");
}

void	test_ft_calloc()
{
	int	*arr;
	int i;
	arr = ft_calloc(10, sizeof (int));
	for (i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
			error1;
	}
	if (i == 10)
		test1;
	char	*str;
	str = ft_calloc(10, 1);
	int j;
	for (j = 0; j < 10; j++)
	{
		if(str[j] != '\0')
			error2;
	}
	if (j == 10)
		test2;
}

void	test_ft_isalnum()
{
	typedef struct{
		char	c;
		int	result;
	} isalnum_test;
	int	i = 0;
	isalnum_test inputs[] = {
		{'a', 1},
		{'6', 1},
		{' ', 0},
		{'\0', 0}
	};
	while (inputs[i].c != '\0')
	{
		if (ft_isalnum(inputs[i].c) == inputs[i].result)
			testi;
		else
			errori;
		i++;
	}
}

void	test_ft_isalpha()
{
	typedef struct{
		char	c;
		int	result;
	} isalpha_test;
	int	i = 0;
	isalpha_test inputs[] = {
		{'a', 1},
		{'6', 0},
		{' ', 0},
		{'B', 1},
		{'\0', 0}
	};
	while (inputs[i].c != '\0')
	{
		if (ft_isalpha(inputs[i].c) == inputs[i].result)
			testi;
		else
			errori;
		i++;
	}
}

void	test_ft_isascii()
{
	typedef struct{
		char	c;
		int	result;
	} isascii_test;
	int	i = 0;
	isascii_test inputs[] = {
		{'a', 1},
		{200, 0},
		{' ', 1},
		{'\0', 0}
	};
	while (inputs[i].c != '\0')
	{
		if (ft_isascii(inputs[i].c) == inputs[i].result)
			testi;
		else
			errori;
		i++;
	}
}



void	test_ft_isdigit()
{
	typedef struct{
		char	c;
		int	result;
	} isdigit_test;
	int	i = 0;
	isdigit_test inputs[] = {
		{'a', 0},
		{'6', 1},
		{' ', 0},
		{'B', 0},
		{'\0', 0}
	};
	while (inputs[i].c != '\0')
	{
		if (ft_isdigit(inputs[i].c) == inputs[i].result)
			testi;
		else
			errori;
		i++;
	}
}

void	test_ft_isprint()
{
	typedef struct{
		char	c;
		int	result;
	} isprint_test;
	int	i = 0;
	isprint_test inputs[] = {
		{'a', 1},
		{10, 0},
		{' ', 1},
		{4, 0},
		{'\0', 0}
	};
	while (inputs[i].c != '\0')
	{
		if (ft_isprint(inputs[i].c) == inputs[i].result)
			testi;
		else
			errori;
		i++;
	}
}

void	test_ft_itoa()
{
	typedef struct{
		int	n;
		char	*result;
	} itoa_test;
	itoa_test inputs[] = {
		{2000, "2000"},
		{2147483647, "2147483647"},
		{0, "0"},
		{-40, "-40"},
		{-2147483648, "-2147483648"},
		{0, NULL}
	};
	int i = 0;
	while (inputs[i].result != NULL)
	{
		if (ft_strcmp(ft_itoa(inputs[i].n), inputs[i].result) == 0)
			testi;
		else
		{
			errori;
			printf("%s\n", ft_itoa(inputs[i].n));
		}
		i++;
	}
}



typedef struct{
	char *name;
	void (*func)();
} function_names;

void	which_function_to_test(char *str)
{
	int	i = 0;
	function_names function[] = {
		{"ft_atoi", test_ft_atoi},
		{"ft_bzero", test_ft_bzero},
		{"ft_calloc", test_ft_calloc},
		{"ft_isalnum", test_ft_isalnum},
		{"ft_isalpha", test_ft_isalpha},
		{"ft_isascii", test_ft_isascii},
		{"ft_isdigit", test_ft_isdigit},
		{"ft_isprint", test_ft_isprint},
		{"ft_itoa", test_ft_itoa},
	/*	{"ft_memchr", test_ft_memchr},
		{"ft_memcmp", test_ft_memcmp},
		{"ft_memmove", test_ft_memmove},
		{"ft_memset", test_ft_memset},
		{"ft_split", test_ft_split},
		{"ft_strchr", test_ft_split},
		{"ft_strcmp", test_ft_strcmp},
		{"ft_strdup", test_ft_strdup},
		{"ft_strjoin", test_ft_strjoin},
		{"ft_strlcat", test_ft_strlcat},
		{"ft_strlcpy", test_ft_strlcpy},
		{"ft_strlen", test_ft_strlen},
		{"ft_strncmp", test_ft_strncmp},
		{"ft_strnstr", test_ft_strnstr},
		{"ft_strrchr", test_ft_strrchr},
		{"ft_strtrim", test_ft_strtrim},
		{"ft_substr", test_ft_substr},
		{"ft_tolower", test_ft_tolower},
		{"ft_toupper", test_ft_toupper},*/
		{NULL, NULL}
	};
	
	while (function[i].name != NULL)
	{
		if(strcmp(function[i].name, str) == 0)
		{	
			printf("We're testing function %s\n", str);
			function[i].func();
			break;
		}
		i++;
	}
	if (function[i].name == NULL)
		printf("Could not find this function.\n");
}

int	main(void)
{		
	int	testing_choice;
	printf("Choose manual or automatic testing.\n");
	printf("1 = Automatic	2 = Manual\n");
	while (1)
	{
		scanf("%d", &testing_choice);
		while (testing_choice == 2)
		{
			printf("Write the name of the function you want to test.\n");
			char	function_to_test[50];
			scanf("%49s", function_to_test);
			which_function_to_test(function_to_test);
			printf("To test another function enter 1. To quit enter 2.\n");
			int	testmore;
			scanf("%d", &testmore);
			if (testmore == 1)
				continue;
			else if (testmore == 2)
				return(0);
			else
				printf("Wrong input!\n");

		}
	/*	else if (testing_choice == 1)
		{


			break ;
		}
		else
			printf("Wrong input!\nChoose again.\n1 for Automatic testing or 2 for Manual testing.\n");*/
	}
}
