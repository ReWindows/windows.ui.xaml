#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class XBFXamlMetadataProviderWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateXBFXamlMetadataProviderWrapper@XBFXamlMetadataProviderWrapper@DirectUI@@SAJPEAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAPEAU34567@@Z
    static long CreateXBFXamlMetadataProviderWrapper(::Windows::UI::Xaml::Markup::IXamlMetadataProvider *, ::Windows::UI::Xaml::Markup::IXamlMetadataProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlType@XBFXamlMetadataProviderWrapper@DirectUI@@UEAAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEAUIXamlType@Markup@567@@Z
    virtual long GetXamlType(::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlTypeByFullName@XBFXamlMetadataProviderWrapper@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIXamlType@Markup@Xaml@UI@Windows@@@Z
    virtual long GetXamlTypeByFullName(HSTRING__*, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlnsDefinitions@XBFXamlMetadataProviderWrapper@DirectUI@@UEAAJPEAIPEAPEAUXmlnsDefinition@Markup@Xaml@UI@Windows@@@Z
    virtual long GetXmlnsDefinitions(unsigned int *, ::Windows::UI::Xaml::Markup::XmlnsDefinition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XBFXamlMetadataProviderWrapper@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XBFXamlMetadataProviderWrapper@DirectUI@@QEAA@XZ
    XBFXamlMetadataProviderWrapper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XBFXamlMetadataProviderWrapper@DirectUI@@UEAA@XZ
    virtual ~XBFXamlMetadataProviderWrapper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XBFXamlMetadataProviderWrapper@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XBFXamlMetadataProviderWrapper@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@XBFXamlMetadataProviderWrapper@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
