//1.˳�����Ӧ���ȶ�ȡ���ǿհ��ַ��ٶ����������롣
//2.û��ʹ��ctype.h�е�issapce(��ȥ�������зǿհ��ַ�����ֻ�Ƕ����˻��з���
//3.����1������˼����һ�£���ʵû�����⣬��ÿ���Ȼ�ȡһ�����ַ����ٴ���֤��������ɹ����ظ���������ֱ���ɹ�
//��ʵ�����൱��֮ǰwhile����ǰ��һ�γ����ԡ�
//α���룺
//���û�����Ϊ�հ��ַ�
//    ��ʾ�û��ٴ�����
//    ��ȡ�û�����(���оͰ����˶��������ַ�������)
// �����ѭ��Ҫ������ѭ��ǰ����һ�γ����ԡ� 
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

