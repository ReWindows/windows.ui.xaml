#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class TrackerTargetReference {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Assign@TrackerTargetReference@DirectUI@@IEAAAEAV12@$$QEAV12@EE@Z
    TrackerTargetReference & Assign(TrackerTargetReference &&, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TrackerTargetReference@DirectUI@@IEAAKEE@Z
    unsigned long Clear(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTrackerPeg@TrackerTargetReference@DirectUI@@IEAAXXZ
    void ClearTrackerPeg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWithNoCallouts@TrackerTargetReference@DirectUI@@IEAAXPEAPEAUIReferenceTrackerTarget@@PEAPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@PEAPEAVDependencyObject@2@PEAPEAUIUnknown@@@Z
    void ClearWithNoCallouts(IReferenceTrackerTarget * *, ::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal * *, ::DirectUI::DependencyObject * *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsCoreDO@TrackerTargetReference@DirectUI@@IEBAPEAVCDependencyObject@@XZ
    CDependencyObject * GetAsCoreDO() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsDO@TrackerTargetReference@DirectUI@@IEBAPEAUIDependencyObject@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::IDependencyObject * GetAsDO() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsReferenceTrackerUnsafe@TrackerTargetReference@DirectUI@@IEBAPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal * GetAsReferenceTrackerUnsafe() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValueSafeToUse@TrackerTargetReference@DirectUI@@IEBA_NPEAVWeakReferenceSourceNoThreadId@ctl@@@Z
    bool IsValueSafeToUse(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@TrackerTargetReference@DirectUI@@IEAAXW4EReferenceTrackerWalkType@2@@Z
    void ReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TrackerTargetReference@DirectUI@@IEAAXQEAUIUnknown@@EE@Z
    void Set(IUnknown * const, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSafeReference@TrackerTargetReference@DirectUI@@IEBA_NAEBU_GUID@@PEAPEAX@Z
    bool TryGetSafeReference(_GUID const &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSafeReferenceNullValueReturnsTrue@TrackerTargetReference@DirectUI@@IEBA_NAEBU_GUID@@PEAPEAX@Z
    bool TryGetSafeReferenceNullValueReturnsTrue(_GUID const &, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMakeAutoPeg@TrackerTargetReference@DirectUI@@IEAA?AV?$AutoPeg@UIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@$00@ctl@@XZ
    WindissectOpaque TryMakeAutoPeg();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRawValue@TrackerTargetReference@DirectUI@@AEAAXXZ
    void ClearRawValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReferenceTracker@TrackerTargetReference@DirectUI@@AEBAPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal * GetReferenceTracker() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrackerTarget@TrackerTargetReference@DirectUI@@AEBAPEAUIReferenceTrackerTarget@@XZ
    IReferenceTrackerTarget * GetTrackerTarget() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRawValue@TrackerTargetReference@DirectUI@@AEAAXPEAUIUnknown@@PEAUIReferenceTrackerTarget@@PEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@@Z
    void SetRawValue(IUnknown *, IReferenceTrackerTarget *, ::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *);
};
} // namespace DirectUI
