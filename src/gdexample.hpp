
#ifndef HPP_GDEXAMPLE_
#define HPP_GDEXAMPLE_

#include <godot_cpp/classes/sprite2d.hpp>


namespace godot
{


class GDExample : public Sprite2D {
    GDCLASS(GDExample, Sprite2D)

private:
    double time_passed{};

protected:
    static void _bind_methods();

public:
    explicit GDExample();

    void _process(double delta) override;
};


} // namespace godot

#endif // ifndef HPP_GDEXAMPLE_
