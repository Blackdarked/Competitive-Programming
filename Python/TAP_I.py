from manim import *
from manim_presentation import Slide

class Demo(Slide):
    def construct(self):
        t1 = Tex("TAP I")
        t2 = Tex("Session 1").next_to(t1, DOWN * 3)
        t3 = Tex("Overview").next_to(t2, DOWN)
        t4 = Tex("Instructor: Ho Le Vu").next_to(t3, DOWN)

        self.play(Write(t1, run_time=1.75), Write(t2, run_time=1.75), Write(t3, run_time=1.75), Write(t4, run_time=1.5))
        self.pause()

        t5 = Tex("Slide No 2").move_to([-5.75,3.5,0])
        t6 = Tex("Start Recording...").move_to([0,0,0])
        
        self.play(Unwrite(t1, run_time=1.75), Unwrite(t2, run_time=1.75), Unwrite(t3, run_time=1.75), Unwrite(t4, run_time=1.5))
        self.play(Write(t5, run_time=1.5), Write(t6, run_time=1.5))
        self.pause()

        self.play(Unwrite(t5, run_time=1.5), Unwrite(t6, run_time=1.5))
        self.pause()