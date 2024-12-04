#include <hippomocks.h>

class IBar {
public:
    virtual ~IBar() {}
    virtual void b() = 0;
};

int main() {
    MockRepository mocks;
    IBar *barMock = mocks.Mock<IBar>();

    mocks.OnCall(barMock, IBar::b);
}
