#include <osmscout/util/String.h>

#include <TestMain.h>

TEST_CASE("Parse ISO8601 time string") {
  osmscout::Timestamp ts;
  std::string testString="2017-03-12T14:31:56.0Z";
  REQUIRE(osmscout::ParseISO8601TimeString(testString, ts));
  REQUIRE(std::chrono::duration_cast<std::chrono::milliseconds>(ts.time_since_epoch()).count()==1489329116000);
  REQUIRE(osmscout::TimestampToISO8601TimeString(ts)==testString);
}
