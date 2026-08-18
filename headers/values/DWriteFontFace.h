#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class DWriteFontFace {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DWriteFontFace@@QEAA@PEAUIDWriteFontFace@@PEAVDWriteFontFamily@@@Z
    DWriteFontFace(IDWriteFontFace *, DWriteFontFamily *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DWriteFontFace@@QEAA@PEAUIDWriteFont@@@Z
    DWriteFontFace(IDWriteFont *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@DWriteFontFace@@UEAAIPEAUIFontFace@PALText@@@Z
    virtual unsigned int Equals(::PALText::IFontFace *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesignGlyphAdvances@DWriteFontFace@@UEAAJIPEBGPEAHI@Z
    virtual long GetDesignGlyphAdvances(unsigned int, unsigned short const *, int *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesignGlyphMetrics@DWriteFontFace@@UEAAJPEBGIPEAUGlyphMetrics@PALText@@I@Z
    virtual long GetDesignGlyphMetrics(unsigned short const *, unsigned int, ::PALText::GlyphMetrics *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontFamilyNames@DWriteFontFace@@QEBAJPEAPEAUIDWriteLocalizedStrings@@@Z
    long GetFontFamilyNames(IDWriteLocalizedStrings * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGdiCompatibleGlyphAdvances@DWriteFontFace@@UEAAJMMPEBVCMILMatrix@@PEBUTextOptions@@IIPEBGPEAH@Z
    virtual long GetGdiCompatibleGlyphAdvances(float, float, CMILMatrix const *, TextOptions const *, unsigned int, unsigned int, unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphCount@DWriteFontFace@@UEAAGXZ
    virtual unsigned short GetGlyphCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyphIndicesW@DWriteFontFace@@UEAAJPEBIIPEAG@Z
    virtual long GetGlyphIndicesW(unsigned int const *, unsigned int, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKerningPairAdjustments@DWriteFontFace@@UEAAJIPEBGPEAH@Z
    virtual long GetKerningPairAdjustments(unsigned int, unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetrics@DWriteFontFace@@UEAAXPEAUFontMetrics@PALText@@@Z
    virtual void GetMetrics(::PALText::FontMetrics *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSimulations@DWriteFontFace@@UEAA?AW4Enum@FontSimulations@PALText@@XZ
    virtual int GetSimulations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKerningPairs@DWriteFontFace@@UEAAIXZ
    virtual unsigned int HasKerningPairs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTrueTypeOutlines@DWriteFontFace@@UEAAIXZ
    virtual unsigned int HasTrueTypeOutlines();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCharacterLocal@DWriteFontFace@@UEAAHI@Z
    virtual int IsCharacterLocal(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorFont@DWriteFontFace@@UEAAIXZ
    virtual unsigned int IsColorFont();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonospacedFont@DWriteFontFace@@UEAAIXZ
    virtual unsigned int IsMonospacedFont();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSymbolFont@DWriteFontFace@@UEAAIXZ
    virtual unsigned int IsSymbolFont();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFontOffset@DWriteFontFace@@UEAAJPEAPEBXPEAI1@Z
    virtual long TryGetFontOffset(void const * *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFontTable@DWriteFontFace@@UEAAJIPEAPEBXPEAIPEAPEAX1@Z
    virtual long TryGetFontTable(unsigned int, void const * *, unsigned int *, void * *, unsigned int *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DWriteFontFace@@EEAA@XZ
    virtual ~DWriteFontFace();
};
