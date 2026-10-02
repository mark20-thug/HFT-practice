#pragma once

#include <iostream>
#include <vector>
#include <atomic>

namespace Common {
	template<typename T>
		class LFQueue final{
			private:
				std::vector<T> store_;
				std::atomic<size_t> next_write_index_ = {0};
				std::atomic<size_t> next_read_index_ = {0};
				std::atomic<size_t> num_elements_ = {0};
			};
}

template<typename T>
	class LFQueue final{
		public:
			LFQueue(std::size_t num_elems):
				store_(num_elems, T()) //pre-allocation of vector storage
			{
				LFQueue() = delete;
				LFQueue(const LFQueue&) = delete;
				LFQueue(const LFQueue&&) = delete;
				LFQueue& operator = (const LFQueue&) = delete;
				LFQueue& operator = (const LFQueue&&) = delete;

			}

auto getNextToWriteTo() noexpect{
	return &store_[next_write_index_];
}

auto updateWriteIndex() noexpect{
	next_write_index_ = (next_write_index_ + 1) % store_.size();
	num_elements_++;
}
