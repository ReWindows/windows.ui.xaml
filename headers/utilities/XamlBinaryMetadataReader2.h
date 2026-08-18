#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class XamlBinaryMetadataReader2 {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXbfHash@XamlBinaryMetadataReader2@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr GetXbfHash() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMetadata@XamlBinaryMetadataReader2@@QEAAJXZ
    long LoadMetadata();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryMetadataReader2@@QEAA@XZ
    ~XamlBinaryMetadataReader2();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@XamlBinaryMetadataReader2@@AEBAJIAEAVxstring_ptr@@@Z
    long GetString(unsigned int, xstring_ptr &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAssemblyList@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadAssemblyList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHeader@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadProperty@XamlBinaryMetadataReader2@@AEAAJI@Z
    long LoadProperty(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPropertyList@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadPropertyList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadStringTable@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadStringTable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadType@XamlBinaryMetadataReader2@@AEAAJI@Z
    long LoadType(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTypeList@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadTypeList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTypeNamespace@XamlBinaryMetadataReader2@@AEAAJI@Z
    long LoadTypeNamespace(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTypeNamespaceList@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadTypeNamespaceList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXmlNamespace@XamlBinaryMetadataReader2@@AEAAJI@Z
    long LoadXmlNamespace(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadXmlNamespaceList@XamlBinaryMetadataReader2@@AEAAJXZ
    long LoadXmlNamespaceList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDeserializationError@XamlBinaryMetadataReader2@@AEAAJAEBVxstring_ptr@@@Z
    long LogDeserializationError(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogError@XamlBinaryMetadataReader2@@AEAAJIAEBVxstring_ptr@@0@Z
    long LogError(unsigned int, xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOffsetCheckError@XamlBinaryMetadataReader2@@AEAAJAEBVxstring_ptr@@@Z
    long LogOffsetCheckError(xstring_ptr const &);
};
