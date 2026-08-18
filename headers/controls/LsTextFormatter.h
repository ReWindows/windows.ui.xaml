#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace RichTextServices::Internal {
class LsTextFormatter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatLine@LsTextFormatter@Internal@RichTextServices@@UEAA?AW4EnumImpl@Result@3@PEAVTextSource@3@IMPEAVTextParagraphProperties@3@PEAVTextLineBreak@3@PEAVTextRunCache@3@PEAPEAVTextLine@3@@Z
    virtual int FormatLine(WindissectOpaque *, unsigned int, float, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LsTextFormatter@Internal@RichTextServices@@MEAA@XZ
    virtual ~LsTextFormatter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLsContext@LsTextFormatter@Internal@RichTextServices@@AEAA?AW4EnumImpl@Result@3@XZ
    int CreateLsContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClientCallbacks@LsTextFormatter@Internal@RichTextServices@@AEBAXAEAUlscbk@Ptls6@@@Z
    void InitClientCallbacks(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitTextConfiguration@LsTextFormatter@Internal@RichTextServices@@AEBAXAEAUlstxtcfg@Ptls6@@@Z
    void InitTextConfiguration(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateWrappingWidth@LsTextFormatter@Internal@RichTextServices@@CAMM@Z
    static float ValidateWrappingWidth(float);
};
} // namespace RichTextServices::Internal
