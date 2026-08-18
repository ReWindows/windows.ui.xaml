#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CFontFamily {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFontFamily@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontTypeface@CFontFamily@@QEAAJPEAVCFontContext@@UCFontFaceCriteria@@PEAPEAVCFontTypeface@@@Z
    long GetFontTypeface(CFontContext *, CFontFaceCriteria, CFontTypeface * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextLineBoundsMetrics@CFontFamily@@QEAAJPEAVCFontContext@@W4TextLineBounds@DirectUI@@PEAM2@Z
    long GetTextLineBoundsMetrics(CFontContext *, int, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFontFamily@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@CFontFamily@@QEAAJPEAVxstring_ptr@@@Z
    long get_Source(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@CFontFamily@@QEAAJAEAVxephemeral_string_ptr@@@Z
    long put_Source(xephemeral_string_ptr &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFontFamily@@UEAA@XZ
    virtual ~CFontFamily();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositeFontFamily@CFontFamily@@AEAAJPEAVCFontContext@@@Z
    long EnsureCompositeFontFamily(CFontContext *);
};
