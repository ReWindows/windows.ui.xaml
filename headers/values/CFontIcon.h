#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CFontIcon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFontIcon@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFontIcon@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CFontIcon@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CFontIcon@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CFontIcon@@MEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CFontIcon@@MEAAJXZ
    virtual long PullInheritedTextFormatting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScaleTransformForFlowDirection@CFontIcon@@AEAAJXZ
    long ApplyScaleTransformForFlowDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CFontIcon@@EEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFontIcon@@EEAA@XZ
    virtual ~CFontIcon();
};
