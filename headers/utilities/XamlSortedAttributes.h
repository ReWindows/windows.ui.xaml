#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class XamlSortedAttributes {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIgnoredNamespaces@XamlSortedAttributes@@QEAAJAEBVxstring_ptr@@@Z
    long AddIgnoredNamespaces(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXmlNamespaceDefinition@XamlSortedAttributes@@QEAAJAEBVxstring_ptr@@0AEAW4XamlNamespaceKind@1@@Z
    long IsXmlNamespaceDefinition(xstring_ptr const &, xstring_ptr const &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@XamlSortedAttributes@@QEAAJXZ
    long Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlSortedAttributes@@QEAA@XZ
    ~XamlSortedAttributes();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIgnoredPrefix@XamlSortedAttributes@@AEAAJAEBVxstring_ptr@@@Z
    long AddIgnoredPrefix(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@XamlSortedAttributes@@AEAAJIAEBVXamlLineInfo@@@Z
    long ReportError(unsigned int, XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@XamlSortedAttributes@@AEAAJIAEBVxstring_ptr@@AEBVXamlLineInfo@@@Z
    long ReportError(unsigned int, xstring_ptr const &, XamlLineInfo const &);
};
