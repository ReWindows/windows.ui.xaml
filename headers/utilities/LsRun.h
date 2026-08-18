#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace RichTextServices::Internal {
class LsRun {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromTextRun@LsRun@Internal@RichTextServices@@SA?AW4EnumImpl@Result@3@IPEBVTextRunData@23@PEAVLsSpan@23@PEAPEAV123@@Z
    static int CreateFromTextRun(unsigned int, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReverseObjectClose@LsRun@Internal@RichTextServices@@SA?AW4EnumImpl@Result@3@IEPEAPEAVLsSpan@23@PEAPEAV123@@Z
    static int CreateReverseObjectClose(unsigned int, unsigned char, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReverseObjectOpen@LsRun@Internal@RichTextServices@@SA?AW4EnumImpl@Result@3@IEPEAPEAVLsSpan@23@PEAPEAV123@@Z
    static int CreateReverseObjectOpen(unsigned int, unsigned char, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpaceLastCharacter@LsRun@Internal@RichTextServices@@QEBAIPEBG@Z
    unsigned int GetSpaceLastCharacter(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasEqualProperties@LsRun@Internal@RichTextServices@@QEBAIPEBV123@@Z
    unsigned int HasEqualProperties(WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LsRun@Internal@RichTextServices@@QEAA@XZ
    ~LsRun();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LsRun@Internal@RichTextServices@@AEAA@IIE@Z
    LsRun(unsigned int, unsigned int, unsigned char);
};
} // namespace RichTextServices::Internal
