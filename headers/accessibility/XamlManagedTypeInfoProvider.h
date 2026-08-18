#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 27 member(s).
class XamlManagedTypeInfoProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseType@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetBaseType(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemType@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetCollectionItemType(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProperty@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetContentProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentWrapper@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetContentWrapper(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeclaringType@XamlManagedTypeInfoProvider@@UEAAJUXamlPropertyToken@@AEAUXamlTypeToken@@@Z
    virtual long GetDeclaringType(XamlPropertyToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDictionaryKeyProperty@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetDictionaryKeyProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@XamlManagedTypeInfoProvider@@UEAAJUXamlPropertyToken@@PEAVxstring_ptr@@@Z
    virtual long GetPropertyName(XamlPropertyToken, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeNameProperty@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetRuntimeNameProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceAssembly@XamlManagedTypeInfoProvider@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetSourceAssembly(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSyntaxForProperty@XamlManagedTypeInfoProvider@@UEAAJUXamlPropertyToken@@AEAUXamlTypeToken@@@Z
    virtual long GetTextSyntaxForProperty(XamlPropertyToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSyntaxForType@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetTextSyntaxForType(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeFullName@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@PEAVxstring_ptr@@@Z
    virtual long GetTypeFullName(XamlTypeToken, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeName@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@PEAVxstring_ptr@@@Z
    virtual long GetTypeName(XamlTypeToken, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNamespace@XamlManagedTypeInfoProvider@@UEAAJAEBVxstring_ptr@@AEAUXamlTypeNamespaceToken@@@Z
    virtual long GetTypeNamespace(xstring_ptr const &, XamlTypeNamespaceToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNamespace@XamlManagedTypeInfoProvider@@UEAAJAEBVxstring_ptr@@0AEAUXamlTypeNamespaceToken@@@Z
    virtual long GetTypeNamespace(xstring_ptr const &, xstring_ptr const &, XamlTypeNamespaceToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNamespaceForType@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlTypeNamespaceToken@@PEAVxstring_ptr@@@Z
    virtual long GetTypeNamespaceForType(XamlTypeToken, XamlTypeNamespaceToken &, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlLangProperty@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetXmlLangProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssignableFrom@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@0AEAI@Z
    virtual long IsAssignableFrom(XamlTypeToken, XamlTypeToken, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupPropertyFlags@XamlManagedTypeInfoProvider@@UEAAJUXamlPropertyToken@@AEBV?$XamlBitSet@W4BoolPropertyBits@@@@AEAV3@2@Z
    virtual long LookupPropertyFlags(XamlPropertyToken, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupTypeFlags@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEBV?$XamlBitSet@W4BoolTypeBits@@@@AEAV3@2@Z
    virtual long LookupTypeFlags(XamlTypeToken, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAssembly@XamlManagedTypeInfoProvider@@UEAAJAEBVxstring_ptr@@AEAUXamlAssemblyToken@@@Z
    virtual long ResolveAssembly(xstring_ptr const &, XamlAssemblyToken &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDependencyPropertyName@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEBVxstring_ptr@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long ResolveDependencyPropertyName(XamlTypeToken, xstring_ptr const &, XamlPropertyToken &, XamlTypeToken &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePropertyName@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeToken@@AEBVxstring_ptr@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long ResolvePropertyName(XamlTypeToken, xstring_ptr const &, XamlPropertyToken &, XamlTypeToken &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTypeName@XamlManagedTypeInfoProvider@@UEAAJUXamlTypeNamespaceToken@@AEBVxstring_ptr@@AEAUXamlTypeToken@@@Z
    virtual long ResolveTypeName(XamlTypeNamespaceToken, xstring_ptr const &, XamlTypeToken &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPropertyImpl@XamlManagedTypeInfoProvider@@AEAAJUXamlTypeToken@@PEAUXamlPropertyToken@@PEAU2@@Z
    long GetContentPropertyImpl(XamlTypeToken, XamlPropertyToken *, XamlTypeToken *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCore@XamlManagedTypeInfoProvider@@AEAAJPEAPEAVCCoreServices@@@Z
    long GetCore(CCoreServices * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTypeWithSpecifiedNamespaceId@XamlManagedTypeInfoProvider@@AEAA_NW4KnownNamespaceIndex@@AEBVxstring_ptr@@PEAUXamlTypeToken@@@Z
    bool TryGetTypeWithSpecifiedNamespaceId(int, xstring_ptr const &, XamlTypeToken *);
};
