#include <fstream>
#include <string>
int main(int argc, char* argv[]) {
  if (argc != 4) return 0;
  std::ifstream input(argv[1]);
  std::ofstream output(argv[3]);
  std::string line;
  while (!input.eof()) {
    std::getline(input, line);
    output << "#pragma/*\n" << line << "\n#pragma*/\n";
  }
  input.close(), input.open(argv[2]);
  while (!input.eof()) {
    std::getline(input, line);
    if (line[line.find_first_not_of(' ')] == '#')
      output << line << '\n';
    else
      output << "#define None " << line << "\nNone\n";
  }
  input.close(), output.close();
}