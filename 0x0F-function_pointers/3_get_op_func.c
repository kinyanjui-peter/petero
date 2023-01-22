int (*get_op_func(char *s))(int, int)
{
	int (*op)(int, int) =  &s;
	op = s;
	if (s != '+' 
