#include <source_location>

namespace DoxygenReproducer
{

/**
 * \brief Simple class using std::source_location
 */
class Example
{
   public:
    /**
     * \brief Constructor
     */
    Example(std::source_location location = std::source_location::current());

   private:
    std::source_location location_;
};  // class Example


}

