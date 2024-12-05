#include <hippomocks.h>
#include <cpptrace/from_current.hpp>

class IBar {
public:
    virtual ~IBar() {}
    virtual void b() = 0;
};

int main() {
    MockRepository mocks;
    IBar *barMock = mocks.Mock<IBar>();
    CPPTRACE_TRY {
        mocks.OnCall(barMock, IBar::b);
    } CPPTRACE_CATCH(const std::exception& e) {
        cpptrace::from_current_exception().print();
    }
}
