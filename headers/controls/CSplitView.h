#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
class CSplitView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CSplitView@@UEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanLightDismiss@CSplitView@@QEAA_NXZ
    bool CanLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSplitView@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSplitView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CSplitView@@UEAAJXZ
    virtual long InitInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLightDismissible@CSplitView@@QEAA_NXZ
    bool IsLightDismissible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CSplitView@@UEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CSplitView@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneClosed@CSplitView@@QEAAJXZ
    long OnPaneClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneClosing@CSplitView@@QEAAJXZ
    long OnPaneClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CSplitView@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStop@CSplitView@@QEAAPEAVCDependencyObject@@_NPEAV2@1@Z
    CDependencyObject * ProcessTabStop(bool, CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCloseLightDismissiblePane@CSplitView@@QEAAJXZ
    long TryCloseLightDismissiblePane();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CSplitView@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CSplitView@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSplitView@@AEAA@PEAVCCoreServices@@@Z
    CSplitView(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPaneLength@CSplitView@@AEAANXZ
    double GetOpenPaneLength();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CSplitView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnKeyDown(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLightDismissLayerPointerReleased@CSplitView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnLightDismissLayerPointerReleased(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEventHandlers@CSplitView@@AEAAJXZ
    long RegisterEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSavedFocusElement@CSplitView@@AEAAJXZ
    long RestoreSavedFocusElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToPane@CSplitView@@AEAAJXZ
    long SetFocusToPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEventHandlers@CSplitView@@AEAAJXZ
    long UnregisterEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@CSplitView@@AEAAJXZ
    long UpdateTemplateSettings();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplitView@@EEAA@XZ
    virtual ~CSplitView();
};
