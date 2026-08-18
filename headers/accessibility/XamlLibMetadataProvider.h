#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
namespace Windows::UI::Xaml::Phone_XamlTypeInfo {
class XamlLibMetadataProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlType@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJUTypeName@Interop@345@PEAPEAUIXamlType@Markup@345@@Z
    virtual long GetXamlType(::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlTypeByFullName@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIXamlType@Markup@345@@Z
    virtual long GetXamlTypeByFullName(HSTRING__*, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlnsDefinitions@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJPEAIPEAPEAUXmlnsDefinition@Markup@345@@Z
    virtual long GetXmlnsDefinitions(unsigned int *, ::Windows::UI::Xaml::Markup::XmlnsDefinition * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@QEAA@XZ
    XamlLibMetadataProvider();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlTypeByFullNameWorker@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIXamlType@Markup@345@@Z
    long GetXamlTypeByFullNameWorker(HSTRING__*, ::Windows::UI::Xaml::Markup::IXamlType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProviders@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@AEAAXXZ
    void InitializeProviders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDependencyProperties@XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@AEAAXXZ
    void ResetDependencyProperties();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlLibMetadataProvider@Phone_XamlTypeInfo@Xaml@UI@Windows@@EEAA@XZ
    virtual ~XamlLibMetadataProvider();
};
} // namespace Windows::UI::Xaml::Phone_XamlTypeInfo
