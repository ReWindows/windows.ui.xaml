#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CCompositeFontFamily {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositeFontFamily@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositeFontFamily@@QEAA@PEAVIFontAndScriptServices@@@Z
    CCompositeFontFamily(IFontAndScriptServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromDWrite@CCompositeFontFamily@@SAJPEAVIFontAndScriptServices@@PEAVIFontCollection@@PEAPEAV1@@Z
    static long CreateFromDWrite(IFontAndScriptServices *, IFontCollection *, CCompositeFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNew@CCompositeFontFamily@@SAJPEAVIFontAndScriptServices@@PEAVIFontCollection@@PEAUIPALUri@@PEAUCSharedName@@PEAPEAV1@@Z
    static long CreateNew(IFontAndScriptServices *, IFontCollection *, IPALUri *, CSharedName *, CCompositeFontFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontTypeface@CCompositeFontFamily@@QEAAAEBV?$xref_ptr@VCFontTypeface@@@@UCFontFaceCriteria@@@Z
    WindissectOpaque const & GetFontTypeface(CFontFaceCriteria);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineMetrics@CCompositeFontFamily@@QEAAJPEAM00@Z
    long GetLineMetrics(float *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLineBoundsMetrics@CCompositeFontFamily@@QEAAJW4TextLineBounds@DirectUI@@PEAM1@Z
    long GetTextLineBoundsMetrics(int, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupNominalFontFace@CCompositeFontFamily@@QEAAJUCFontFaceCriteria@@PEAPEAUIFontFace@PALText@@@Z
    long LookupNominalFontFace(CFontFaceCriteria, ::PALText::IFontFace * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapCharacters@CCompositeFontFamily@@QEAAJPEBGI00PEBUNumberSubstitutionData@@UCFontFaceCriteria@@PEAPEAUIFontFace@PALText@@PEAIPEAM@Z
    long MapCharacters(unsigned short const *, unsigned int, unsigned short const *, unsigned short const *, NumberSubstitutionData const *, CFontFaceCriteria, ::PALText::IFontFace * *, unsigned int *, float *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositeFontFamily@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositeFontFamily@@QEAA@XZ
    ~CCompositeFontFamily();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAddLookup@CCompositeFontFamily@@AEAAJPEAVIFontCollection@@AEBVxstring_ptr_view@@PEAPEAUIFontFallbackBuilder@PALText@@@Z
    long CreateAndAddLookup(IFontCollection *, xstring_ptr_view const &, ::PALText::IFontFallbackBuilder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineDefaultLineMetrics@CCompositeFontFamily@@AEAAJXZ
    long DetermineDefaultLineMetrics();
};
