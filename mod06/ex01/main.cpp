#include "Serializer.h"

int	main()
{
	using	std::cout;
	using	std::endl;

	struct Data data = {100, "Test message"};
	Data*		data_ptr = &data;
	uintptr_t	uint_nbr;

	cout << "Struct fields:\n\t" << data_ptr->data_i_ << "\n\t" << data.str
		<< endl;
	cout << "Struct ptr Data* address is: " << data_ptr << '\n' << endl;
	uint_nbr = Serializer::Serialize(data_ptr);
	cout << "Uintptr_t representation of struct Data:\n\t" << uint_nbr
			<< '\n' << endl;
	data_ptr =  nullptr;
	data_ptr = Serializer::Deserialize(uint_nbr);
	cout << "Struct fields after deserialize:\n\t" << data_ptr->data_i_ <<
		"\n\t" << data.str << endl;
	cout << "Struct ptr Data* address after deserialize is: "
		<< data_ptr << endl;
	return (0);
}