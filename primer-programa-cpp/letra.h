#ifndef LETRA_H_
#define LETRA_H_

namespace es
{
	namespace deusto
	{
		class Letra
		{
		private:
			char c;
			static char coma;
		public:
			Letra(char);
			char get();
			void set(char);
			static void setComa(char);
			static char getComa();
		};
	}
}

#endif /* LETRA_H_ */
