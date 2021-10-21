
#include "str_easy.h"

int main()
{
	cout << itc_hello_str("Alex") << endl;
	cout << itc_len("Hello world") << endl;
	itc_print_copy_str("Hello world", 4);
	itc_first_end_three("Hello123456789");
	itc_first_end_three("He");
	cout << itc_count_char_in_str('l', "Hello world!!") << endl;
	cout << itc_count_char_in_str('h', "Hello world!!") << endl;
	cout << itc_count_char_in_str('H', "Hello world!!") << endl;
	cout << itc_even_place("Helloworld") << endl;
	cout << itc_even_place("-123") << endl;
	cout << itc_percent_lower_uppercase("Hello wordl") << endl;
	cout << itc_percent_lower_uppercase("HHaa") << endl;
	cout << itc_percent_lower_uppercase("-GFDSS") << endl;
	cout << itc_reverse_str("0123456789") << endl;
	cout << itc_slice_str("0123456789", 2, 4) << endl;
	cout << itc_slice_str("0123456789", 2, 100) << endl;
	cout << itc_slice_str("0123456789", 100, 2) << endl;
	cout << itc_slice_str("0123456789", 20, 40) << endl;
	cout << itc_slice_str("0123456789", -2, 4) << endl;

	cout << itc_equal_reverse("5544334455") << endl;
	cout << itc_equal_reverse("5") << endl;
	cout << itc_equal_reverse("53") << endl;
	cout << itc_equal_reverse("353") << endl;
	cout << itc_equal_reverse("") << endl;

	cout << itc_cmp_str("", "AA", 2) << endl;
	cout << itc_cmp_str("abc", "AA", 2) << endl;
	cout << itc_cmp_str("ab", "AA", 5) << endl;
	cout << itc_cmp_str("ab", "", 0) << endl;
 cout<<"--Uisww"<<endl;
	cout << itc_find_str("0123456789", "45") << endl;
	cout << itc_find_str("0123456789", "465") << endl;
	cout << itc_find_str("0123456789465", "465") << endl;
	cout << itc_find_str("0123456789465", "4655") << endl;
	 cout<<"--Uisww"<<endl;
	cout << itc_three_str("0123456789", "456", "aaaaaa") << endl;
	cout << itc_three_str("0123456789", "9", "aaaaaa") << endl;
	cout << itc_three_str("0123456789", "0", "aaaaaa") << endl;
	cout << itc_three_str("0123456789", "000", "aaaaaa") << endl;
 cout<<"--Uisww"<<endl;
	/*cout << "hello" << endl;
	cout << itc_max_char_on_end("111") << endl;
	cout << itc_max_char_on_end("111a") << endl;
	cout << itc_max_char_on_end("a111") << endl;
	cout << itc_max_char_on_end("a111a") << endl;
	cout << itc_max_char_on_end("a111a12341234ahfhsjd") << endl;
	cout << itc_max_char_on_end("a111a12341234ahfhsjd1231") << endl;
	cout << itc_max_char_on_end("1 22 333 4444 333 22 1") << endl;
*/

	return 0;
}

