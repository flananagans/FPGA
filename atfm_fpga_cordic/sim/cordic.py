import math

SCALING_FACTOR = 1
for i in range(100):
    SCALING_FACTOR *= math.cos(math.atan(2**(-i)))

def truncate(num, width):
    width -= 1
    if num > 0:
        return num if num < 2**width else 2**width - 1
    else:
        return num if num >= -2**width else -2**width

class CordicModule():

    def __init__(self, width, num_iterations):
        self._width = width
        self._num_iterations = num_iterations
        self._fixed_angles = [
            round(math.atan(2**(-i))/(2 * math.pi) * 2**width)
            for i in range(num_iterations)
        ]
        self._x_init = math.floor(2**(width - 1) * SCALING_FACTOR)
        self._y_init = 0

    def cossin(self, angle):
        # wrap to -180, +180 range
        old_angle = angle
        angle = 2 * (angle % 2**(self._width - 1)) - angle % 2**self._width
        print(f"old angle: {round(old_angle/2**self._width * 360)} new angle: {round(angle/2**self._width * 360)}")
        quadrant = (angle % 2**self._width) >> (self._width - 2)
        print(f"{angle = } aka {round(angle/2**self._width * 360)} {quadrant = }")
        should_flip = quadrant == 1 or quadrant == 2
        if should_flip:
            print(f"flipping, old angle: {angle/2**self._width * 360}")
            angle = (((1 << (self._width - 1)) - angle) + (2**(self._width - 1))) \
                % 2**(self._width) \
                - 2**(self._width - 1)
            print(f"new angle: {angle/2**self._width * 360}")
        #angle = math.floor(angle) % (2**self._width)
        x = self._x_init
        y = self._y_init
        total_angle = 0
        stages = []
        for i in range(self._num_iterations):
            stages.append( (x, y, total_angle) )
            sign = 1 if total_angle < angle else -1
            new_x = x - (y >> i) * sign
            new_y = y + (x >> i) * sign
            total_angle += self._fixed_angles[i] * sign
            x = new_x
            y = new_y
        stages.append( (
            truncate(-x if should_flip else x, self._width),
            truncate(y, self._width),
            total_angle)
        )
        return stages

    def cossin_f(self, angle):
        return self.cossin( round((angle/(2 * math.pi)) * 2**self._width) )

    def to_f(self, tup):
        return (tup[-1][0]/(2**(self._width-1)), tup[-1][1]/(2**(self._width-1)))

if __name__ == "__main__":
    module = CordicModule(24, 24)

    # do a sweep
    max_num = 24
    for i in range(max_num):
        angle = (i/max_num) * 2.0 * math.pi
        print("--------------")
        print(module.to_f(module.cossin_f(angle)))
        print(math.cos(angle))
        print(math.sin(angle))