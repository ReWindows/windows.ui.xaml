#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CScrollViewer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CScrollViewer@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CScrollViewer@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureManipulationTransformPropertySet@CScrollViewer@@QEAAJPEAPEAUICompositionPropertySet@Composition@UI@Windows@@@Z
    long EnsureManipulationTransformPropertySet(::Windows::UI::Composition::ICompositionPropertySet * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CScrollViewer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentOffsetChanged@CScrollViewer@@QEAAJPEAVCUIElement@@@Z
    long OnContentOffsetChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSharedContentTransformChanged@CScrollViewer@@QEAAJPEAVCUIElement@@@Z
    long OnSharedContentTransformChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CScrollViewer@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CScrollViewer@@IEAA@PEAVCCoreServices@@@Z
    CScrollViewer(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CScrollViewer@@MEAA@XZ
    virtual ~CScrollViewer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationTransformPropertySet@CScrollViewer@@AEAAJPEAUICompositionPropertySet@Composition@UI@Windows@@PEAVCUIElement@@@Z
    long UpdateManipulationTransformPropertySet(::Windows::UI::Composition::ICompositionPropertySet *, CUIElement *);
};
