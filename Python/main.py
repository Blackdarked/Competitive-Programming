from manim import *
from manim_slides import *

class demo(Scene):
    def construct(self):
        t = Triangle()
        s = Square(2)
        c = Circle(1)
        text = Text('M')

        t.set_stroke(RED, opacity=1).set_fill(RED, opacity=1).scale(1).shift(RIGHT)
        s.set_stroke(PURPLE_A, opacity=1).set_fill(PURPLE_A, opacity=1).shift(UP)
        c.set_stroke(GREEN, opacity=1).set_fill(GREEN, opacity=1).shift(LEFT)
        text.set_stroke(WHITE, opacity=1).set_fill(opacity=0.1).scale(3).shift(UL).fade(family=0)

        self.play(DrawBorderThenFill(t))
        self.wait()
        self.play(DrawBorderThenFill(s))
        self.wait()
        self.play(DrawBorderThenFill(c))
        self.wait()
        self.play(DrawBorderThenFill(text))