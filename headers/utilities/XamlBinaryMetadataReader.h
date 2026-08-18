#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class XamlBinaryMetadataReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMetadata@XamlBinaryMetadataReader@@QEAAJXZ
    long LoadMetadata();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryMetadataReader@@UEAA@XZ
    virtual ~XamlBinaryMetadataReader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAssemblyList@XamlBinaryMetadataReader@@AEAAJXZ
    long LoadAssemblyList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPropertyList@XamlBinaryMetadataReader@@AEAAJXZ
    long LoadPropertyList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStringTable@XamlBinaryMetadataReader@@AEAAJXZ
    long LoadStringTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTypeList@XamlBinaryMetadataReader@@AEAAJXZ
    long LoadTypeList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTypeNamespaceList@XamlBinaryMetadataReader@@AEAAJXZ
    long LoadTypeNamespaceList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXmlNamespaceList@XamlBinaryMetadataReader@@AEAAJXZ
    long LoadXmlNamespaceList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDeserializationError@XamlBinaryMetadataReader@@AEAAJAEBVxstring_ptr@@@Z
    long LogDeserializationError(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogError@XamlBinaryMetadataReader@@AEAAJIAEBVxstring_ptr@@0@Z
    long LogError(unsigned int, xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOffsetCheckError@XamlBinaryMetadataReader@@AEAAJAEBVxstring_ptr@@@Z
    long LogOffsetCheckError(xstring_ptr const &);
};
