

int a, b, c = 1;

void setA(void)
{
	a = 1;
}

void setB(void)
{
	b = 1;
}

int check(void)
{
	test_assert(a == 1);
	return a == 1;
}

int main(void)
{
	while(c) {
		if (b == 0)
			goto L;

		if (check()) {
			c = 0;
L:
			setA();
			setB();
		}
	}

	return 0;
}
