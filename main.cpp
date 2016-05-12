#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

void example1() {
    tinyxml2::XMLDocument doc;
    doc.LoadFile("test.xml");
    const char* content= doc.FirstChildElement( "Hello" )->GetText();
    printf( "Hello,%s", content );
      printf("Hello\n");
}

int main() {
    example1();
    return 0;
}
