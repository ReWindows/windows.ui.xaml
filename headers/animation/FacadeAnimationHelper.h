#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class FacadeAnimationHelper {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSingleAnimation@FacadeAnimationHelper@@AEAAXW4KnownPropertyIndex@@@Z
    void CancelSingleAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAnimationOnCompletion@FacadeAnimationHelper@@AEAAXPEAVDOFacadeAnimationInfo@@@Z
    void CleanupAnimationOnCompletion(DOFacadeAnimationInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBackingCompositionObjectForFacade@FacadeAnimationHelper@@AEAA?AV?$ComPtr@UICompositionObject@Composition@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque EnsureBackingCompositionObjectForFacade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFacadeReferenceWrapper@FacadeAnimationHelper@@AEAA?AV?$ComPtr@VFacadeReferenceWrapper@@@WRL@Microsoft@@XZ
    WindissectOpaque EnsureFacadeReferenceWrapper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTarget@FacadeAnimationHelper@@CA?AVHString@Wrappers@WRL@Microsoft@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    static ::Microsoft::WRL::Wrappers::HString GetAnimationTarget(::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionTarget@FacadeAnimationHelper@@AEAA?AVStringReference@Internal@Windows@@W4KnownPropertyIndex@@@Z
    ::Windows::Internal::StringReference GetCompositionTarget(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstrumentPopulatePropertyInfo@FacadeAnimationHelper@@CAXW4KnownPropertyIndex@@@Z
    static void InstrumentPopulatePropertyInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstrumentStartSingleAnimation@FacadeAnimationHelper@@CAXW4KnownPropertyIndex@@@Z
    static void InstrumentStartSingleAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateBackingCompositionObjectWithFacade@FacadeAnimationHelper@@AEAAXW4KnownPropertyIndex@@@Z
    void PopulateBackingCompositionObjectWithFacade(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateBackingCompositionObjectWithFacadeIfReferencedImpl@FacadeAnimationHelper@@AEAAXW4KnownPropertyIndex@@@Z
    void PopulateBackingCompositionObjectWithFacadeIfReferencedImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfoImpl@FacadeAnimationHelper@@AEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    long PopulatePropertyInfoImpl(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScopedBatchCompleted@FacadeAnimationHelper@@AEAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Z
    long ScopedBatchCompleted(IInspectable *, ::Windows::UI::Composition::ICompositionBatchCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@FacadeAnimationHelper@@AEAAJPEAUICompositionAnimationGroup@Composition@UI@Windows@@@Z
    long StartAnimationGroup(::Windows::UI::Composition::ICompositionAnimationGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSingleAnimation@FacadeAnimationHelper@@AEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@_N@Z
    long StartSingleAnimation(::Windows::UI::Composition::ICompositionAnimationBase *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@FacadeAnimationHelper@@AEAAJPEAUICompositionAnimationGroup@Composition@UI@Windows@@@Z
    long StopAnimationGroup(::Windows::UI::Composition::ICompositionAnimationGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopSingleAnimation@FacadeAnimationHelper@@AEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@@Z
    long StopSingleAnimation(::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTargetProperty@FacadeAnimationHelper@@AEAAJPEAUHSTRING__@@_NPEAW4KnownPropertyIndex@@PEAPEAU2@@Z
    long ValidateTargetProperty(HSTRING__*, bool, int *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTargetProperty@FacadeAnimationHelper@@AEAAJPEAUICompositionAnimationBase@Composition@UI@Windows@@_NPEAW4KnownPropertyIndex@@PEAPEAUHSTRING__@@@Z
    long ValidateTargetProperty(::Windows::UI::Composition::ICompositionAnimationBase *, bool, int *, HSTRING__* *);
};
