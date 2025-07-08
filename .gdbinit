echo Add pretty printers for MyPoint\n

python
import gdb

class MyPointPrinter:
    def __init__(self, val):
        self._val = val
        self.x = self._val['x']
        self.y = self._val['y']

    def to_string(self):
        if self.x == 0 and self.y == 0:
            return "Zero"
        return "x: %d y: %d" % (self.x, self.y)

    def children(self):
        # Match the natvis expansion items
        children = [
            ('[x]', self.x),
            ('[y]', self.y),
            ('[square]', self.x * self.y),
            ('[module]', self.x * self.x + self.y * self.y)
        ]
        return children

def lookup_type(val):
    if str(val.type) == "MyPoint":
        return MyPointPrinter(val)
    return None

gdb.pretty_printers.append(lookup_type)
end