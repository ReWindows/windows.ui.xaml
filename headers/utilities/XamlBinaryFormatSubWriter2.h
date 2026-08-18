#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class XamlBinaryFormatSubWriter2 {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNodeStreamOffset@XamlBinaryFormatSubWriter2@@QEAAJPEA_K@Z
    long GetNodeStreamOffset(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XamlBinaryFormatSubWriter2@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Persist7BitEncodedInt@XamlBinaryFormatSubWriter2@@QEAAJIAEBV?$xref_ptr@UIPALStream@@@@@Z
    long Persist7BitEncodedInt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistConstant@XamlBinaryFormatSubWriter2@@QEAAJAEBVCValue@@@Z
    long PersistConstant(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistConstantNodeType@XamlBinaryFormatSubWriter2@@QEAAJW4PersistedConstantType@@@Z
    long PersistConstantNodeType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistLineInfo@XamlBinaryFormatSubWriter2@@QEAAJAEBVObjectWriterNode@@@Z
    long PersistLineInfo(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistNode@XamlBinaryFormatSubWriter2@@QEAAJAEBVObjectWriterNode@@@Z
    long PersistNode(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistSharedString@XamlBinaryFormatSubWriter2@@QEAAJVxstring_ptr@@@Z
    long PersistSharedString(xstring_ptr);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryFormatSubWriter2@@QEAA@XZ
    ~XamlBinaryFormatSubWriter2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistStringConstant@XamlBinaryFormatSubWriter2@@AEAAJVxstring_ptr@@@Z
    long PersistStringConstant(xstring_ptr);
};
