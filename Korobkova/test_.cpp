#include "postfix.h"
#include <gtest.h>

TEST(TPostfix, can_create_postfix)
{
	ASSERT_NO_THROW(TPostfix p);//�������� ���������� ����������
}

TEST(TPostfix, convert_infix_to_postfix)		//��������������
{
	TPostfix v("a*b+c");
	cout << v.GetInfix() << endl;
	cout << v.GetPostfix() << endl;
	v.ToPostfix();
	cout << v.GetPostfix() << endl;
	EXPECT_EQ(v.GetPostfix(), "ab*c+");
}

TEST(TPostfix, convert_equal_expression)			//��������� ���������� ���������
{
	TPostfix v("b*c");
	v.ToPostfix();
	TPostfix n("(b*c)");
	n.ToPostfix();
	EXPECT_EQ(v.GetPostfix(), n.GetPostfix());
}

TEST(TPostfix, calculation_accuary)					//������������ ����������
{
	TPostfix v("2+2*2");
	v.ToPostfix();
	EXPECT_EQ(v.Calculate(), 6);
}

TEST(TPostfix, convert_infix_with_brackets)		//���������� ��������� ��������� �� ��������
{
	TPostfix v("(a+b)*c+d");
	v.ToPostfix();
	EXPECT_EQ(v.GetPostfix(), "ab+c*d+");
}