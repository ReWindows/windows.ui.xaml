#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class PALFontAndScriptServices {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PALFontAndScriptServices@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDefaultLanguageString@PALFontAndScriptServices@@UEAAJXZ
    virtual long ClearDefaultLanguageString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomFontFace@PALFontAndScriptServices@@UEAAJPEAVCUIElement@@IPEBGPEAUIPALUri@@HW4Enum@FontSimulations@PALText@@PEAPEAUIFontFace@6@@Z
    virtual long CreateCustomFontFace(CUIElement *, unsigned int, unsigned short const *, IPALUri *, int, int, ::PALText::IFontFace * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontCollectionFromMemory@PALFontAndScriptServices@@UEAAJPEAUCSharedName@@PEAUIPALMemory@@PEAPEAVIFontCollection@@@Z
    virtual long CreateFontCollectionFromMemory(CSharedName *, IPALMemory *, IFontCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontCollectionFromUri@PALFontAndScriptServices@@UEAAJPEAUIPALUri@@IPEAGPEAPEAVIFontCollection@@@Z
    virtual long CreateFontCollectionFromUri(IPALUri *, unsigned int, unsigned short *, IFontCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontFallbackBuilder@PALFontAndScriptServices@@UEAAJPEAPEAUIFontFallbackBuilder@PALText@@@Z
    virtual long CreateFontFallbackBuilder(::PALText::IFontFallbackBuilder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGlyphAnalyzer@PALFontAndScriptServices@@UEAAJPEAPEAUIGlyphAnalyzer@PALText@@@Z
    virtual long CreateGlyphAnalyzer(::PALText::IGlyphAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScriptAnalyzer@PALFontAndScriptServices@@UEAAJPEAPEAUIScriptAnalyzer@PALText@@@Z
    virtual long CreateScriptAnalyzer(::PALText::IScriptAnalyzer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextAnalyzer@PALFontAndScriptServices@@UEAAJPEAPEAUITextAnalyzer@PALText@@@Z
    virtual long CreateTextAnalyzer(::PALText::ITextAnalyzer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreServices@PALFontAndScriptServices@@UEAAPEAVCCoreServices@@XZ
    virtual CCoreServices * GetCoreServices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFontNameString@PALFontAndScriptServices@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetDefaultFontNameString(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultLanguageString@PALFontAndScriptServices@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetDefaultLanguageString(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFontCollection@PALFontAndScriptServices@@UEAAJPEAPEAVIFontCollection@@@Z
    virtual long GetSystemFontCollection(IFontCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFontFallback@PALFontAndScriptServices@@UEAAJPEAPEAUIFontFallback@PALText@@@Z
    virtual long GetSystemFontFallback(::PALText::IFontFallback * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUltimateFallbackFontFamily@PALFontAndScriptServices@@UEAAJPEAPEAVCCompositeFontFamily@@@Z
    virtual long GetUltimateFallbackFontFamily(CCompositeFontFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUltimateFont@PALFontAndScriptServices@@UEAAJPEAPEAVCFontFamily@@@Z
    virtual long GetUltimateFont(CFontFamily * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PALFontAndScriptServices@@QEAA@PEAVCCoreServices@@PEAUIFontAndScriptServicesFactory@PALText@@@Z
    PALFontAndScriptServices(CCoreServices *, ::PALText::IFontAndScriptServicesFactory *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PALFontAndScriptServices@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSystemFontCollection@PALFontAndScriptServices@@QEAAXXZ
    void ResetSystemFontCollection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PALFontAndScriptServices@@UEAA@XZ
    virtual ~PALFontAndScriptServices();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@PALFontAndScriptServices@@AEAAJPEAUIPALUri@@IPEBGPEAPEAUIPALResource@@@Z
    long GetResource(IPALUri *, unsigned int, unsigned short const *, IPALResource * *);
};
