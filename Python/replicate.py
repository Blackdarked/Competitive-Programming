from manim import *

class rep(Scene):
    def construct(self):
        c = Circle(0.5, RED, stroke_width=10, fill_opacity=0.3)
        s = SurroundingRectangle(c, BLUE, corner_radius=0.1)
        t = Text("Manim").next_to(s, UP, 0.5)

        self.play(Write(c), DrawBorderThenFill(s), Write(t))
        self.wait()
        
        g = VGroup(c, s)

        self.play(t.animate.move_to([-4, 0, 0]), g.animate.move_to([4, 0, 0]))
        self.wait()

        a = always_redraw(lambda: Line(g.get_left(), t.get_right(), 0.5).add_tip(tip_shape=StealthTip).add_tip(tip_shape=StealthTip, at_start=1))

        self.play(DrawBorderThenFill(a))
        self.wait()

        self.play(Indicate(t, 1.5, ORANGE))
        self.wait()

        self.play(Rotate(s, PI/2), ScaleInPlace(c, 2))
        self.wait()

        self.play(g.animate.move_to([0, 0, 0]))
        self.wait()

        self.play(Unwrite(a), Unwrite(t))
        self.play(ShrinkToCenter(s), ScaleInPlace(c, 30))
        self.play(FadeOut(c))
        self.wait()