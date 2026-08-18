#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class FontFallbackAnalysisSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleName@FontFallbackAnalysisSource@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleName(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocaleNameList@FontFallbackAnalysisSource@@UEAAJIPEAIPEAPEBG@Z
    virtual long GetLocaleNameList(unsigned int, unsigned int *, unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberSubstitution@FontFallbackAnalysisSource@@UEAAJIPEAIPEAPEAUIDWriteNumberSubstitution@@@Z
    virtual long GetNumberSubstitution(unsigned int, unsigned int *, IDWriteNumberSubstitution * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParagraphReadingDirection@FontFallbackAnalysisSource@@UEAA?AW4Enum@ReadingDirection@PALText@@XZ
    virtual int GetParagraphReadingDirection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextAtPosition@FontFallbackAnalysisSource@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextAtPosition(unsigned int, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBeforePosition@FontFallbackAnalysisSource@@UEAAJIPEAPEBGPEAI@Z
    virtual long GetTextBeforePosition(unsigned int, unsigned short const * *, unsigned int *);
private:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@FontFallbackAnalysisSource@@EEAAIXZ
    virtual unsigned int AddRef();
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@FontFallbackAnalysisSource@@EEAAIXZ
    virtual unsigned int Release();
};
