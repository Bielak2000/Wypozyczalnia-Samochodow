#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Pojazd.h"
#include "../Project1/Pojazd.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestZmienCene
{
	TEST_CLASS(TestZmienCene)
	{
	public:
		
		TEST_METHOD(TestZmienCeneWPojazd)
		{
			Pojazd p;
			int nowa_cena = 150;
			p.zmien_cene_pojazdu(nowa_cena);
			Assert::AreEqual(p.get_cena_za_godzine(), nowa_cena);
		}
	};
}
