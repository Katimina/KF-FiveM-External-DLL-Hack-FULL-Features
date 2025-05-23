using namespace ImGui;

struct color_t {

public:
    float r, g, b, a;

    inline ImColor to_im_color(float alpha = 1.f, bool use_gl_alpha = true) {

        return ImColor(r, g, b, (a * (use_gl_alpha ? GetStyle().Alpha : 1.f)) * alpha);
    }

    inline ImVec4 to_vec1(float alpha = 1.f, bool use_gl_alpha = true) {

        return ImVec4(r, g, b, (a * (use_gl_alpha ? GetStyle().Alpha : 1.f)) * alpha);
    }

};
