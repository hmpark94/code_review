#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

#include <queue>

namespace code_review {
	
template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool empty() const;
		const T& top() const;
		int size();
		void push(const T&);
		void pop();	
};

} // namespace code_review

#endif // PRIORITY_QUEUE_H_
