#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CMediaPlayerElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CMediaPlayerElement@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMediaPlayerElement@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMediaPlayerElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTemplateChild@CMediaPlayerElement@@UEAA_NXZ
    virtual bool HasTemplateChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetMediaSourceDirty@CMediaPlayerElement@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetMediaSourceDirty(CDependencyObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresenter@CMediaPlayerElement@@QEAAXPEAVCMediaPlayerPresenter@@@Z
    void SetPresenter(CMediaPlayerPresenter *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaPlayerElement@@UEAA@XZ
    virtual ~CMediaPlayerElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CMediaPlayerElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CMediaPlayerElement@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
};
