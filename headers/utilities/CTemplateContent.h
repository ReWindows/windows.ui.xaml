#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CTemplateContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTemplateContent@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTemplateContent@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CTemplateContent@@QEAAJAEBVObjectWriterSettings@@_NPEAPEAVCDependencyObject@@@Z
    long Load(ObjectWriterSettings const &, bool, CDependencyObject * *);
    // Category: Method | Source: PE Export
    // Symbol: ?ParticipatesInManagedTreeInternal@CTemplateContent@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetNameIndex@CTemplateContent@@QEBA_KAEBVxstring_ptr_view@@@Z
    uint64_t TryGetNameIndex(xstring_ptr_view const &) const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTemplateContent@@IEAA@PEAVCCoreServices@@@Z
    CTemplateContent(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTemplateContent@@MEAA@XZ
    virtual ~CTemplateContent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInitializationOfLocalDictionary@CTemplateContent@@AEAAJAEAV?$xref_ptr@VCResourceDictionary@@@@@Z
    long CompleteInitializationOfLocalDictionary(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateOptimizedNode@CTemplateContent@@AEAA?AVObjectWriterNode@@IAEBV2@@Z
    ObjectWriterNode GenerateOptimizedNode(unsigned int, ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectReferencesFromStack@CTemplateContent@@AEAAJXZ
    long RemoveObjectReferencesFromStack();
};
