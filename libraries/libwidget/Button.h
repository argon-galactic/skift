#pragma once

#include <libgraphic/Icon.h>
#include <libwidget/Widget.h>

class Button : public Widget
{
public:
    enum Style
    {
        TEXT,
        OUTLINE,
        FILLED,
    };

private:
    bool _mouse_over = false;
    bool _mouse_press = false;

    Style _style = TEXT;

public:
    Button(Widget *parent, Style style);

    Button(Widget *parent, Style style, RefPtr<Graphic::Icon> icon);

    Button(Widget *parent, Style style, String text);

    Button(Widget *parent, Style style, RefPtr<Graphic::Icon> icon, String text);

    Button(Widget *parent, Style style, RefPtr<Graphic::Bitmap> image, String text);

    void paint(Graphic::Painter &painter, const Recti &rectangle) override;

    void event(Event *event) override;
};
