#include <string>

struct int_ptr_holder
{
public:
	int_ptr_holder(int* data_) : data{ data_ }, mut_data{ data_ } {}

	int_ptr_holder(const int* data_) : data{ data_ }, mut_data{ nullptr } {}

	int* get_mutable_data() {
		return mut_data;
	}

	const int* get_data() const { return data; }

private:
	const int* data = nullptr;
	int* mut_data = nullptr;
};

int main()
{
	int i = 42;

	int_ptr_holder h{ &i };
	*h.get_mutable_data() = 15;

	return *h.get_data();
}