#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class XamlNativeTypeInfoProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseType@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetBaseType(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionItemType@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetCollectionItemType(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProperty@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetContentProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentWrapper@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetContentWrapper(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeclaringType@XamlNativeTypeInfoProvider@@UEAAJUXamlPropertyToken@@AEAUXamlTypeToken@@@Z
    virtual long GetDeclaringType(XamlPropertyToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDictionaryKeyProperty@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetDictionaryKeyProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@XamlNativeTypeInfoProvider@@UEAAJUXamlPropertyToken@@PEAVxstring_ptr@@@Z
    virtual long GetPropertyName(XamlPropertyToken, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeNameProperty@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetRuntimeNameProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSyntaxForProperty@XamlNativeTypeInfoProvider@@UEAAJUXamlPropertyToken@@AEAUXamlTypeToken@@@Z
    virtual long GetTextSyntaxForProperty(XamlPropertyToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextSyntaxForType@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAU2@@Z
    virtual long GetTextSyntaxForType(XamlTypeToken, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeFullName@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@PEAVxstring_ptr@@@Z
    virtual long GetTypeFullName(XamlTypeToken, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeName@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@PEAVxstring_ptr@@@Z
    virtual long GetTypeName(XamlTypeToken, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNamespace@XamlNativeTypeInfoProvider@@UEAAJAEBVxstring_ptr@@AEAUXamlTypeNamespaceToken@@@Z
    virtual long GetTypeNamespace(xstring_ptr const &, XamlTypeNamespaceToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNamespace@XamlNativeTypeInfoProvider@@UEAAJAEBVxstring_ptr@@0AEAUXamlTypeNamespaceToken@@@Z
    virtual long GetTypeNamespace(xstring_ptr const &, xstring_ptr const &, XamlTypeNamespaceToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNamespaceForType@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlTypeNamespaceToken@@PEAVxstring_ptr@@@Z
    virtual long GetTypeNamespaceForType(XamlTypeToken, XamlTypeNamespaceToken &, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlLangProperty@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long GetXmlLangProperty(XamlTypeToken, XamlPropertyToken &, XamlTypeToken &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssignableFrom@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@0AEAI@Z
    virtual long IsAssignableFrom(XamlTypeToken, XamlTypeToken, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupPropertyFlags@XamlNativeTypeInfoProvider@@UEAAJUXamlPropertyToken@@AEBV?$XamlBitSet@W4BoolPropertyBits@@@@AEAV3@2@Z
    virtual long LookupPropertyFlags(XamlPropertyToken, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupTypeFlags@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEBV?$XamlBitSet@W4BoolTypeBits@@@@AEAV3@2@Z
    virtual long LookupTypeFlags(XamlTypeToken, WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAssembly@XamlNativeTypeInfoProvider@@UEAAJAEBVxstring_ptr@@AEAUXamlAssemblyToken@@@Z
    virtual long ResolveAssembly(xstring_ptr const &, XamlAssemblyToken &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDependencyPropertyName@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEBVxstring_ptr@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long ResolveDependencyPropertyName(XamlTypeToken, xstring_ptr const &, XamlPropertyToken &, XamlTypeToken &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePropertyName@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeToken@@AEBVxstring_ptr@@AEAUXamlPropertyToken@@AEAU2@@Z
    virtual long ResolvePropertyName(XamlTypeToken, xstring_ptr const &, XamlPropertyToken &, XamlTypeToken &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTypeName@XamlNativeTypeInfoProvider@@UEAAJUXamlTypeNamespaceToken@@AEBVxstring_ptr@@AEAUXamlTypeToken@@@Z
    virtual long ResolveTypeName(XamlTypeNamespaceToken, xstring_ptr const &, XamlTypeToken &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullClassNameByIndex@XamlNativeTypeInfoProvider@@AEAAJW4KnownTypeIndex@@PEAVxstring_ptr@@@Z
    long GetFullClassNameByIndex(int, xstring_ptr *);
};
