#include "str_easy.h"
string itc_cmp_str(string str1, string str2, int num)
{
	long long len = itc_len(str1);
	long long len2= itc_len(str2);
	if (num >= len)
		return str1;
	for (long long i = num; (i < num + len2) && (i < len); i++)
	{
		str1[i] = str2[i - num];
	}
	return str1;
}
