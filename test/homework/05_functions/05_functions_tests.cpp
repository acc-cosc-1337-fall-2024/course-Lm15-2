#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"func.h"

TEST_CASE("gc content") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.50);
}
TEST_CASE("verify dna complemet")
{
	REQUIRE(get_dna_complement("AGCTATAG") == "GATATCGA");
	REQUIRE(get_dna_complement("CGCTATAG") == "GATATCGC");
}
TEST_CASE("verify reverse")
{
	REQUIRE(reverse_string("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(reverse_string("CCCGGAAAAT") == "ATTTTCCGGG");
}
