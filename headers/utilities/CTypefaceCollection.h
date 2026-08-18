#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CTypefaceCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTypefaceCollection@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePALWrapper@CTypefaceCollection@@SAJPEAVIFontAndScriptServices@@PEAUIFontCollection@PALText@@PEAV1@PEAPEAV1@@Z
    static long CreatePALWrapper(IFontAndScriptServices *, ::PALText::IFontCollection *, CTypefaceCollection *, CTypefaceCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCompositeFontFamily@CTypefaceCollection@@UEAAJPEAUCSharedName@@PEAUIPALUri@@PEAPEAVCCompositeFontFamily@@@Z
    virtual long LookupCompositeFontFamily(CSharedName *, IPALUri *, CCompositeFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupDefaultFontFamily@CTypefaceCollection@@QEAAJPEAPEAVCCompositeFontFamily@@@Z
    long LookupDefaultFontFamily(CCompositeFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupPhysicalFontFamily@CTypefaceCollection@@UEAAJPEAUCSharedName@@PEAPEAUIFontFamily@PALText@@@Z
    virtual long LookupPhysicalFontFamily(CSharedName *, ::PALText::IFontFamily * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTypefaceCollection@@UEAAIXZ
    virtual unsigned int Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTypefaceCollection@@AEAA@XZ
    CTypefaceCollection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTypefaceCollection@@AEAA@XZ
    ~CTypefaceCollection();
};
