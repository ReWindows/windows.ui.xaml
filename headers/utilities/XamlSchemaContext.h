#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class XamlSchemaContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAssembly@XamlSchemaContext@@QEAAJAEBUXamlAssemblyToken@@AEBVxstring_ptr@@@Z
    long AddAssembly(XamlAssemblyToken const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAssemblyXmlnsDefinition@XamlSchemaContext@@QEAAJAEBUXamlAssemblyToken@@AEBVxstring_ptr@@AEBUXamlTypeNamespaceToken@@1@Z
    long AddAssemblyXmlnsDefinition(XamlAssemblyToken const &, xstring_ptr const &, XamlTypeNamespaceToken const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrackXmlns@XamlSchemaContext@@QEAAJAEBVxstring_ptr@@AEAV2@AEA_N@Z
    long CrackXmlns(xstring_ptr const &, xstring_ptr &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushSourceAssembly@XamlSchemaContext@@QEAAJAEBVxstring_ptr@@@Z
    long PushSourceAssembly(xstring_ptr const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlSchemaContext@@QEAA@XZ
    XamlSchemaContext();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlSchemaContext@@QEAA@XZ
    ~XamlSchemaContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushXamlNodeStreamCacheManager@XamlSchemaContext@@AEAAJXZ
    long FlushXamlNodeStreamCacheManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullyQualifiedNameParts@XamlSchemaContext@@AEAAJAEBVxstring_ptr@@PEAV2@11@Z
    long GetFullyQualifiedNameParts(xstring_ptr const &, xstring_ptr *, xstring_ptr *, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XamlSchemaContext@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSpecialXmlNamespaceMap@XamlSchemaContext@@AEAAXXZ
    void InitializeSpecialXmlNamespaceMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeXamlNamespaceDefinitions@XamlSchemaContext@@AEAAJXZ
    long InitializeXamlNamespaceDefinitions();
};
