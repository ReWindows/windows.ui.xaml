#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class SecondaryContentRelationshipFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClipTransformRelationship@SecondaryContentRelationshipFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@NNPEAPEAUISecondaryContentRelationship@Internal@456@@Z
    virtual long CreateClipTransformRelationship(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, double, double, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateParallaxRelationship@SecondaryContentRelationshipFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@IQEANI2PEAPEAUISecondaryContentRelationship@Internal@456@@Z
    virtual long CreateParallaxRelationship(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, unsigned int, double * const, unsigned int, double * const, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStaticElementRelationship@SecondaryContentRelationshipFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@EEPEAPEAUISecondaryContentRelationship@Internal@456@@Z
    virtual long CreateStaticElementRelationship(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, unsigned char, unsigned char, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStickyHeaderRelationship@SecondaryContentRelationshipFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@1NNNPEAPEAUISecondaryContentRelationship@Internal@456@@Z
    virtual long CreateStickyHeaderRelationship(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject *, double, double, double, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SecondaryContentRelationshipFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SecondaryContentRelationshipFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SecondaryContentRelationshipFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SecondaryContentRelationshipFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClipTransformRelationshipImpl@SecondaryContentRelationshipFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@NNPEAPEAUISecondaryContentRelationship@Internal@456@@Z
    long CreateClipTransformRelationshipImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, double, double, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateParallaxRelationshipImpl@SecondaryContentRelationshipFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@IQEANI2PEAPEAUISecondaryContentRelationship@Internal@456@@Z
    long CreateParallaxRelationshipImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, unsigned int, double * const, unsigned int, double * const, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStaticElementRelationshipImpl@SecondaryContentRelationshipFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@EEPEAPEAUISecondaryContentRelationship@Internal@456@@Z
    long CreateStaticElementRelationshipImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, unsigned char, unsigned char, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStickyHeaderRelationshipImpl@SecondaryContentRelationshipFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAUIDependencyObject@456@1NNNPEAPEAUISecondaryContentRelationship@Internal@456@@Z
    long CreateStickyHeaderRelationshipImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject *, double, double, double, ::Windows::UI::Xaml::Internal::ISecondaryContentRelationship * *);
};
} // namespace DirectUI
