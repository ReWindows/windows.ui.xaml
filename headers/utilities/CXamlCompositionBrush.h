#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 22 member(s).
class CXamlCompositionBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CXamlCompositionBrush@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CXamlCompositionBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrGetFallbackColorBrush@CXamlCompositionBrush@@QEAA?AV?$ComPtr@UICompositionColorBrush@Composition@UI@Windows@@@WRL@Microsoft@@PEAUICompositor@Composition@UI@Windows@@@Z
    WindissectOpaque CreateOrGetFallbackColorBrush(::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CXamlCompositionBrush@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushForContentRootNoRef@CXamlCompositionBrush@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@PEAVCContentRoot@@@Z
    ::Windows::UI::Composition::ICompositionBrush * GetBrushForContentRootNoRef(CContentRoot *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionBrush@CXamlCompositionBrush@@QEAAJPEBVCUIElement@@PEAUICompositor@Composition@UI@Windows@@PEAPEAUICompositionBrush@456@@Z
    long GetCompositionBrush(CUIElement const *, ::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CXamlCompositionBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CXamlCompositionBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasShouldRenderAsFallbackInIslandsTag@CXamlCompositionBrush@@QEAA_NXZ
    bool HasShouldRenderAsFallbackInIslandsTag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CXamlCompositionBrush@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CXamlCompositionBrush@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcceleratedBrush@CXamlCompositionBrush@@UEAAJAEBUD2DRenderParams@@@Z
    virtual long UpdateAcceleratedBrush(D2DRenderParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSkippedLiveEnter@CXamlCompositionBrush@@MEAAJXZ
    virtual long OnSkippedLiveEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSkippedLiveLeave@CXamlCompositionBrush@@MEAAJXZ
    virtual long OnSkippedLiveLeave();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXamlCompositionBrush@@AEAA@PEAVCCoreServices@@@Z
    CXamlCompositionBrush(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUIElementParent@CXamlCompositionBrush@@AEAA_NXZ
    bool CheckUIElementParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcceleratedBrush@CXamlCompositionBrush@@AEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    long CreateAcceleratedBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireOnConnected@CXamlCompositionBrush@@AEAAJXZ
    long FireOnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireOnDisconnected@CXamlCompositionBrush@@AEAAJXZ
    long FireOnDisconnected();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXamlCompositionBrush@@EEAA@XZ
    virtual ~CXamlCompositionBrush();
};
