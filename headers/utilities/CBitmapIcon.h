#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CBitmapIcon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapIcon@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBitmapIcon@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CBitmapIcon@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBitmapIcon@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyForegroundColorToImage@CBitmapIcon@@IEAAJPEAVCSolidColorBrush@@@Z
    long ApplyForegroundColorToImage(CSolidColorBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CBitmapIcon@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWritableBitmapFromSource@CBitmapIcon@@IEAAJXZ
    long CreateWritableBitmapFromSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBitmapImageResources@CBitmapIcon@@IEAAXXZ
    void ReleaseBitmapImageResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWriteableBitmapResources@CBitmapIcon@@IEAAXXZ
    void ReleaseWriteableBitmapResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadSourceImage@CBitmapIcon@@IEAAJXZ
    long ReloadSourceImage();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapIcon@@AEAA@PEAVCCoreServices@@@Z
    CBitmapIcon(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapIcon@@EEAA@XZ
    virtual ~CBitmapIcon();
};
