#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace RichTextServices {
class TextCollapsingCharacters {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@TextCollapsingCharacters@RichTextServices@@UEAA?AW4EnumImpl@Result@2@PEAVTextDrawingContext@2@AEBUXPOINTF@@MW4Enum@FlowDirection@2@@Z
    virtual int Draw(WindissectOpaque *, XPOINTF const &, float, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidth@TextCollapsingCharacters@RichTextServices@@UEBAMXZ
    virtual float GetWidth() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextCollapsingCharacters@RichTextServices@@QEAA@PEBGIPEBMMW4Enum@FlowDirection@1@PEAVTextRunProperties@1@PEAUIFontFace@PALText@@@Z
    TextCollapsingCharacters(unsigned short const *, unsigned int, float const *, float, int, WindissectOpaque *, ::PALText::IFontFace *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextCollapsingCharacters@RichTextServices@@MEAA@XZ
    virtual ~TextCollapsingCharacters();
};
} // namespace RichTextServices
