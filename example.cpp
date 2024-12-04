class IBar {
public:
    virtual ~IBar() {}
    virtual void b() = 0;
};

int main() {
    MockRepository mocks;
    IBar *barMock = mocks.InterfaceMock<IBar>();

    mocks.OnCall(barMock, IBar::b);
}
