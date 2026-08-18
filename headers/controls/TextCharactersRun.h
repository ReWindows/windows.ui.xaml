#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace RichTextServices {
class TextCharactersRun {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@TextCharactersRun@RichTextServices@@UEAA?AW4EnumImpl@Result@2@IPEAPEAV12@@Z
    virtual int Split(unsigned int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextCharactersRun@RichTextServices@@QEAA@PEBGIIPEAVTextRunProperties@1@@Z
    TextCharactersRun(unsigned short const *, unsigned int, unsigned int, WindissectOpaque *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextCharactersRun@RichTextServices@@EEAA@XZ
    virtual ~TextCharactersRun();
};
} // namespace RichTextServices
