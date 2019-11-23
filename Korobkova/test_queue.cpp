#include "queue.h"
#include <gtest.h>

using namespace std;
TEST(Queue, can_create_queue_with_positive_length)
{
	ASSERT_NO_THROW(Queue<int> q(5));
}

TEST(Queue, cant_create_too_large_size_of_queue)
{
	ASSERT_ANY_THROW(Queue<int> q(MAXsizeQ + 1));
}

TEST(Queue, throws_when_create_queue_with_negative_length)
{
	ASSERT_ANY_THROW(Queue<int> q(-5));
}

TEST(Queue, not_can_pop_if_queue_empty)
{
	Queue<int> q(3);
	ASSERT_ANY_THROW(q.pop());				
}

TEST(Queue, not_can_push_if_stack_full)
{
	Queue<int> q(3);
	for (int k = 0; k < 3; k++)			
		q.push(1);
	ASSERT_ANY_THROW(q.push(4));
}

TEST(Queue, can_push_and_pop_element)
{
	Queue<int> q(4);
	q.push(1);
	EXPECT_EQ(q.pop(), 1);						
}

TEST(Queue, full_is_correct_1)
{
	Queue<int> q(4);
	EXPECT_EQ(q.is_full(), false);						
}

TEST(Queue, full_is_correct_2)
{
	Queue<int> q(1);
	q.push(5);
	EXPECT_EQ(q.is_full(), true);						
}

TEST(Queue, empty_is_correct_1)
{
	Queue<int> STACK(4);
	EXPECT_EQ(q.is_empty(), true);
}

TEST(Queue, empty_is_correct_2)
{
	Queue<int> q(1);
	q.push(5);
	EXPECT_EQ(q.is_empty(), false);						
}