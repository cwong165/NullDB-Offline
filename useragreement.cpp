#include "useragreement.h"

#include <algorithm>
#include <iostream>
#include <string>

bool getUserAgreement() {
  std::string agreement = R"(
Content Removed for more fair grade calculation 6/23/2023 , Chun Ho Wong)";

  std::string userResponse;
  std::cout << std::endl << agreement << std::endl;
  std::cout << "\nDo you agree with these terms? (YES/NO): ";
  std::getline(std::cin, userResponse);

  std::transform(userResponse.begin(), userResponse.end(), userResponse.begin(),
                 ::toupper);
  if (userResponse == "YES" || userResponse == "Y") {
    return true;
  } else {
    return false;
  }
}
