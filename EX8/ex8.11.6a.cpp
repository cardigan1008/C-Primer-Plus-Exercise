//1.顺序出错，应该先读取到非空白字符再丢弃其他输入。
//2.没有使用ctype.h中的issapce(）去丢弃所有非空白字符，而只是丢弃了换行符。
//3.对于1，我又思考了一下，其实没有问题，我每次先获取一个首字符，再次验证，如果不成功就重复上述步骤直到成功
//其实就是相当于之前while进行前的一次初尝试。
//伪代码：
//当用户输入为空白字符
//    提示用户再次输入
//    读取用户输入(其中就包括了对于其他字符的舍弃)
// 上面的循环要求我在循环前进行一次初尝试。 
char get_first(void)
{
	int ch;
	ch = getchar();
	while(getchar() != '\n')
		continue;
	while(ch == '\n')
	{
		ch = getchar();
		while(getchar() != '\n')
			continue;
	}
	
	return ch;	
}

int get_first(void)
{
	// returns first non-whitespace character and clears
	// remaining input until next line break or EOF

	int ch, garbage;

	do {
		ch = getchar();
	}
	while (isspace(ch));
		

	while((garbage = getchar()) != '\n' && garbage != EOF)
		;

	return ch;
}



int get_first(void)
{
	int ch;
	ch = getchar()
	
	while(issapce(ch))
		ch = getchar();
	
	while(getchar() != '\n')
		continue;
	
	return ch;
}


char get_first(void)
{
	int ch;
	ch = getchar();
	while(getchar() != '\n')
		continue;
	while(isspace(ch))
	{
		ch = getchar();
		while(getchar() != '\n')
			continue;
	}
	
	return ch;	
}

