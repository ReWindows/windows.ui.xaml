#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CSolidColorBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSolidColorBrush@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CSolidColorBrush@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSolidColorBrush@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CSolidColorBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CSolidColorBrush@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompColor@CSolidColorBrush@@UEAAPEAUIDCompositionColorPartner2@@PEAUIDCompositionDesktopDeviceRestricted@@@Z
    virtual IDCompositionColorPartner2* GetDCompColor(IDCompositionDesktopDeviceRestricted *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CSolidColorBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSolidColorBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCBrush@CSolidColorBrush@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@PEAUICompositor@345@@Z
    ::Windows::UI::Composition::ICompositionBrush * GetWUCBrush(::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetRenderDirty@CSolidColorBrush@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetRenderDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CSolidColorBrush@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompResourceDirty@CSolidColorBrush@@UEAAXXZ
    virtual void SetDCompResourceDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcceleratedBrush@CSolidColorBrush@@UEAAJAEBUD2DRenderParams@@@Z
    virtual long UpdateAcceleratedBrush(D2DRenderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSolidColorBrush@@UEAA@XZ
    virtual ~CSolidColorBrush();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSolidColorBrush@@IEAA@AEBV0@AEAJ@Z
    CSolidColorBrush(CSolidColorBrush const &, long &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSolidColorBrush@@IEAA@PEAVCCoreServices@@@Z
    CSolidColorBrush(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromStringOrColor@CSolidColorBrush@@IEAAJPEAVCREATEPARAMETERS@@@Z
    long FromStringOrColor(CREATEPARAMETERS *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcceleratedBrush@CSolidColorBrush@@AEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    long CreateAcceleratedBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
};
