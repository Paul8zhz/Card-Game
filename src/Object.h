class Object {
public:
    Object();
    virtual ~Object();

    virtual void update(float deltaTime) = 0;
    virtual void Render() = 0;
};