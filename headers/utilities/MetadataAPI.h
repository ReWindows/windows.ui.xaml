#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 64 member(s).
namespace DirectUI {
class MetadataAPI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyPropertyInitialized@MetadataAPI@DirectUI@@SAJPEBVCDependencyProperty@@@Z
    static long EnsureDependencyPropertyInitialized(CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltinClassInfoByName@MetadataAPI@DirectUI@@SAPEBVCClassInfo@@AEBVxstring_ptr_view@@@Z
    static CClassInfo const * GetBuiltinClassInfoByName(xstring_ptr_view const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltinNamespaceByName@MetadataAPI@DirectUI@@SAPEBVCNamespaceInfo@@AEBVxstring_ptr_view@@@Z
    static CNamespaceInfo const * GetBuiltinNamespaceByName(xstring_ptr_view const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoByFullName@MetadataAPI@DirectUI@@SAJAEBVxstring_ptr_view@@PEAPEBVCClassInfo@@@Z
    static long GetClassInfoByFullName(xstring_ptr_view const &, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoByIndex@MetadataAPI@DirectUI@@SAPEBVCClassInfo@@W4KnownTypeIndex@@@Z
    static CClassInfo const * GetClassInfoByIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoByTypeName@MetadataAPI@DirectUI@@SAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEBVCClassInfo@@@Z
    static long GetClassInfoByTypeName(::Windows::UI::Xaml::Interop::TypeName, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoFromWinRTPropertyType@MetadataAPI@DirectUI@@SAJPEAUIPropertyValue@Foundation@Windows@@W4PropertyType@45@PEAPEBVCClassInfo@@@Z
    static long GetClassInfoFromWinRTPropertyType(WindissectOpaque *, int, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDependencyPropertyByIndex@MetadataAPI@DirectUI@@SAPEBVCDependencyProperty@@W4KnownPropertyIndex@@@Z
    static CDependencyProperty const * GetDependencyPropertyByIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFriendlyRuntimeClassName@MetadataAPI@DirectUI@@SAJPEAUIInspectable@@PEAVxstring_ptr@@@Z
    static long GetFriendlyRuntimeClassName(IInspectable *, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIDependencyProperty@MetadataAPI@DirectUI@@SAJW4KnownPropertyIndex@@PEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    static long GetIDependencyProperty(int, ::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamespaceByIndex@MetadataAPI@DirectUI@@SAPEBVCNamespaceInfo@@W4KnownNamespaceIndex@@@Z
    static CNamespaceInfo const * GetNamespaceByIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamespaceByName@MetadataAPI@DirectUI@@SAJAEBVxstring_ptr_view@@PEAPEBVCNamespaceInfo@@@Z
    static long GetNamespaceByName(xstring_ptr_view const &, CNamespaceInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveClassInfo@MetadataAPI@DirectUI@@SAJPEBVCClassInfo@@PEAPEBV3@@Z
    static long GetPrimitiveClassInfo(CClassInfo const *, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyBaseByIndex@MetadataAPI@DirectUI@@SAPEBVCPropertyBase@@W4KnownPropertyIndex@@@Z
    static CPropertyBase const * GetPropertyBaseByIndex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MetadataAPI@DirectUI@@SAJPEAUIInspectable@@PEAVxstring_ptr@@@Z
    static long GetRuntimeClassName(IInspectable *, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNameByClassInfo@MetadataAPI@DirectUI@@SAJPEBVCClassInfo@@PEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    static long GetTypeNameByClassInfo(CClassInfo const *, ::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNameByFullName@MetadataAPI@DirectUI@@SAJAEBVxstring_ptr_view@@PEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    static long GetTypeNameByFullName(xstring_ptr_view const &, ::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingDependencyProperty@MetadataAPI@DirectUI@@SAJPEBVCDependencyProperty@@PEAPEBV3@@Z
    static long GetUnderlyingDependencyProperty(CDependencyProperty const *, CDependencyProperty const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssignableFrom@MetadataAPI@DirectUI@@SA_NW4KnownTypeIndex@@0@Z
    static bool IsAssignableFrom(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssignableFrom@MetadataAPI@DirectUI@@SA_NPEBVCClassInfo@@0@Z
    static bool IsAssignableFrom(CClassInfo const *, CClassInfo const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInstanceOfType@MetadataAPI@DirectUI@@SAJPEAUIInspectable@@PEBVCClassInfo@@PEA_N@Z
    static long IsInstanceOfType(IInspectable *, CClassInfo const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLegacyEventName@MetadataAPI@DirectUI@@SA_NPEBVCClassInfo@@AEBVxstring_ptr_view@@@Z
    static bool IsLegacyEventName(CClassInfo const *, xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideMetadataProvider@MetadataAPI@DirectUI@@SAXPEAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Z
    static void OverrideMetadataProvider(::Windows::UI::Xaml::Markup::IXamlMetadataProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperty@MetadataAPI@DirectUI@@SAJ_NPEAUHSTRING__@@UTypeName@Interop@Xaml@UI@Windows@@2PEAUIPropertyMetadata@678@0PEAPEAUIDependencyProperty@678@@Z
    static long RegisterDependencyProperty(bool, HSTRING__*, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::Interop::TypeName, ::Windows::UI::Xaml::IPropertyMetadata *, bool, ::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAttachedPropertyByName@MetadataAPI@DirectUI@@SAJAEBVxstring_ptr_view@@PEAPEBVCDependencyProperty@@@Z
    static long TryGetAttachedPropertyByName(xstring_ptr_view const &, CDependencyProperty const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBoxedType@MetadataAPI@DirectUI@@SAPEBVCClassInfo@@PEBV3@@Z
    static CClassInfo const * TryGetBoxedType(CClassInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBuiltInPropertyBaseByName@MetadataAPI@DirectUI@@SAPEBVCPropertyBase@@PEBVCClassInfo@@AEBVxstring_ptr_view@@_N@Z
    static CPropertyBase const * TryGetBuiltInPropertyBaseByName(CClassInfo const *, xstring_ptr_view const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetClassInfoByName@MetadataAPI@DirectUI@@SAJW4KnownNamespaceIndex@@AEBVxstring_ptr_view@@PEAPEBVCClassInfo@@@Z
    static long TryGetClassInfoByName(int, xstring_ptr_view const &, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDependencyPropertyByFullyQualifiedName@MetadataAPI@DirectUI@@SAJAEBVxstring_ptr_view@@PEAVXamlServiceProviderContext@@PEAPEBVCDependencyProperty@@@Z
    static long TryGetDependencyPropertyByFullyQualifiedName(xstring_ptr_view const &, XamlServiceProviderContext *, CDependencyProperty const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDependencyPropertyByName@MetadataAPI@DirectUI@@SAJPEBVCClassInfo@@AEBVxstring_ptr_view@@PEAPEBVCDependencyProperty@@_N@Z
    static long TryGetDependencyPropertyByName(CClassInfo const *, xstring_ptr_view const &, CDependencyProperty const * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMetadataProvider@MetadataAPI@DirectUI@@SAJPEAPEAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Z
    static long TryGetMetadataProvider(::Windows::UI::Xaml::Markup::IXamlMetadataProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyByFullName@MetadataAPI@DirectUI@@SAJAEBVxstring_ptr_view@@PEAPEBVCPropertyBase@@@Z
    static long TryGetPropertyByFullName(xstring_ptr_view const &, CPropertyBase const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPropertyByName@MetadataAPI@DirectUI@@SAJPEBVCClassInfo@@AEBVxstring_ptr_view@@PEAPEBVCDependencyProperty@@_N@Z
    static long TryGetPropertyByName(CClassInfo const *, xstring_ptr_view const &, CDependencyProperty const * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetUnderlyingDependencyProperty@MetadataAPI@DirectUI@@SAJPEBVCDependencyProperty@@PEAPEBV3@@Z
    static long TryGetUnderlyingDependencyProperty(CDependencyProperty const *, CDependencyProperty const * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateDependencyProperty@MetadataAPI@DirectUI@@CAJPEBVCClassInfo@@PEBVCDependencyProperty@@@Z
    static long AssociateDependencyProperty(CClassInfo const *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateProperty@MetadataAPI@DirectUI@@CAJPEBVCClassInfo@@PEBVCDependencyProperty@@@Z
    static long AssociateProperty(CClassInfo const *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareCustomTypesHelper@MetadataAPI@DirectUI@@CA_NPEBVCClassInfo@@W4KnownTypeIndex@@@Z
    static bool CompareCustomTypesHelper(CClassInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractNamespaceNameAndShortName@MetadataAPI@DirectUI@@CAJAEBVxstring_ptr_view@@PEAVxephemeral_string_ptr@@1@Z
    static long ExtractNamespaceNameAndShortName(xstring_ptr_view const &, xephemeral_string_ptr *, xephemeral_string_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoByXamlType@MetadataAPI@DirectUI@@CAJPEAUIXamlType@Markup@Xaml@UI@Windows@@PEAPEBVCClassInfo@@@Z
    static long GetClassInfoByXamlType(::Windows::UI::Xaml::Markup::IXamlType *, CClassInfo const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoFromObject_Helper@MetadataAPI@DirectUI@@CAJPEAUIInspectable@@PEAPEBVCClassInfo@@_N@Z
    static long GetClassInfoFromObject_Helper(IInspectable *, CClassInfo const * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoFromOtherTypeBox@MetadataAPI@DirectUI@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAPEBVCClassInfo@@@Z
    static long GetClassInfoFromOtherTypeBox(WindissectOpaque *, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportClassInfo@MetadataAPI@DirectUI@@CAJPEAUIXamlType@Markup@Xaml@UI@Windows@@PEAPEBVCClassInfo@@@Z
    static long ImportClassInfo(::Windows::UI::Xaml::Markup::IXamlType *, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportClassInfoFromMetadataProvider@MetadataAPI@DirectUI@@CAJAEBVxstring_ptr_view@@PEAPEBVCClassInfo@@@Z
    static long ImportClassInfoFromMetadataProvider(xstring_ptr_view const &, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportClassInfoFromMetadataProvider@MetadataAPI@DirectUI@@CAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEBVCClassInfo@@@Z
    static long ImportClassInfoFromMetadataProvider(::Windows::UI::Xaml::Interop::TypeName, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportNamespaceInfo@MetadataAPI@DirectUI@@CAJAEBVxstring_ptr_view@@PEAPEBVCNamespaceInfo@@@Z
    static long ImportNamespaceInfo(xstring_ptr_view const &, CNamespaceInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportPropertyInfo@MetadataAPI@DirectUI@@CAJPEBVCClassInfo@@PEAUIXamlMember@Markup@Xaml@UI@Windows@@PEAPEBVCDependencyProperty@@@Z
    static long ImportPropertyInfo(CClassInfo const *, ::Windows::UI::Xaml::Markup::IXamlMember *, CDependencyProperty const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportUnknownClassInfo@MetadataAPI@DirectUI@@CAJUTypeName@Interop@Xaml@UI@Windows@@PEAPEBVCClassInfo@@@Z
    static long ImportUnknownClassInfo(::Windows::UI::Xaml::Interop::TypeName, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRegistrations@MetadataAPI@DirectUI@@CAJXZ
    static long ProcessRegistrations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBuiltinClassInfoByFullName@MetadataAPI@DirectUI@@CAPEBVCClassInfo@@AEBVxstring_ptr_view@@@Z
    static CClassInfo const * TryGetBuiltinClassInfoByFullName(xstring_ptr_view const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetClassInfoByFullName@MetadataAPI@DirectUI@@CAJAEBVxstring_ptr_view@@_NPEAPEBVCClassInfo@@@Z
    static long TryGetClassInfoByFullName(xstring_ptr_view const &, bool, CClassInfo const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDependencyPropertyUsingOWContext@MetadataAPI@DirectUI@@CAJAEBVxstring_ptr_view@@PEAVXamlServiceProviderContext@@PEAPEBVCDependencyProperty@@@Z
    static long TryGetDependencyPropertyUsingOWContext(xstring_ptr_view const &, XamlServiceProviderContext *, CDependencyProperty const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryImportPropertyInfoFromMetadataProvider@MetadataAPI@DirectUI@@CAJPEBVCClassInfo@@AEBVxstring_ptr_view@@PEAPEBVCDependencyProperty@@@Z
    static long TryImportPropertyInfoFromMetadataProvider(CClassInfo const *, xstring_ptr_view const &, CDependencyProperty const * *);
};
} // namespace DirectUI
