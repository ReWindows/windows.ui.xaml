#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 447 member(s).
class Ptls6 {
public:
    class CLsAnmObject;
    class CLsAnmObjectContext;
    class CLsAnmObjectLineContext;
    class CLsBreakOppSubline;
    class CLsChunkContext;
    class CLsChunkFragmentNonText;
    class CLsChunkFragmentPenTabSplat;
    class CLsChunkFragmentText;
    class CLsChunkOneElement;
    class CLsChunkText;
    class CLsDnode;
    class CLsDnodeBorder;
    class CLsDnodeCharMoveFrom;
    class CLsDnodeCharTakeIn;
    class CLsDnodeContent;
    class CLsDnodeDecoration;
    class CLsDnodeEllipsis;
    class CLsDnodeInlineBorder;
    class CLsDnodeNonTextObject;
    class CLsDnodeObject;
    class CLsDnodePen;
    class CLsDnodeText;
    class CLsDnodeWordBorder;
    class CLsLine;
    class CLsObject;
    class CLsObjectContext;
    class CLsObjectFormattingSession;
    class CLsObjectLineContext;
    class CLsPosInLine;
    class CLsPosInLineInsideObject;
    class CLsPosInLineLim;
    class CLsPosInLineStart;
    class CLsReverseObject;
    class CLsReverseObjectContext;
    class CLsReverseObjectLineContext;
    class CLsSpanInlineBorderInfo;
    class CLsSpanLineHeightInfo;
    class CLsSpanNode;
    class CLsSpanService;
    class CLsStartOppSubline;
    class CLsSubline;
    class CLsSublineFragment;
    class CLsTruncationPointSubline;
    class LsDisplayPoint;
    class txtdim;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocJustArraysInFragmReal@Ptls6@@YAJPEAUtxtln@1@PEAPEAUtxtfragm@1@JJ@Z
    long AllocJustArraysInFragmReal(WindissectOpaque *, WindissectOpaque * *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySnapGridReal@Ptls6@@YAJPEAUlschnke@1@JJPEAUtxtdim@1@@Z
    long ApplySnapGridReal(WindissectOpaque *, long, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLineClippedReal@Ptls6@@YAJPEAVCLsLine@1@PEAUlsbreakprop@1@PEAUgrchunkext@1@PEAULSLINECONTENTINFO@1@HHPEAHPEAUlsbreakinfo@1@PEAPEAUtslinepenaltyinfo@1@@Z
    long BreakLineClippedReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int, int, int *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLineUsingTruncateReal@Ptls6@@YAJPEAVCLsLine@1@PEAUlsbreakprop@1@PEAUgrchunkext@1@PEAULSLINECONTENTINFO@1@PEAPEAUlsbreakrecline@1@PEAUlsbreakinfo@1@PEAH@Z
    long BreakLineUsingTruncateReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLineWithEllipsisReal@Ptls6@@YAJPEAVCLsLine@1@PEAUlsbreakprop@1@PEAUgrchunkext@1@PEAULSLINECONTENTINFO@1@HHPEAHPEAUlsbreakinfo@1@PEAPEAUtslinepenaltyinfo@1@@Z
    long BreakLineWithEllipsisReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int, int, int *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakLineWithPathEllipsisReal@Ptls6@@YAJPEAVCLsLine@1@PEAUlsbreakprop@1@PEAUgrchunkext@1@PEAULSLINECONTENTINFO@1@PEAUlsrun@1@JJPEAHPEAUlsbreakinfo@1@PEAPEAUtslinepenaltyinfo@1@@Z
    long BreakLineWithPathEllipsisReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, long, long, int *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcPresAutonumbersReal@Ptls6@@YAJPEAVCLsLine@1@PEAPEBVCLsDnode@1@@Z
    long CalcPresAutonumbersReal(WindissectOpaque *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBreakAtSpace@Ptls6@@YAJJPEBUlschnke@1@HJJPEAHPEAUlstxtbrkinfo@1@@Z
    long CheckBreakAtSpace(long, WindissectOpaque const *, int, long, long, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBreakHyphenWithoutTruncateReal@Ptls6@@YAJJPEBUlschnke@1@HHJJHJJJJJHJPEAHPEAUlstxtbrkinfo@1@@Z
    long CheckBreakHyphenWithoutTruncateReal(long, WindissectOpaque const *, int, int, long, long, int, long, long, long, long, long, int, long, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPrevBreakHyphenUseTruncateReal@Ptls6@@YAJJPEBUlschnke@1@HJJJJHJPEAHPEAUlstxtbrkinfo@1@@Z
    long CheckPrevBreakHyphenUseTruncateReal(long, WindissectOpaque const *, int, long, long, long, long, int, long, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyJustFromBreakoppToFragmReal@Ptls6@@YAXPEBUtxtbreakopp@1@PEAPEAUtxtfragm@1@JJ@Z
    void CopyJustFromBreakoppToFragmReal(WindissectOpaque const *, WindissectOpaque * *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyJustFromStartoppToFragmReal@Ptls6@@YAXPEBUtxtstartopp@1@PEAPEAUtxtfragm@1@JJ@Z
    void CopyJustFromStartoppToFragmReal(WindissectOpaque const *, WindissectOpaque * *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DcpFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@@Z
    long DcpFromFragm(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBordersReal@Ptls6@@YAJPEAVCLsSubline@1@PEBUtagLSPOINT@1@IPEBUtagLSRECT@1@JPEAULsDisplayPoint@1@@Z
    long DrawBordersReal(WindissectOpaque *, WindissectOpaque const *, unsigned int, WindissectOpaque const *, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DvpVPFromDnode@Ptls6@@YAJPEBVCLsDnode@1@@Z
    long DvpVPFromDnode(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalPresHeightFromInternal@Ptls6@@YA?AUheights@1@KPEAUtagLSPOINTUV@1@AEBULSDEVRES@1@HAEBU21@@Z
    WindissectOpaque ExternalPresHeightFromInternal(unsigned long, WindissectOpaque *, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalPresPointUVFromInternal@Ptls6@@YA?AUtagLSPOINTUV@1@KAEBULSDEVRES@1@HAEBU21@@Z
    WindissectOpaque ExternalPresPointUVFromInternal(unsigned long, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalPresPointXYFromInternal@Ptls6@@YA?AUtagLSPOINT@1@AEBULSDEVRES@1@HAEBU21@@Z
    WindissectOpaque ExternalPresPointXYFromInternal(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalUpFromInternalUp@Ptls6@@YAJKPEBULSDEVRES@1@HJ@Z
    long ExternalUpFromInternalUp(unsigned long, WindissectOpaque const *, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalVpFromInternalVp@Ptls6@@YAJKPEBULSDEVRES@1@HJ@Z
    long ExternalVpFromInternalVp(unsigned long, WindissectOpaque const *, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FDnodeHasVerticalMBP@Ptls6@@YAHPEBVCLsDnodeInlineBorder@1@@Z
    int FDnodeHasVerticalMBP(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FFragmentGlyphBased@Ptls6@@YAHPEAUtxtfragm@1@@Z
    int FFragmentGlyphBased(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FFragmentUnchanged@Ptls6@@YAHPEAUtxtfragm@1@@Z
    int FFragmentUnchanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsGroupChunkBoundary@Ptls6@@YAHPEBVCLsDnode@1@H@Z
    int FIsGroupChunkBoundary(WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsTextChunkBoundary@Ptls6@@YAHPEBVCLsDnode@1@H@Z
    int FIsTextChunkBoundary(WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FJustifCachedFromFragm@Ptls6@@YAHPEAUtxtobj@1@PEAUtxtfragm@1@@Z
    int FJustifCachedFromFragm(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FLeftClipped@Ptls6@@YAHPEAVCLsSubline@1@J@Z
    int FLeftClipped(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FNominalToIdealBecauseOfParagraphProperties@Ptls6@@YAHPEAUlsformarprop@1@@Z
    int FNominalToIdealBecauseOfParagraphProperties(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FRightClipped@Ptls6@@YAHPEAVCLsSubline@1@J@Z
    int FRightClipped(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FRunIsNotSimple@Ptls6@@YAHPEAUlscontext@1@PEAUlsfetchresult@1@@Z
    int FRunIsNotSimple(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FSkipAtWysiFromFragm@Ptls6@@YAHPEAUtxtobj@1@PEAUtxtfragm@1@@Z
    int FSkipAtWysiFromFragm(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FSubstantialFragm@Ptls6@@YAHPEAUtxtobj@1@PEAUtxtfragm@1@@Z
    int FSubstantialFragm(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointBeforeDnodeFromPointAfter@Ptls6@@YAXPEBVCLsDnode@1@PEAUtagLSPOINTUV@1@@Z
    void GetPointBeforeDnodeFromPointAfter(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFullGlyphsExactSyncReal@Ptls6@@YAJPEBUlsgrchnk@1@JJKJJJJJJJHHHHPEAJ11@Z
    long HandleFullGlyphsExactSyncReal(WindissectOpaque const *, long, long, unsigned long, long, long, long, long, long, long, long, int, int, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFullGlyphsPresReal@Ptls6@@YAJPEBUlsgrchnk@1@JKJJJJJJHHPEAJ11@Z
    long HandleFullGlyphsPresReal(WindissectOpaque const *, long, unsigned long, long, long, long, long, long, long, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFullMixedExactSyncReal@Ptls6@@YAJPEBUlsgrchnk@1@HJJKJJJJJHJJHHHHPEAJ11@Z
    long HandleFullMixedExactSyncReal(WindissectOpaque const *, int, long, long, unsigned long, long, long, long, long, long, int, long, long, int, int, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFullMixedPresReal@Ptls6@@YAJPEBUlsgrchnk@1@HJKJJJJHJJHHPEAJ11@Z
    long HandleFullMixedPresReal(WindissectOpaque const *, int, long, unsigned long, long, long, long, long, int, long, long, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGeneralSpacesExactSyncReal@Ptls6@@YAJHPEBUlsgrchnk@1@JJKJJJJJJJHHHHPEAJ11@Z
    long HandleGeneralSpacesExactSyncReal(int, WindissectOpaque const *, long, long, unsigned long, long, long, long, long, long, long, long, int, int, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSimpleTextPres@Ptls6@@YAJHPEBUlsgrchnk@1@JJJJJJJHHPEAJ11@Z
    long HandleSimpleTextPres(int, WindissectOpaque const *, long, long, long, long, long, long, long, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSimpleTextWysiReal@Ptls6@@YAJHPEBUlsgrchnk@1@JJKJJJJJJJHHHHPEAJ11@Z
    long HandleSimpleTextWysiReal(int, WindissectOpaque const *, long, long, unsigned long, long, long, long, long, long, long, long, int, int, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTablesBasedReal@Ptls6@@YAJW4_lskjust@1@HPEBUlsgrchnk@1@JJKJJJJJHJJHJHPEAJ222@Z
    long HandleTablesBasedReal(int, int, WindissectOpaque const *, long, long, unsigned long, long, long, long, long, long, int, long, long, int, long, int, long *, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IwchFirstFromFragm@Ptls6@@YAGPEAUtxtobj@1@PEAUtxtfragm@1@@Z
    unsigned short IwchFirstFromFragm(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IwchLimFromFragm@Ptls6@@YAGPEAUtxtobj@1@PEAUtxtfragm@1@@Z
    unsigned short IwchLimFromFragm(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ls2DimCopy@Ptls6@@YAXPEAPEAJJQEBQEBJJJJ@Z
    void Ls2DimCopy(long * *, long, long const * const * const, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAddArraysIntoFirst@Ptls6@@YAXJPEAJPEBJ@Z
    void LsAddArraysIntoFirst(long, long *, long const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAdjustClipRect@Ptls6@@YAXPEAVCLsSubline@1@JPEBUtagLSPOINT@1@1PEBUtagLSPOINTUV@1@KPEBUtagLSRECT@1@PEAU51@@Z
    void LsAdjustClipRect(WindissectOpaque *, long, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, unsigned long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAdjustSubline@Ptls6@@YAJPEAVCLsSubline@1@JH@Z
    long LsAdjustSubline(WindissectOpaque *, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAdjustText@Ptls6@@YAJW4_lskjust@1@HJJJJJJJJPEBUlsgrchnk@1@JKHJHHHPEAJ2222@Z
    long LsAdjustText(int, int, long, long, long, long, long, long, long, long, WindissectOpaque const *, long, unsigned long, int, long, int, int, int, long *, long *, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAggregateForElem@Ptls6@@YAXPEAPEAJ0JJPEAJ@Z
    void LsAggregateForElem(long * *, long * *, long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAggregateJustForCache@Ptls6@@YAXPEAUtxtfullmixedinfo@1@JJJHHHPEAJ1@Z
    void LsAggregateJustForCache(WindissectOpaque *, long, long, long, int, int, int, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAggregateJustForOneFragm@Ptls6@@YAXPEAUtxtobj@1@PEAUtxtfragm@1@W4kce@1@HHJJJPEAJ@Z
    void LsAggregateJustForOneFragm(WindissectOpaque *, WindissectOpaque *, int, int, int, long, long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAggregateLeftRight@Ptls6@@YAXPEAPEAJ0JW4kce@1@JJHHPEAJ@Z
    void LsAggregateLeftRight(long * *, long * *, long, int, long, long, int, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAllignAutonum@Ptls6@@YAJPEAUlstabscontext@1@W4_lskalign@1@HPEAVCLsDnodeText@1@JJPEAJ3@Z
    long LsAllignAutonum(WindissectOpaque *, int, int, WindissectOpaque *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAllocAggregJust@Ptls6@@YAJPEAUtxtobj@1@@Z
    long LsAllocAggregJust(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAllocFullMixed@Ptls6@@YAJPEAUtxtils@1@PEAUtxtfullmixedinfo@1@JJ@Z
    long LsAllocFullMixed(WindissectOpaque *, WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAppendEllipsis@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsrun@1@JJ@Z
    long LsAppendEllipsis(WindissectOpaque *, WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAppendEllipsisWithContinuation@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsrun@1@JJPEAUlsformatcontext@1@JPEBUlsbreakrecsubl@1@@Z
    long LsAppendEllipsisWithContinuation(WindissectOpaque *, WindissectOpaque *, long, long, WindissectOpaque *, long, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyBordersForTruncationReal@Ptls6@@YAXPEAUtagLSPOINTUV@1@PEAPEBVCLsDnode@1@PEAJPEAH@Z
    void LsApplyBordersForTruncationReal(WindissectOpaque *, WindissectOpaque const * *, long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyChanges@Ptls6@@YAXPEAJ0JEJ@Z
    void LsApplyChanges(long *, long *, long, unsigned char, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyCharNtiToRun@Ptls6@@YAJPEAUtxtils@1@HPEBUlsntineighbor@1@H1KPEAUlsrun@1@PEBUlschp@1@JPEBGPEBJPEAJ6PEAUtxtinf@1@6@Z
    long LsApplyCharNtiToRun(WindissectOpaque *, int, WindissectOpaque const *, int, WindissectOpaque const *, unsigned long, WindissectOpaque *, WindissectOpaque const *, long, unsigned short const *, long const *, long *, long *, WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyCompLastElemRightSideFullMixed@Ptls6@@YAJPEBUlsgrchnk@1@W4_lsdevice@1@JJJ@Z
    long LsApplyCompLastElemRightSideFullMixed(WindissectOpaque const *, int, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyCompress@Ptls6@@YAJPEBUlsgrchnk@1@JJJJJ@Z
    long LsApplyCompress(WindissectOpaque const *, long, long, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyExpand@Ptls6@@YAJPEBUlsgrchnk@1@HJJHJJHJJPEAJPEAH@Z
    long LsApplyExpand(WindissectOpaque const *, int, long, long, int, long, long, int, long, long, long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyFullMixed@Ptls6@@YAJPEBUlsgrchnk@1@W4_lsdevice@1@W4kce@1@JJHJJHJPEAH@Z
    long LsApplyFullMixed(WindissectOpaque const *, int, int, long, long, int, long, long, int, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyGlyphChanges@Ptls6@@YAXPEAJ0JEJ@Z
    void LsApplyGlyphChanges(long *, long *, long, unsigned char, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyGlyphExpand@Ptls6@@YAJPEBUlsgrchnk@1@W4_lsdevice@1@JJJJJPEAH@Z
    long LsApplyGlyphExpand(WindissectOpaque const *, int, long, long, long, long, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyGlyphNtiToArray@Ptls6@@YAJPEAUtxtln@1@HPEBUlsntineighbor@1@KPEBQEAUlsrun@1@PEBUlschp@1@JPEAGJPEBJ5PEAUtxtinf@1@44PEAJPEAPEAGPEAPEAKPEAHPEAPEAJPEAPEAJPEAPEAJPEAPEAUtagLSOFFSET@1@PEAPEAEPEAUtxtdim@1@7@Z
    long LsApplyGlyphNtiToArray(WindissectOpaque *, int, WindissectOpaque const *, unsigned long, WindissectOpaque * const *, WindissectOpaque const *, long, unsigned short *, long, long const *, long const *, WindissectOpaque *, unsigned short *, unsigned short *, long *, unsigned short * *, unsigned long * *, int *, long * *, long * *, long * *, WindissectOpaque * *, unsigned char * *, WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyModWidthToPrecedingChar@Ptls6@@YAJPEAVCLsChunkContext@1@PEAVCLsDnodeNonTextObject@1@PEAJ@Z
    long LsApplyModWidthToPrecedingChar(WindissectOpaque *, WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyNominalToIdeal@Ptls6@@YAJPEAUlsformatcontext@1@PEAVCLsSubline@1@PEAVCLsDnode@1@@Z
    long LsApplyNominalToIdeal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyNonExactWysi@Ptls6@@YAXPEBUlsgrchnk@1@KJJJ@Z
    void LsApplyNonExactWysi(WindissectOpaque const *, unsigned long, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyNtiStartLine@Ptls6@@YAJPEAUtxtln@1@KHPEAUlsrun@1@HGPEBJPEAJ3PEAUtxtinf@1@3@Z
    long LsApplyNtiStartLine(WindissectOpaque *, unsigned long, int, WindissectOpaque *, int, unsigned short, long const *, long *, long *, WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyOpticalAlignmentObject@Ptls6@@YAJPEBVCLsDnodeNonTextObject@1@PEBVCLsChunkFragmentNonText@1@HPEAJ2@Z
    long LsApplyOpticalAlignmentObject(WindissectOpaque const *, WindissectOpaque const *, int, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplySides@Ptls6@@YAXPEBUlsgrchnk@1@HPEAH@Z
    void LsApplySides(WindissectOpaque const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyTextChunkFragment@Ptls6@@YAJPEAVCLsChunkText@1@PEBVCLsChunkFragmentText@1@@Z
    long LsApplyTextChunkFragment(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsApplyWysi@Ptls6@@YAXPEBUlsgrchnk@1@KJJ@Z
    void LsApplyWysi(WindissectOpaque const *, unsigned long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsAutonumCreateILSObj@Ptls6@@YAJPEAUols@1@PEAUlscontext@1@PEBUlscbk@1@JPEAPEAVCLsObjectContext@1@@Z
    long LsAutonumCreateILSObj(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsBreakGeneralCase@Ptls6@@YAJPEAVCLsLine@1@PEAUlsbreakprop@1@PEAUgrchunkext@1@PEAPEAUlsbreakrecline@1@PEAUlsbreakinfo@1@PEAPEAUtslinepenaltyinfo@1@PEAULSLINECONTENTINFO@1@PEAH@Z
    long LsBreakGeneralCase(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsBreakQuickCase@Ptls6@@YAJPEAVCLsLine@1@PEAUlsbreakprop@1@HJPEAPEAUlsbreakrecline@1@PEAUlsbreakinfo@1@PEAH@Z
    long LsBreakQuickCase(WindissectOpaque *, WindissectOpaque *, int, long, WindissectOpaque * *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCacheFullMixedInfo@Ptls6@@YAJPEBUlsgrchnk@1@W4_lsdevice@1@HHH@Z
    long LsCacheFullMixedInfo(WindissectOpaque const *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCacheJustificationInfo@Ptls6@@YAJPEAVCLsLine@1@PEAUgrchunkext@1@@Z
    long LsCacheJustificationInfo(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCacheTableCompressInfo@Ptls6@@YAJPEBUlsgrchnk@1@JJHJJHPEAJ11@Z
    long LsCacheTableCompressInfo(WindissectOpaque const *, long, long, int, long, long, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCalcBordersInsideChunkFragmentReal@Ptls6@@YAJPEBVCLsChunkText@1@HHHJHJH@Z
    long LsCalcBordersInsideChunkFragmentReal(WindissectOpaque const *, int, int, int, long, int, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCalcDurMaxExpandRagged@Ptls6@@YAJPEBVCLsDnode@1@PEAJ@Z
    long LsCalcDurMaxExpandRagged(WindissectOpaque const *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCalcHardBreakCpLim@Ptls6@@YAJPEAVCLsLine@1@PEAUlshardstopinfo@1@HHHPEAJPEAW4endres@1@PEAHPEAW4_lsksplat@1@@Z
    long LsCalcHardBreakCpLim(WindissectOpaque *, WindissectOpaque *, int, int, int, long *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCalcPartWidths@Ptls6@@YAXPEAUtxtobj@1@JPEAJ@Z
    void LsCalcPartWidths(WindissectOpaque *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCalcWidthOfFragm@Ptls6@@YAXPEAUtxtobj@1@PEAUtxtfragm@1@PEAJ@Z
    void LsCalcWidthOfFragm(WindissectOpaque *, WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCheckHotZoneUseTruncate@Ptls6@@YAJPEBUlschnke@1@JJPEAH@Z
    long LsCheckHotZoneUseTruncate(WindissectOpaque const *, long, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCheckReallocArraysTxtobj@Ptls6@@YAJPEAUtxtobj@1@JJJH@Z
    long LsCheckReallocArraysTxtobj(WindissectOpaque *, long, long, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCheckReallocJustifArraysTxtobj@Ptls6@@YAJPEAUtxtobj@1@JJW4txtkjust@1@@Z
    long LsCheckReallocJustifArraysTxtobj(WindissectOpaque *, long, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCloseCurrentBorderReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@@Z
    long LsCloseCurrentBorderReal(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCloseInlineBorderReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEAVCLsSpanNode@1@@Z
    long LsCloseInlineBorderReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectChunkAround@Ptls6@@YAJPEAVCLsChunkContext@1@PEBVCLsDnode@1@H@Z
    long LsCollectChunkAround(WindissectOpaque *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectChunkEndingWith@Ptls6@@YAJPEAVCLsChunkContext@1@HPEBVCLsDnode@1@@Z
    long LsCollectChunkEndingWith(WindissectOpaque *, int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectFPenPositionUsed@Ptls6@@YAHPEBVCLsDnode@1@0@Z
    int LsCollectFPenPositionUsed(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectLastTextGroupChunkForSublineFragment@Ptls6@@YAJPEAUgrchunkext@1@PEBVCLsSublineFragment@1@W4CollectSublines@1@@Z
    long LsCollectLastTextGroupChunkForSublineFragment(WindissectOpaque *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectNextChunk@Ptls6@@YAJPEAVCLsChunkContext@1@HPEAH@Z
    long LsCollectNextChunk(WindissectOpaque *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectPreviousChunk@Ptls6@@YAJPEAVCLsChunkContext@1@HPEAH@Z
    long LsCollectPreviousChunk(WindissectOpaque *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCollectTextGroupChunk@Ptls6@@YAJPEAUgrchunkext@1@PEBVCLsDnode@1@W4CollectSublines@1@@Z
    long LsCollectTextGroupChunk(WindissectOpaque *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCompressLastCharRight@Ptls6@@YAJPEAUtxtobj@1@JJ@Z
    long LsCompressLastCharRight(WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsConvertAutoTabToPen@Ptls6@@YAJPEAVCLsDnodeText@1@@Z
    long LsConvertAutoTabToPen(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCopyFullMixed@Ptls6@@YAXPEAUtxtfullmixedinfo@1@JPEBU21@JJJ@Z
    void LsCopyFullMixed(WindissectOpaque *, long, WindissectOpaque const *, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCopyGmapWithGivenIgind@Ptls6@@YAXPEBGPEAGJJ@Z
    void LsCopyGmapWithGivenIgind(unsigned short const *, unsigned short *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCopyMainArraysFromFragmToObj@Ptls6@@YAXPEAUtxtobj@1@JPEBUtxtfragm@1@JJ@Z
    void LsCopyMainArraysFromFragmToObj(WindissectOpaque *, long, WindissectOpaque const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCopyMainArraysFromObjToObj@Ptls6@@YAXPEAUtxtobj@1@J0JJ@Z
    void LsCopyMainArraysFromObjToObj(WindissectOpaque *, long, WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateBreakOppAfterText@Ptls6@@YAJJPEBUlschnke@1@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsCreateBreakOppAfterText(long, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateBreakRecordSublineFragment@Ptls6@@YAJPEBVCLsSublineFragment@1@PEAPEAUlsbreakrecsubl@1@@Z
    long LsCreateBreakRecordSublineFragment(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateBreakRecordText@Ptls6@@YAJJPEAPEAUdobjfragm@1@JJPEAPEAUlsbreakrecobj@1@@Z
    long LsCreateBreakRecordText(long, WindissectOpaque * *, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateContext@Ptls6@@YAJPEBUlscontextinfo@1@PEAPEAUlscontext@1@@Z
    long LsCreateContext(WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateDobjFragmentText@Ptls6@@YAJJPEBUlschnke@1@HHHHHHHJVLSCHCNT@1@PEAUlsstartopp@1@HJ1PEAUlsbreakopp@1@KPEAHPEAUtxtdim@1@PEAPEAUdobjfragm@1@@Z
    long LsCreateDobjFragmentText(long, WindissectOpaque const *, int, int, int, int, int, int, int, long, WindissectOpaque, WindissectOpaque *, int, long, WindissectOpaque, WindissectOpaque *, unsigned long, int *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateILSObjText@Ptls6@@YAJPEAUols@1@PEAUlscontext@1@PEBUlscbk@1@JPEAPEAVCLsObjectContext@1@@Z
    long LsCreateILSObjText(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateInlineBorderInfoSpanReal@Ptls6@@YAJPEAVCLsSubline@1@PEAVCLsSpanNode@1@HPEAPEAUlsinlineborderinfo@1@PEAJ3@Z
    long LsCreateInlineBorderInfoSpanReal(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque * *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateLNObjText@Ptls6@@YAJQEAVCLsObjectContext@1@PEAUlsparaclient@1@PEBUlsdevinfo@1@PEAPEAVCLsObjectLineContext@1@@Z
    long LsCreateLNObjText(WindissectOpaque * const, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateLine@Ptls6@@YAJPEAUlscontext@1@PEAUlsparaclient@1@PEBUlspap@1@JPEBUlslinerestr@1@PEBUlsbreakrecline@1@PEAPEAU61@PEAUlslinfo@1@PEAPEAVCLsLine@1@@Z
    long LsCreateLine(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateLineCore@Ptls6@@YAJPEAUlscontext@1@PEAUlsparaclient@1@PEBUlspap@1@JPEBUlslinerestr@1@PEBUlsbreakrecline@1@HJPEAPEAU61@PEAUlslinfo@1@PEAPEAUtslinepenaltyinfo@1@PEAPEAVCLsLine@1@@Z
    long LsCreateLineCore(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque const *, WindissectOpaque const *, int, long, WindissectOpaque * *, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateNextNeighborFromFragm@Ptls6@@YAXHHHPEAUtxtobj@1@PEAUtxtfragm@1@PEAUlsrun@1@PEBUlschp@1@PEAUlsneighborinfo@1@@Z
    void LsCreateNextNeighborFromFragm(int, int, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreatePrevNeighborFromFragm@Ptls6@@YAXHHHPEAUtxtobj@1@PEAUtxtfragm@1@PEAUlsrun@1@PEBUlschp@1@PEAUlsneighborinfo@1@@Z
    void LsCreatePrevNeighborFromFragm(int, int, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateQueryResult@Ptls6@@YAJPEAVILsSubline@1@JJPEBUlsqin@1@PEAUlsqout@1@@Z
    long LsCreateQueryResult(WindissectOpaque *, long, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateQueryVertResult@Ptls6@@YAJPEAVILsSubline@1@JJ0JJPEBUlsqin@1@PEAUlsqoutvertical@1@@Z
    long LsCreateQueryVertResult(WindissectOpaque *, long, long, WindissectOpaque *, long, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateSublineFragmentAfterChunkNoChange@Ptls6@@YAJPEAVCLsSubline@1@PEAVCLsChunkFragment@1@HJJPEAPEAVCLsSublineFragment@1@@Z
    long LsCreateSublineFragmentAfterChunkNoChange(WindissectOpaque *, WindissectOpaque *, int, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateSublineFragmentCore@Ptls6@@YAJPEBVCLsSubline@1@HPEBVCLsStartOppSubline@1@PEBVCLsBreakOppSubline@1@HJJPEAHPEAPEAVCLsSublineFragment@1@@Z
    long LsCreateSublineFragmentCore(WindissectOpaque const *, int, WindissectOpaque const *, WindissectOpaque const *, int, long, long, int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateTextBlob@Ptls6@@YAJPEAUtxtils@1@JJJPEAPEAUlstxtblob@1@@Z
    long LsCreateTextBlob(WindissectOpaque *, long, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateTxtbreakopp@Ptls6@@YAJJPEBUlschnke@1@HJJJPEBUlshyphact@1@JHHPEAPEAUtxtbreakopp@1@@Z
    long LsCreateTxtbreakopp(long, WindissectOpaque const *, int, long, long, long, WindissectOpaque const *, long, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateTxtfragms@Ptls6@@YAJJPEBUlschnke@1@HVLSCHCNT@1@PEBUtxtstartopp@1@H1PEBUtxtbreakopp@1@JJKHHPEAHPEAUtxtdim@1@PEAPEAUtxtfragm@1@@Z
    long LsCreateTxtfragms(long, WindissectOpaque const *, int, WindissectOpaque, WindissectOpaque const *, int, WindissectOpaque, WindissectOpaque const *, long, long, unsigned long, int, int, int *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCreateTxtstartopp@Ptls6@@YAJJPEBUlschnke@1@JJHGPEAPEAUtxtstartopp@1@@Z
    long LsCreateTxtstartopp(long, WindissectOpaque const *, long, long, int, unsigned short, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCutPossibleContextViolationReal@Ptls6@@YAJPEAUlscontext@1@PEAVCLsChunkContext@1@PEAVCLsDnodeText@1@@Z
    long LsCutPossibleContextViolationReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsCutTextDobj@Ptls6@@YAJJPEAUlschnke@1@PEAUtxtdim@1@@Z
    long LsCutTextDobj(long, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyAdjustContext@Ptls6@@YAXPEAUlscontext@1@PEAULSADJUSTCONTEXT@1@@Z
    void LsDestroyAdjustContext(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyArrayFactory@Ptls6@@YAJPEAUarrayfactory@1@@Z
    long LsDestroyArrayFactory(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyArrayInBlob@Ptls6@@YAXPEAUlstxtblob@1@JPEAX@Z
    void LsDestroyArrayInBlob(WindissectOpaque *, long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyBreakRecord@Ptls6@@YAJPEAUlscontext@1@PEAUlsbreakrecline@1@@Z
    long LsDestroyBreakRecord(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyBreakRecordLineCore@Ptls6@@YAJPEAUlscontext@1@PEAUlsbreakrecline@1@@Z
    long LsDestroyBreakRecordLineCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyBreakRecordSublineCore@Ptls6@@YAXPEAUlscontext@1@PEAUlsbreakrecsubl@1@@Z
    void LsDestroyBreakRecordSublineCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyBreakRecordText@Ptls6@@YAJPEAVCLsObjectContext@1@PEAUlsbreakrecobj@1@@Z
    long LsDestroyBreakRecordText(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyChunkFragmentIterator@Ptls6@@YAXPEAUchunkfragmentiterator@1@@Z
    void LsDestroyChunkFragmentIterator(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyContext@Ptls6@@YAJPEAUlscontext@1@@Z
    long LsDestroyContext(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyDnodeList@Ptls6@@YAJPEAUlscontext@1@PEAUlsparaclient@1@PEAVCLsDnode@1@@Z
    long LsDestroyDnodeList(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyFeasibilityInfo@Ptls6@@YAXPEAUlsfeasibilltyinfo@1@@Z
    void LsDestroyFeasibilityInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyFullMixed@Ptls6@@YAXPEAUtxtils@1@PEAUtxtfullmixedinfo@1@JJ@Z
    void LsDestroyFullMixed(WindissectOpaque *, WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyGroupChunkExt@Ptls6@@YAXPEAUgrchunkext@1@@Z
    void LsDestroyGroupChunkExt(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyGroupChunkIterator@Ptls6@@YAXPEAUgroupchunkiterator@1@@Z
    void LsDestroyGroupChunkIterator(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyGroupChunkIteratorFragment@Ptls6@@YAXPEAUgroupchunkiteratorfragment@1@@Z
    void LsDestroyGroupChunkIteratorFragment(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyLine@Ptls6@@YAJPEAUlscontext@1@PEAVCLsLine@1@@Z
    long LsDestroyLine(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyNtiInfoInTxtobj@Ptls6@@YAXPEAUtxtils@1@PEAUtxtobj@1@H@Z
    void LsDestroyNtiInfoInTxtobj(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroySublineAfter@Ptls6@@YAJPEAVCLsSubline@1@HPEAVCLsChunkContext@1@AEBVCLsPosInLineLim@1@JVLSORDINALINT@1@@Z
    long LsDestroySublineAfter(WindissectOpaque *, int, WindissectOpaque *, WindissectOpaque const &, long, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroySublineCore@Ptls6@@YAJPEAVCLsSubline@1@@Z
    long LsDestroySublineCore(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroySublineFragmentIterator@Ptls6@@YAXPEAUsublinefragmentiterator@1@@Z
    void LsDestroySublineFragmentIterator(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroySublineIteratorForSpans@Ptls6@@YAXPEAUsublineiteratorspans@1@@Z
    void LsDestroySublineIteratorForSpans(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDestroyTextBlob@Ptls6@@YAXPEAUtxtils@1@PEAUlstxtblob@1@@Z
    void LsDestroyTextBlob(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplayLine@Ptls6@@YAJPEAVCLsLine@1@PEBUtagLSPOINT@1@IPEBUtagLSRECT@1@@Z
    long LsDisplayLine(WindissectOpaque *, WindissectOpaque const *, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplaySpanDnode@Ptls6@@YAJPEAVCLsDnodeInlineBorder@1@IPEBUtagLSRECT@1@PEAUpointspan@1@@Z
    long LsDisplaySpanDnode(WindissectOpaque *, unsigned int, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplaySpansContinuedFromPreviousLines@Ptls6@@YAJPEAVCLsSubline@1@IPEBUtagLSRECT@1@PEAUpointspan@1@@Z
    long LsDisplaySpansContinuedFromPreviousLines(WindissectOpaque *, unsigned int, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplaySubline@Ptls6@@YAJPEAVILsSubline@1@HPEBUtagLSPOINT@1@IPEBUtagLSRECT@1@@Z
    long LsDisplaySubline(WindissectOpaque *, int, WindissectOpaque const *, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplaySublineCore@Ptls6@@YAJPEAVCLsSubline@1@PEBUtagLSPOINT@1@IPEBUtagLSRECT@1@JJ@Z
    long LsDisplaySublineCore(WindissectOpaque *, WindissectOpaque const *, unsigned int, WindissectOpaque const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplayText@Ptls6@@YAJPEAVCLsObject@1@PEBUdispin@1@@Z
    long LsDisplayText(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDisplayTextChunk@Ptls6@@YAJJPEAUlschnke@1@PEBUtagLSPOINT@1@IKPEBUtagLSRECT@1@HAEBULSDEVRES@1@@Z
    long LsDisplayTextChunk(long, WindissectOpaque *, WindissectOpaque const *, unsigned int, unsigned long, WindissectOpaque const *, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDrawDecorations@Ptls6@@YAJPEAVCLsSubline@1@PEBUtagLSPOINT@1@IPEBUtagLSRECT@1@JPEAULsDisplayPoint@1@@Z
    long LsDrawDecorations(WindissectOpaque *, WindissectOpaque const *, unsigned int, WindissectOpaque const *, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDuplicateBreakRecordSublineCore@Ptls6@@YAJPEAUlscontext@1@PEBUlsbreakrecsubl@1@PEAPEAU31@@Z
    long LsDuplicateBreakRecordSublineCore(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDuplicateBreakRecordText@Ptls6@@YAJPEAVCLsObjectContext@1@PEBUlsbreakrecobj@1@PEAPEAU31@@Z
    long LsDuplicateBreakRecordText(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDurFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsDurFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsDurGindFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsDurGindFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsEndrForHardStop@Ptls6@@YA?AW4endres@1@PEAUlshardstopinfo@1@@Z
    int LsEndrForHardStop(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsEnumObjText@Ptls6@@YAJPEAVCLsObject@1@PEAUlsrun@1@HPEBUlschp@1@JJKHHPEBUtagLSPOINT@1@PEBUheights@1@J@Z
    long LsEnumObjText(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque const *, long, long, unsigned long, int, int, WindissectOpaque const *, WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsEnumSublineCore@Ptls6@@YAJPEBVCLsSubline@1@HHPEBUtagLSPOINT@1@J@Z
    long LsEnumSublineCore(WindissectOpaque const *, int, int, WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFAcceptSublines@Ptls6@@YAJW4CollectSublines@1@PEBVCLsDnodeNonTextObject@1@PEAH@Z
    long LsFAcceptSublines(int, WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFAcceptSubs@Ptls6@@YAJW4CollectSublines@1@PEBVCLsDnodeNonTextObject@1@PEAUdobjfragm@1@PEAH@Z
    long LsFAcceptSubs(int, WindissectOpaque const *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFAreTabsPensInSubline@Ptls6@@YAHPEBVCLsSubline@1@@Z
    int LsFAreTabsPensInSubline(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFCheckFeasibilityOfFragment@Ptls6@@YAJPEAVCLsSublineFragment@1@JPEAUgrchunkext@1@HHHHPEAHPEAPEAUlsfeasibilltyinfo@1@@Z
    long LsFCheckFeasibilityOfFragment(WindissectOpaque *, long, WindissectOpaque *, int, int, int, int, int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFGetNextDobjForJust@Ptls6@@YAHPEBUlsgrchnk@1@JPEAJ@Z
    int LsFGetNextDobjForJust(WindissectOpaque const *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFGetNextFragmForJust@Ptls6@@YAHPEBUlsgrchnk@1@PEBQEAUdobjfragm@1@JPEAJ@Z
    int LsFGetNextFragmForJust(WindissectOpaque const *, WindissectOpaque * const *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFHyphenFitsUseTruncateReal@Ptls6@@YAJPEBUlschnke@1@JJPEBUlshyphact@1@HPEAH@Z
    long LsFHyphenFitsUseTruncateReal(WindissectOpaque const *, long, long, WindissectOpaque const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFIsSublineEmpty@Ptls6@@YAHPEBVCLsSubline@1@@Z
    int LsFIsSublineEmpty(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFIwchOneToOneFromFragm@Ptls6@@YAHPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    int LsFIwchOneToOneFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFNonTextObjectPresentSublineCore@Ptls6@@YAHPEBVCLsDnode@1@0@Z
    int LsFNonTextObjectPresentSublineCore(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFSpacesOnly@Ptls6@@YAJPEBVCLsDnode@1@@Z
    long LsFSpacesOnly(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFUseForPurpose@Ptls6@@YAHW4CollectSublines@1@HHHHH@Z
    int LsFUseForPurpose(int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFetchAppendEscCore@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEBUlsbreakrecsubl@1@JPEBULSESC@1@JPEBUlsfetchresult@1@PEAH5PEAW4fmtres@1@5PEAGPEAJPEAPEAVCLsDnode@1@98@Z
    long LsFetchAppendEscCore(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque const *, long, WindissectOpaque const *, int *, int *, int *, int *, unsigned short *, long *, WindissectOpaque * *, WindissectOpaque * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFetchModWidthClassesForRun@Ptls6@@YAJPEAUtxtils@1@PEAUlsrun@1@PEBGJPEAUtxtinf@1@@Z
    long LsFetchModWidthClassesForRun(WindissectOpaque *, WindissectOpaque *, unsigned short const *, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFetchWidthOfChar@Ptls6@@YAJPEAUtxtln@1@PEAUlsrun@1@KGPEAJ2@Z
    long LsFetchWidthOfChar(WindissectOpaque *, WindissectOpaque *, unsigned long, unsigned short, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFetchWidthOfGlyph@Ptls6@@YAJPEAUtxtln@1@PEAUlsrun@1@KGPEAHPEAGPEAJ4@Z
    long LsFetchWidthOfGlyph(WindissectOpaque *, WindissectOpaque *, unsigned long, unsigned short, int *, unsigned short *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFillBreakRecordSubline@Ptls6@@YAJPEAUlscontext@1@PEAUlsbreakrecsubl@1@JGPEAUlsbreakrecobj@1@1JPEAPEAVCLsSpanNode@1@Ulsfetchposition@1@@Z
    long LsFillBreakRecordSubline(WindissectOpaque *, WindissectOpaque *, long, unsigned short, WindissectOpaque *, WindissectOpaque *, long, WindissectOpaque * *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFillDupPen@Ptls6@@YAJPEBUlsgrchnk@1@KJJ@Z
    long LsFillDupPen(WindissectOpaque const *, unsigned long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFillLineInfoFromLine@Ptls6@@YAJPEBVCLsLine@1@HPEAUlsbreakinfo@1@PEAULSLINECONTENTINFO@1@PEAUlslinfo@1@@Z
    long LsFillLineInfoFromLine(WindissectOpaque const *, int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFillSpaceArrayInTxtobj@Ptls6@@YAXPEAUtxtils@1@PEAUtxtobj@1@@Z
    void LsFillSpaceArrayInTxtobj(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFinalAdjustmentOnPres@Ptls6@@YAJPEBUlsgrchnk@1@JJJJJHHHPEAJ11@Z
    long LsFinalAdjustmentOnPres(WindissectOpaque const *, long, long, long, long, long, int, int, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindApproxForceBreakOppInsideSublineCore@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsStartOppSubline@1@JJPEAPEAVCLsBreakOppSubline@1@@Z
    long LsFindApproxForceBreakOppInsideSublineCore(WindissectOpaque const *, WindissectOpaque const *, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindBreakOppAfterCpTruncateText@Ptls6@@YAJJPEBUlschnke@1@JVLSCHCNT@1@HPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindBreakOppAfterCpTruncateText(long, WindissectOpaque const *, long, WindissectOpaque, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindBreakOppAfterTruncationPointSublineCoreReal@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsTruncationPointSubline@1@AEAHPEAPEAVCLsBreakOppSubline@1@@Z
    long LsFindBreakOppAfterTruncationPointSublineCoreReal(WindissectOpaque const *, WindissectOpaque const *, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindBreakOppBeforeCpTruncateText@Ptls6@@YAJJPEBUlschnke@1@JVLSCHCNT@1@HPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindBreakOppBeforeCpTruncateText(long, WindissectOpaque const *, long, WindissectOpaque, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindBreakOppBeforeTruncationPointSublineCoreReal@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsTruncationPointSubline@1@AEAH2PEAPEAVCLsBreakOppSubline@1@@Z
    long LsFindBreakOppBeforeTruncationPointSublineCoreReal(WindissectOpaque const *, WindissectOpaque const *, int &, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindForceBreakLineOptimal@Ptls6@@YAJPEAVCLsLine@1@PEAULSLINECONTENTINFO@1@PEBVCLsStartOppSubline@1@PEBVCLsBreakOppSubline@1@HJJHHPEAH4PEAPEAVCLsSublineFragment@1@PEAPEAV51@PEAPEAUtslinepenaltyinfo@1@PEAJ@Z
    long LsFindForceBreakLineOptimal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, int, long, long, int, int, int *, int *, WindissectOpaque * *, WindissectOpaque * *, WindissectOpaque * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindForceBreakOppBeforeCpTruncateText@Ptls6@@YAJJPEBUlschnke@1@JVLSCHCNT@1@HHPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindForceBreakOppBeforeCpTruncateText(long, WindissectOpaque const *, long, WindissectOpaque, int, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindForceBreakOppBeforeTruncationPointSublineCoreReal@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsTruncationPointSubline@1@HAEAH2PEAPEAVCLsBreakOppSubline@1@@Z
    long LsFindForceBreakOppBeforeTruncationPointSublineCoreReal(WindissectOpaque const *, WindissectOpaque const *, int, int &, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindForceBreakOppBeforeTruncationPointTabPenSplat@Ptls6@@YAJPEBVCLsDnode@1@HPEAH@Z
    long LsFindForceBreakOppBeforeTruncationPointTabPenSplat(WindissectOpaque const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindListDu@Ptls6@@YAXPEBVCLsDnode@1@0HPEAJ@Z
    void LsFindListDu(WindissectOpaque const *, WindissectOpaque const *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindListHeights@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsDnode@1@1HPEAUheights@1@2@Z
    long LsFindListHeights(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindListHeightsCSSReal@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsDnode@1@1HPEAUheights@1@2@Z
    long LsFindListHeightsCSSReal(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindMasterSublineCore@Ptls6@@YAJPEAVCLsLine@1@Ulsspan_struct@1@PEAUtagLSPOINTUV@1@PEAPEAVCLsSubline@1@PEAPEAVCLsSpanNode@1@@Z
    long LsFindMasterSublineCore(WindissectOpaque *, WindissectOpaque, WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextBreakOppInsideSublineCore@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsBreakOppSubline@1@AEAHPEAPEAV31@@Z
    long LsFindNextBreakOppInsideSublineCore(WindissectOpaque const *, WindissectOpaque const *, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextBreakOppInsideText@Ptls6@@YAJJPEBUlschnke@1@HJVLSCHCNT@1@HPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindNextBreakOppInsideText(long, WindissectOpaque const *, int, long, WindissectOpaque, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextChar@Ptls6@@YAHJPEBUlschnke@1@JJPEAJ1@Z
    int LsFindNextChar(long, WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextForceBreakOppInsideSublineCore@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsBreakOppSubline@1@AEAHPEAPEAV31@@Z
    long LsFindNextForceBreakOppInsideSublineCore(WindissectOpaque const *, WindissectOpaque const *, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextForceBreakOppInsideText@Ptls6@@YAJJPEBUlschnke@1@HJVLSCHCNT@1@HHPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindNextForceBreakOppInsideText(long, WindissectOpaque const *, int, long, WindissectOpaque, int, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextSubstantialChar@Ptls6@@YAHJPEBUlschnke@1@JJPEAJ1@Z
    int LsFindNextSubstantialChar(long, WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNextSubstantialFragm@Ptls6@@YAJPEBUlschnke@1@PEAPEAUtxtfragm@1@JJ@Z
    long LsFindNextSubstantialFragm(WindissectOpaque const *, WindissectOpaque * *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNonSpaceAfter@Ptls6@@YAHJPEBUlschnke@1@JJPEAJ1@Z
    int LsFindNonSpaceAfter(long, WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindNonSpaceBefore@Ptls6@@YAHPEBUlschnke@1@JJPEAJ1@Z
    int LsFindNonSpaceBefore(WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPathDelimiters@Ptls6@@YAJPEAUgrchunkext@1@PEAVCLsSubline@1@PEAHPEAPEBVCLsDnodeText@1@PEAVLSCHCNT@1@234234@Z
    long LsFindPathDelimiters(WindissectOpaque *, WindissectOpaque *, int *, WindissectOpaque const * *, WindissectOpaque *, int *, WindissectOpaque const * *, WindissectOpaque *, int *, WindissectOpaque const * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPointOffset@Ptls6@@YAJPEBVCLsDnode@1@W4_lsdevice@1@KW4CollectSublines@1@0JPEAJ@Z
    long LsFindPointOffset(WindissectOpaque const *, int, unsigned long, int, WindissectOpaque const *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevBreakOppInsideSublineCore@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsBreakOppSubline@1@AEAHPEAPEAV31@@Z
    long LsFindPrevBreakOppInsideSublineCore(WindissectOpaque const *, WindissectOpaque const *, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevBreakOppInsideText@Ptls6@@YAJJPEBUlschnke@1@HJVLSCHCNT@1@HPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindPrevBreakOppInsideText(long, WindissectOpaque const *, int, long, WindissectOpaque, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevChar@Ptls6@@YAHPEBUlschnke@1@JJPEAJ1@Z
    int LsFindPrevChar(WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevForceBreakOppInsideSublineCore@Ptls6@@YAJPEBVCLsSubline@1@PEBVCLsBreakOppSubline@1@AEAHPEAPEAV31@@Z
    long LsFindPrevForceBreakOppInsideSublineCore(WindissectOpaque const *, WindissectOpaque const *, int &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevForceBreakOppInsideText@Ptls6@@YAJJPEBUlschnke@1@HJVLSCHCNT@1@HHPEAHPEAJPEAV31@PEAUlsbrkres@1@PEAPEAUlsbreakopp@1@@Z
    long LsFindPrevForceBreakOppInsideText(long, WindissectOpaque const *, int, long, WindissectOpaque, int, int, int *, long *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevSubstantialChar@Ptls6@@YAHPEBUlschnke@1@JJPEAJ1@Z
    int LsFindPrevSubstantialChar(WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindPrevSubstantialFragm@Ptls6@@YAJPEBUlschnke@1@PEAPEAUtxtfragm@1@JJ@Z
    long LsFindPrevSubstantialFragm(WindissectOpaque const *, WindissectOpaque * *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindSpaceAfter@Ptls6@@YAHJPEBUlschnke@1@JJPEAJ1@Z
    int LsFindSpaceAfter(long, WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindSpaceBefore@Ptls6@@YAHPEBUlschnke@1@JJPEAJ1@Z
    int LsFindSpaceBefore(WindissectOpaque const *, long, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindSpanVisualBoundaries@Ptls6@@YAJPEBVCLsSubline@1@PEAVCLsSpanNode@1@PEAPEBVCLsDnode@1@2@Z
    long LsFindSpanVisualBoundaries(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque const * *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindSublineFragmentHeights@Ptls6@@YAJPEBVCLsSublineFragment@1@PEAUheights@1@1HPEAJPEAPEAULSSPANOFFSETRESULT@1@@Z
    long LsFindSublineFragmentHeights(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *, int, long *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindSublineFragmentHeightsCSSReal@Ptls6@@YAJPEBVCLsSublineFragment@1@USUBLINEFRAGMENTLISTITERATOR@1@PEAUheights@1@2HPEAJPEAPEAULSSPANOFFSETRESULT@1@@Z
    long LsFindSublineFragmentHeightsCSSReal(WindissectOpaque const *, WindissectOpaque, WindissectOpaque *, WindissectOpaque *, int, long *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindTrailingArea@Ptls6@@YAJPEBVCLsDnode@1@HHPEAJ111@Z
    long LsFindTrailingArea(WindissectOpaque const *, int, int, long *, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFindTrailingAreaForFragment@Ptls6@@YAJPEBVCLsSublineFragment@1@HPEAJ111@Z
    long LsFindTrailingAreaForFragment(WindissectOpaque const *, int, long *, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFinishSublineCore@Ptls6@@YAJPEBVCLsDnodeNonTextObject@1@PEAUlsformatcontext@1@PEAVCLsSubline@1@@Z
    long LsFinishSublineCore(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFixExptBeforeJust@Ptls6@@YAXPEBUlsgrchnk@1@JJJJ@Z
    void LsFixExptBeforeJust(WindissectOpaque const *, long, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFmtText@Ptls6@@YAJPEAVCLsObjectLineContext@1@PEBUlsbreakrecobj@1@PEBUfmtintext@1@PEAW4fmtres@1@@Z
    long LsFmtText(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFormatAnmReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@@Z
    long LsFormatAnmReal(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsFormatMainLine@Ptls6@@YAJPEAUlscontext@1@PEBUlsbreakrecline@1@PEAUgrchunkext@1@PEAUlsformatcontext@1@PEAHPEAPEAVCLsLine@1@44@Z
    long LsFormatMainLine(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *, int *, WindissectOpaque * *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetAggregatedCompression@Ptls6@@YAJPEBUlsgrchnk@1@W4_lsdevice@1@JJHJJHPEAJ@Z
    long LsGetAggregatedCompression(WindissectOpaque const *, int, long, long, int, long, long, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetArrayFromBlob@Ptls6@@YAJPEAUlstxtblob@1@JPEAPEAX@Z
    long LsGetArrayFromBlob(WindissectOpaque *, long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetChanges@Ptls6@@YAXU_lsact@1@PEBUlsems@1@JHPEAEPEAJ@Z
    void LsGetChanges(WindissectOpaque, WindissectOpaque const *, long, int, unsigned char *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetChangesWithVariation@Ptls6@@YAXHJU_lsact@1@PEBUlsems@1@JHPEAEPEAJ@Z
    void LsGetChangesWithVariation(int, long, WindissectOpaque, WindissectOpaque const *, long, int, unsigned char *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCharCompressionInfoFullMixedWrapper@Ptls6@@YAJPEAUtxtils@1@PEBUlschp@1@W4_lsdevice@1@KPEBUlscharruninfo@1@PEBUlsneighborinfo@1@4JPEAPEAJ5@Z
    long LsGetCharCompressionInfoFullMixedWrapper(WindissectOpaque *, WindissectOpaque const *, int, unsigned long, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, long, long * *, long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCharExpansionInfoFullMixedWrapper@Ptls6@@YAJPEAUtxtils@1@PEBUlschp@1@W4_lsdevice@1@KPEBUlscharruninfo@1@PEBUlsneighborinfo@1@4JPEAPEAJ5@Z
    long LsGetCharExpansionInfoFullMixedWrapper(WindissectOpaque *, WindissectOpaque const *, int, unsigned long, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, long, long * *, long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCharTab@Ptls6@@YAJPEBUlsgrchnk@1@GW4_lsdevice@1@PEAJ2@Z
    long LsGetCharTab(WindissectOpaque const *, unsigned short, int, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCompForOneElemFromFragm@Ptls6@@YAXPEAUtxtobj@1@PEAUtxtfragm@1@JJPEAJ@Z
    void LsGetCompForOneElemFromFragm(WindissectOpaque *, WindissectOpaque *, long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCompLastElemRightSideFullMixed@Ptls6@@YAXPEBUlsgrchnk@1@W4_lsdevice@1@JJPEAJ@Z
    void LsGetCompLastElemRightSideFullMixed(WindissectOpaque const *, int, long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCompressionInfoTextReal@Ptls6@@YAJPEBUlsgrchnk@1@PEBQEAUdobjfragm@1@JKJPEAJ@Z
    long LsGetCompressionInfoTextReal(WindissectOpaque const *, WindissectOpaque * const *, long, unsigned long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetCurTabInfoCore@Ptls6@@YAJPEAUlstabscontext@1@PEAVCLsDnode@1@JHPEAW4_lsktab@1@PEAH3@Z
    long LsGetCurTabInfoCore(WindissectOpaque *, WindissectOpaque *, long, int, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetDecimalPoint@Ptls6@@YAJPEBUlsgrchnk@1@W4_lsdevice@1@PEAJ2@Z
    long LsGetDecimalPoint(WindissectOpaque const *, int, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetDnodeRelativeOffset@Ptls6@@YA?AUtagLSOFFSET@1@PEBVCLsDnode@1@@Z
    WindissectOpaque LsGetDnodeRelativeOffset(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetDnodeTotalOffset@Ptls6@@YA?AUtagLSOFFSET@1@PEBVCLsDnode@1@@Z
    WindissectOpaque LsGetDnodeTotalOffset(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetDupLastElem@Ptls6@@YAXPEBUlsgrchnk@1@JJPEAJ@Z
    void LsGetDupLastElem(WindissectOpaque const *, long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetEms@Ptls6@@YAJPEAUtxtils@1@PEAUlsrun@1@KPEAUlsems@1@@Z
    long LsGetEms(WindissectOpaque *, WindissectOpaque *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetExpansionInfoTextReal@Ptls6@@YAJPEBUlsgrchnk@1@PEBQEAUdobjfragm@1@JKJPEAJ@Z
    long LsGetExpansionInfoTextReal(WindissectOpaque const *, WindissectOpaque * const *, long, unsigned long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetFullMixedInfo@Ptls6@@YAJPEBUlsgrchnk@1@PEBQEAUdobjfragm@1@W4kce@1@JJHJJHJPEAJ3@Z
    long LsGetFullMixedInfo(WindissectOpaque const *, WindissectOpaque * const *, int, long, long, int, long, long, int, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetFullMixedInfoForCharFragm@Ptls6@@YAJPEAUtxtobj@1@PEBUlschp@1@PEAUtxtfragm@1@PEAUlsrun@1@W4_lsdevice@1@PEBUlsneighborinfo@1@5HHPEAPEAJ666@Z
    long LsGetFullMixedInfoForCharFragm(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque const *, WindissectOpaque const *, int, int, long * *, long * *, long * *, long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetFullMixedInfoForGlyphFragm@Ptls6@@YAJPEAUtxtobj@1@PEBUlschp@1@PEAUtxtfragm@1@PEAUlsrun@1@W4_lsdevice@1@PEBUlsneighborinfo@1@5HHPEAPEAJ666PEAJPEAE@Z
    long LsGetFullMixedInfoForGlyphFragm(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque const *, WindissectOpaque const *, int, int, long * *, long * *, long * *, long * *, long *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetFullMixedInfoForOneCharInFragm@Ptls6@@YAJPEAUtxtobj@1@PEBUlschp@1@PEAUtxtfragm@1@JPEAUlsrun@1@W4_lsdevice@1@PEBUlsneighborinfo@1@5HHPEAPEAJ666@Z
    long LsGetFullMixedInfoForOneCharInFragm(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, long, WindissectOpaque *, int, WindissectOpaque const *, WindissectOpaque const *, int, int, long * *, long * *, long * *, long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetFullMixedInfoForOneGlyphInFragm@Ptls6@@YAJPEAUtxtobj@1@PEBUlschp@1@PEAUtxtfragm@1@JJPEAUlsrun@1@W4_lsdevice@1@PEBUlsneighborinfo@1@5HHPEAPEAJ666PEAJPEAE@Z
    long LsGetFullMixedInfoForOneGlyphInFragm(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, long, long, WindissectOpaque *, int, WindissectOpaque const *, WindissectOpaque const *, int, int, long * *, long * *, long * *, long * *, long *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetGlyphCompressionInfoFullMixedWrapper@Ptls6@@YAJPEAUtxtils@1@PEBUlschp@1@W4_lsdevice@1@KPEBUlsglyphruninfo@1@PEBUlsneighborinfo@1@4JPEAPEAJ5@Z
    long LsGetGlyphCompressionInfoFullMixedWrapper(WindissectOpaque *, WindissectOpaque const *, int, unsigned long, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, long, long * *, long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetGlyphExpansionInfoFullMixedWrapper@Ptls6@@YAJPEAUtxtils@1@PEBUlschp@1@W4_lsdevice@1@KPEBUlsglyphruninfo@1@PEBUlsneighborinfo@1@4JPEAPEAJ5PEAEPEAJ@Z
    long LsGetGlyphExpansionInfoFullMixedWrapper(WindissectOpaque *, WindissectOpaque const *, int, unsigned long, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, long, long * *, long * *, unsigned char *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextDnodeInChunkFragment@Ptls6@@YAJPEAUchunkfragmentiterator@1@PEAHPEAPEBVCLsDnode@1@PEAUheights@1@3PEAPEAUdobjfragm@1@@Z
    long LsGetNextDnodeInChunkFragment(WindissectOpaque *, int *, WindissectOpaque const * *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextDnodeInGroupChunk@Ptls6@@YAJPEAUgroupchunkiterator@1@PEAHPEAPEBVCLsDnode@1@@Z
    long LsGetNextDnodeInGroupChunk(WindissectOpaque *, int *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextDnodeInGroupChunkFragment@Ptls6@@YAJPEAUgroupchunkiteratorfragment@1@PEAHPEAPEBVCLsDnode@1@PEAPEAUdobjfragm@1@@Z
    long LsGetNextDnodeInGroupChunkFragment(WindissectOpaque *, int *, WindissectOpaque const * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextDnodeInSublineForSpans@Ptls6@@YAJPEAUsublineiteratorspans@1@PEAHPEAPEBVCLsDnode@1@@Z
    long LsGetNextDnodeInSublineForSpans(WindissectOpaque *, int *, WindissectOpaque const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextDnodeInSublineFragment@Ptls6@@YAJPEAUsublinefragmentiterator@1@PEAHPEAPEBVCLsDnode@1@PEAUheights@1@3PEAPEAUdobjfragm@1@@Z
    long LsGetNextDnodeInSublineFragment(WindissectOpaque *, int *, WindissectOpaque const * *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextDnodeSkipBorders@Ptls6@@YAPEBVCLsDnode@1@PEBV21@@Z
    WindissectOpaque const * LsGetNextDnodeSkipBorders(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetNextImportantRunNti@Ptls6@@YAHJPEBUlschnke@1@JPEAJ@Z
    int LsGetNextImportantRunNti(long, WindissectOpaque const *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetObjDimSublineCore@Ptls6@@YAJPEBVCLsSubline@1@PEAUheights@1@1PEAJ@Z
    long LsGetObjDimSublineCore(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetOpticalEndText@Ptls6@@YAJPEAVCLsObject@1@PEAUdobjfragm@1@PEAUlsrun@1@JKPEAJ3@Z
    long LsGetOpticalEndText(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, long, unsigned long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetOpticalStartText@Ptls6@@YAJPEAVCLsObject@1@PEAUdobjfragm@1@PEAUlsrun@1@KPEAJ3@Z
    long LsGetOpticalStartText(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetPrevDobjForJust@Ptls6@@YAXPEBUlsgrchnk@1@JPEAJ@Z
    void LsGetPrevDobjForJust(WindissectOpaque const *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetPrevImportantRunNti@Ptls6@@YAHJPEBUlschnke@1@JPEAJ@Z
    int LsGetPrevImportantRunNti(long, WindissectOpaque const *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetSpanDupFromBorderDnodeReal@Ptls6@@YAXPEBVCLsSubline@1@PEBVCLsSpanNode@1@PEBVCLsDnodeInlineBorder@1@PEAHPEAJ44@Z
    void LsGetSpanDupFromBorderDnodeReal(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, int *, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetSpanDupFromDnode@Ptls6@@YAJPEAVCLsSubline@1@PEBVCLsSpanNode@1@PEBVCLsDnode@1@PEAJPEAH33343@Z
    long LsGetSpanDupFromDnode(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, long *, int *, long *, long *, long *, int *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetSpecialEffectsSublineCore@Ptls6@@YAIPEBVCLsDnode@1@0@Z
    unsigned int LsGetSpecialEffectsSublineCore(WindissectOpaque const *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetSpecialEffectsSublineFragmentCore@Ptls6@@YAIPEBVCLsSublineFragment@1@@Z
    unsigned int LsGetSpecialEffectsSublineFragmentCore(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetStartoppInfoFromBreakoppText@Ptls6@@YAXJPEBUlschnke@1@PEBUtxtbreakopp@1@PEAJ2PEAHPEAG@Z
    void LsGetStartoppInfoFromBreakoppText(long, WindissectOpaque const *, WindissectOpaque const *, long *, long *, int *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetTableCompressInfo@Ptls6@@YAJPEBUlsgrchnk@1@PEBQEAUdobjfragm@1@JJHJJHPEAJ22@Z
    long LsGetTableCompressInfo(WindissectOpaque const *, WindissectOpaque * const *, long, long, int, long, long, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGetTrailInfoText@Ptls6@@YAJPEAVCLsObject@1@PEAUdobjfragm@1@PEAUlsrun@1@PEAJ3@Z
    long LsGetTrailInfoText(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsGoOneLevelDeeper@Ptls6@@YAJJKPEAUtagLSPOINTUV@1@PEAPEAVCLsSubline@1@@Z
    long LsGoOneLevelDeeper(long, unsigned long, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsHandleFillLineObjectReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@JPEAJPEAW4fmtres@1@PEAH@Z
    long LsHandleFillLineObjectReal(WindissectOpaque *, WindissectOpaque *, long, long *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsHandleInlineBordersInHiddenRunsReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEAVCLsSpanNode@1@JPEAUlsspanedge@1@@Z
    long LsHandleInlineBordersInHiddenRunsReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsHandleSplatReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEAW4fmtres@1@@Z
    long LsHandleSplatReal(WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsHandleTab@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEAH@Z
    long LsHandleTab(WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsHeightsForBrReal@Ptls6@@YAXPEBVCLsSubline@1@PEAUheights@1@1@Z
    void LsHeightsForBrReal(WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIgindBaseFromIgind@Ptls6@@YAJPEBEPEBJJ@Z
    long LsIgindBaseFromIgind(unsigned char const *, long const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIgindBaseFromIgindFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsIgindBaseFromIgindFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIgindFirstFromIwchFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsIgindFirstFromIwchFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIgindLastFromIwch@Ptls6@@YAJPEBGPEBEJ@Z
    long LsIgindLastFromIwch(unsigned short const *, unsigned char const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIgindLastFromIwchFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsIgindLastFromIwchFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsInitTabsContextForAutoDecimalTabReal@Ptls6@@YAJPEAUlstabscontext@1@J@Z
    long LsInitTabsContextForAutoDecimalTabReal(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsInitializeAutoDecTabReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@J@Z
    long LsInitializeAutoDecTabReal(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsInterpretChanges@Ptls6@@YAXJJEJPEAJ0@Z
    void LsInterpretChanges(long, long, unsigned char, long, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsInterpretMap@Ptls6@@YAJPEBGJJPEAUtxtinf@1@PEAE@Z
    long LsInterpretMap(unsigned short const *, long, long, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsItbdMergeTabsReal@Ptls6@@YAJPEAUlstabscontext@1@PEBUlstabs@1@HJG@Z
    long LsItbdMergeTabsReal(WindissectOpaque *, WindissectOpaque const *, int, long, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIwchFirstFromIwch@Ptls6@@YAJPEBUtxtinf@1@J@Z
    long LsIwchFirstFromIwch(WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIwchFirstFromIwchFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsIwchFirstFromIwchFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIwchLastFromIwch@Ptls6@@YAJPEBUtxtinf@1@J@Z
    long LsIwchLastFromIwch(WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsIwchLastFromIwchFromFragm@Ptls6@@YAJPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    long LsIwchLastFromIwchFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsLwMultDivR@Ptls6@@YAJJJJ@Z
    long LsLwMultDivR(long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsMatchPresSublineCore@Ptls6@@YAJPEAVCLsSubline@1@@Z
    long LsMatchPresSublineCore(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsModifyFirstCharInChunk@Ptls6@@YAJJPEAUlschnke@1@JPEAJ@Z
    long LsModifyFirstCharInChunk(long, WindissectOpaque *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsModifyLastCharInChunk@Ptls6@@YAJJPEAUlschnke@1@JPEAJ@Z
    long LsModifyLastCharInChunk(long, WindissectOpaque *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsMoveClosingBorderAfterBreakReal@Ptls6@@YAJPEAVCLsSubline@1@PEBVCLsDnode@1@PEAPEBV31@PEAJ@Z
    long LsMoveClosingBorderAfterBreakReal(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNegativeSimpleSpaceJustification@Ptls6@@YAXPEBUlsgrchnk@1@JJJJW4_lsdevice@1@JPEAH@Z
    void LsNegativeSimpleSpaceJustification(WindissectOpaque const *, long, long, long, long, int, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNegativeSpaceJustification@Ptls6@@YAJPEBUlsgrchnk@1@JJJJW4_lsdevice@1@JPEAH@Z
    long LsNegativeSpaceJustification(WindissectOpaque const *, long, long, long, long, int, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewArrayFactory@Ptls6@@YAJPEAUlscontext@1@PEAPEAUarrayfactory@1@@Z
    long LsNewArrayFactory(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewBreakRecordLine@Ptls6@@YAJPEAUlscontext@1@PEAPEAUlsbreakrecline@1@@Z
    long LsNewBreakRecordLine(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewBreakRecordSubline@Ptls6@@YAJPEAUlscontext@1@PEAPEAUlsbreakrecsubl@1@@Z
    long LsNewBreakRecordSubline(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewChunkContextFromFactory@Ptls6@@YAJPEAUarrayfactory@1@PEAPEAVCLsChunkContext@1@@Z
    long LsNewChunkContextFromFactory(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewChunkFragmentIterator@Ptls6@@YAJPEAUlscontext@1@PEBVCLsChunkFragment@1@PEAVCLsChunkContext@1@HHHPEAPEAUchunkfragmentiterator@1@@Z
    long LsNewChunkFragmentIterator(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewFeasibilityInfo@Ptls6@@YAJPEAUlscontext@1@PEAPEAUlsfeasibilltyinfo@1@@Z
    long LsNewFeasibilityInfo(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewGroupChunkExt@Ptls6@@YAJPEAUlscontext@1@PEAPEAUgrchunkext@1@@Z
    long LsNewGroupChunkExt(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewGroupChunkExtFromFactory@Ptls6@@YAJPEAUarrayfactory@1@PEAPEAUgrchunkext@1@@Z
    long LsNewGroupChunkExtFromFactory(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewGroupChunkIterator@Ptls6@@YAJPEAUlscontext@1@W4CollectSublines@1@HPEBVCLsDnode@1@HPEAPEAUgroupchunkiterator@1@@Z
    long LsNewGroupChunkIterator(WindissectOpaque *, int, int, WindissectOpaque const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewGroupChunkIteratorFragment@Ptls6@@YAJPEAUlscontext@1@PEBVCLsSublineFragment@1@W4CollectSublines@1@PEBVCLsDnode@1@HHPEAHPEAPEAUgroupchunkiteratorfragment@1@@Z
    long LsNewGroupChunkIteratorFragment(WindissectOpaque *, WindissectOpaque const *, int, WindissectOpaque const *, int, int, int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewSublineFragmentIterator@Ptls6@@YAJPEBVCLsSublineFragment@1@HHHPEAPEAUsublinefragmentiterator@1@@Z
    long LsNewSublineFragmentIterator(WindissectOpaque const *, int, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNewSublineIteratorForSpans@Ptls6@@YAJPEBVCLsSubline@1@HHPEAPEAUsublineiteratorspans@1@@Z
    long LsNewSublineIteratorForSpans(WindissectOpaque const *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsNominalToIdealTextCore@Ptls6@@YAJKHHPEAUlschnke@1@JJPEAUtxtdim@1@@Z
    long LsNominalToIdealTextCore(unsigned long, int, int, WindissectOpaque *, long, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsOpenBorderReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEAUlsrun@1@@Z
    long LsOpenBorderReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsOpenInlineBorderSpanReal@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@PEAVCLsSpanNode@1@@Z
    long LsOpenInlineBorderSpanReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsParseYsr@Ptls6@@YAHJPEBUlschnke@1@JJW4_lskysr@1@GGPEAUlshyphact@1@@Z
    int LsParseYsr(long, WindissectOpaque const *, long, long, int, unsigned short, unsigned short, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsPointUV2FromPointUV1@Ptls6@@YAJKPEBUtagLSPOINTUV@1@0KPEAU21@@Z
    long LsPointUV2FromPointUV1(unsigned long, WindissectOpaque const *, WindissectOpaque const *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsPointXYFromPointUV@Ptls6@@YAJPEBUtagLSPOINT@1@KPEBUtagLSPOINTUV@1@PEAU21@@Z
    long LsPointXYFromPointUV(WindissectOpaque const *, unsigned long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsPositiveSimpleSpaceJustification@Ptls6@@YAXPEBUlsgrchnk@1@JJJJW4_lsdevice@1@JPEAH@Z
    void LsPositiveSimpleSpaceJustification(WindissectOpaque const *, long, long, long, long, int, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsPositiveSpaceJustification@Ptls6@@YAJPEBUlsgrchnk@1@JJJJW4_lsdevice@1@JPEAH@Z
    long LsPositiveSpaceJustification(WindissectOpaque const *, long, long, long, long, int, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsPrepareLineForDisplayProc@Ptls6@@YAJPEAVCLsLine@1@@Z
    long LsPrepareLineForDisplayProc(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProcessExternalObjectRun@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@JAEBUlsfrunobject@1@J@Z
    long LsProcessExternalObjectRun(WindissectOpaque *, WindissectOpaque *, long, WindissectOpaque const &, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProcessExternalTextRun@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@JAEBUlsfruntext@1@@Z
    long LsProcessExternalTextRun(WindissectOpaque *, WindissectOpaque *, long, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProposeBreakAfterSublineCore@Ptls6@@YAJPEBVCLsSubline@1@AEAW4BRKCOND@1@@Z
    long LsProposeBreakAfterSublineCore(WindissectOpaque const *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProposeBreakAfterTabPenSplat@Ptls6@@YAJPEBVCLsDnode@1@PEAW4BRKCOND@1@@Z
    long LsProposeBreakAfterTabPenSplat(WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProposeBreakAfterText@Ptls6@@YAJJPEBUlschnke@1@PEAW4BRKCOND@1@@Z
    long LsProposeBreakAfterText(long, WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProposeBreakBeforeSublineCore@Ptls6@@YAJPEBVCLsSubline@1@AEAW4BRKCOND@1@@Z
    long LsProposeBreakBeforeSublineCore(WindissectOpaque const *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProposeBreakBeforeTabPenSplat@Ptls6@@YAJPEBVCLsDnode@1@PEAW4BRKCOND@1@@Z
    long LsProposeBreakBeforeTabPenSplat(WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsProposeBreakBeforeText@Ptls6@@YAJJPEBUlschnke@1@PEAW4BRKCOND@1@@Z
    long LsProposeBreakBeforeText(long, WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQueryCpPpointText@Ptls6@@YAJPEAVCLsObject@1@JPEBUlsqin@1@PEAUlsqout@1@@Z
    long LsQueryCpPpointText(WindissectOpaque *, long, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQueryLineCpPpoint@Ptls6@@YAJPEAVCLsLine@1@JJPEAUlsqsubinfo@1@PEAJPEAUlstextcell@1@@Z
    long LsQueryLineCpPpoint(WindissectOpaque *, long, long, WindissectOpaque *, long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQueryLineDup@Ptls6@@YAJPEAVCLsLine@1@PEAUlslinearea@1@@Z
    long LsQueryLineDup(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQueryLineMaxDepth@Ptls6@@YAJPEAVCLsLine@1@PEAJ@Z
    long LsQueryLineMaxDepth(WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQueryLinePointPcp@Ptls6@@YAJPEAVCLsLine@1@PEBUtagLSPOINTUV@1@JPEAUlsqsubinfo@1@PEAJPEAUlstextcell@1@@Z
    long LsQueryLinePointPcp(WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque *, long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQueryPointPcpText@Ptls6@@YAJPEAVCLsObject@1@PEBUtagLSPOINTUV@1@PEBUlsqin@1@PEAUlsqout@1@@Z
    long LsQueryPointPcpText(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQuerySpanStatic@Ptls6@@YAJPEAVCLsSubline@1@PEBVCLsSpanNode@1@HJPEAPEAUlsspanclient@1@PEAUtagLSPOINTUV@1@3PEAKPEAJ555555555555555555PEAH6@Z
    long LsQuerySpanStatic(WindissectOpaque *, WindissectOpaque const *, int, long, WindissectOpaque * *, WindissectOpaque *, WindissectOpaque *, unsigned long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, long *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQuerySublineCpPpointCore@Ptls6@@YAJPEAVCLsSubline@1@JJPEAUlsqsubinfo@1@PEAJPEAUlstextcell@1@@Z
    long LsQuerySublineCpPpointCore(WindissectOpaque *, long, long, WindissectOpaque *, long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQuerySublinePointPcpCore@Ptls6@@YAJPEAVCLsSubline@1@PEBUtagLSPOINTUV@1@JPEAUlsqsubinfo@1@PEAJPEAUlstextcell@1@@Z
    long LsQuerySublinePointPcpCore(WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque *, long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQuickAdjustExactReal@Ptls6@@YAXPEAPEAVCLsObject@1@JJHPEAJ11@Z
    void LsQuickAdjustExactReal(WindissectOpaque * *, long, long, int, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQuickBreakText@Ptls6@@YAJPEAVCLsObject@1@JPEAUlsrun@1@PEAHPEAVLSCHCNT@1@PEAJ4@Z
    long LsQuickBreakText(WindissectOpaque *, long, WindissectOpaque *, int *, WindissectOpaque *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsQuickFormatting@Ptls6@@YAJPEAVCLsSubline@1@PEAUlsformatcontext@1@JPEAHPEAJ3222PEAUlsfetchresult@1@@Z
    long LsQuickFormatting(WindissectOpaque *, WindissectOpaque *, long, int *, long *, long *, int *, int *, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsReleaseChunkContextToFactory@Ptls6@@YAXPEAUarrayfactory@1@PEAVCLsChunkContext@1@@Z
    void LsReleaseChunkContextToFactory(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsReleaseChunkFragmentArraysToFactory@Ptls6@@YAXPEAUarrayfactory@1@PEAUlschunkgragmentarrays@1@@Z
    void LsReleaseChunkFragmentArraysToFactory(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsReleaseFetchResult@Ptls6@@YAXPEAUlscontext@1@PEAUlsparaclient@1@PEBUlsfetchresult@1@@Z
    void LsReleaseFetchResult(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsReleaseGroupChunkExtToFactory@Ptls6@@YAXPEAUarrayfactory@1@PEAUgrchunkext@1@@Z
    void LsReleaseGroupChunkExtToFactory(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsReleaseTabsContextToFactory@Ptls6@@YAXPEAUarrayfactory@1@PEAUlstabscontext@1@@Z
    void LsReleaseTabsContextToFactory(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsRemoveBorderDnodeFromListReal@Ptls6@@YAXPEAVCLsDnode@1@@Z
    void LsRemoveBorderDnodeFromListReal(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsReplaceArrayFromBlob@Ptls6@@YAJPEAUlstxtblob@1@JJPEAPEAX@Z
    long LsReplaceArrayFromBlob(WindissectOpaque *, long, long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsResolveClientPositionedTabReal@Ptls6@@YAJPEAUlstabscontext@1@JJPEAULSCALTBD@1@PEAH@Z
    long LsResolveClientPositionedTabReal(WindissectOpaque *, long, long, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsResolveHardBreak@Ptls6@@YAJPEAVCLsLine@1@PEAUlshardstopinfo@1@HHHHHJJJJJPEAPEAUlsbreakrecline@1@PEAUlsbreakinfo@1@@Z
    long LsResolveHardBreak(WindissectOpaque *, WindissectOpaque *, int, int, int, int, int, long, long, long, long, long, WindissectOpaque * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsResolvePrevTabCoreReal@Ptls6@@YAJPEAUlstabscontext@1@PEAVCLsDnode@1@JPEAJ@Z
    long LsResolvePrevTabCoreReal(WindissectOpaque *, WindissectOpaque *, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsResolveTrailingAreaForTextGroupChunk@Ptls6@@YAJPEAUgrchunkext@1@PEAJ1@Z
    long LsResolveTrailingAreaForTextGroupChunk(WindissectOpaque *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsRestrictBreakSearchSublineReal@Ptls6@@YAJPEBVCLsSubline@1@JPEAVLSORDINALINT@1@@Z
    long LsRestrictBreakSearchSublineReal(WindissectOpaque const *, long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsRightMarginIncreasing@Ptls6@@YAJPEBVCLsSubline@1@PEBUlsformatcontext@1@J@Z
    long LsRightMarginIncreasing(WindissectOpaque const *, WindissectOpaque const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsScaleExtNonText@Ptls6@@YAXPEAUtxtln@1@KJPEAJ@Z
    void LsScaleExtNonText(WindissectOpaque *, unsigned long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsScaleSidesInPlace@Ptls6@@YAXPEBUlsgrchnk@1@KPEAH@Z
    void LsScaleSidesInPlace(WindissectOpaque const *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsScaleSpaces@Ptls6@@YAXPEBUlsgrchnk@1@KJJ@Z
    void LsScaleSpaces(WindissectOpaque const *, unsigned long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetBeforeJust@Ptls6@@YAJPEBUlsgrchnk@1@K@Z
    long LsSetBeforeJust(WindissectOpaque const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetBreakSublineAtTheEnd@Ptls6@@YAJPEAVCLsSubline@1@JJ@Z
    long LsSetBreakSublineAtTheEnd(WindissectOpaque *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetBreakSublineCore@Ptls6@@YAJPEBVCLsSublineFragment@1@PEAVCLsSubline@1@@Z
    long LsSetBreakSublineCore(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetBreakTxtobjs@Ptls6@@YAJJPEAUlschnke@1@PEAPEAUtxtfragm@1@JJ@Z
    long LsSetBreakTxtobjs(long, WindissectOpaque *, WindissectOpaque * *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharJustForHyphenWithoutYsrInBreakReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJJ@Z
    long LsSetCharJustForHyphenWithoutYsrInBreakReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharJustInStartReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtstartopp@1@JPEBUlschnke@1@JJ@Z
    long LsSetCharJustInStartReal(WindissectOpaque *, WindissectOpaque *, long, WindissectOpaque const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharJustWithoutHyphenInBreakReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJ@Z
    long LsSetCharJustWithoutHyphenInBreakReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharNtiForHyphenWithoutYsrInBreakReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJJ@Z
    long LsSetCharNtiForHyphenWithoutYsrInBreakReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharNtiInStart@Ptls6@@YAJPEAUtxtln@1@PEAUtxtstartopp@1@JPEBUlschnke@1@JJPEAH@Z
    long LsSetCharNtiInStart(WindissectOpaque *, WindissectOpaque *, long, WindissectOpaque const *, long, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharNtiUseTruncateReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJH@Z
    long LsSetCharNtiUseTruncateReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetCharNtiWithoutHyphenInBreak@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJPEAH@Z
    long LsSetCharNtiWithoutHyphenInBreak(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetClipping@Ptls6@@YAXPEAVCLsSubline@1@J@Z
    void LsSetClipping(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetFInlineBorderEncounted@Ptls6@@YAXPEAVCLsSubline@1@@Z
    void LsSetFInlineBorderEncounted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetGlyphJustInBreakReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJJJH@Z
    long LsSetGlyphJustInBreakReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, long, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetGlyphJustInStartReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtstartopp@1@PEBUlschnke@1@JJJJ@Z
    long LsSetGlyphJustInStartReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetGlyphsHyphenateUseTruncateReal@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJ@Z
    long LsSetGlyphsHyphenateUseTruncateReal(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetGlyphsInBreak@Ptls6@@YAJPEAUtxtln@1@PEAUtxtbreakopp@1@PEBUlschnke@1@JJJJHPEAH@Z
    long LsSetGlyphsInBreak(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, long, long, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetGlyphsInStart@Ptls6@@YAJPEAUtxtln@1@PEAUtxtstartopp@1@PEBUlschnke@1@JJJJPEAH@Z
    long LsSetGlyphsInStart(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, long, long, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetLineProperties@Ptls6@@YAJPEBUlslinerestr@1@PEBUlspap@1@PEAUlsformarprop@1@PEAULSADJUSTCONTEXT@1@@Z
    long LsSetLineProperties(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetNullsInArraysInTxtobj@Ptls6@@YAXPEAUtxtobj@1@@Z
    void LsSetNullsInArraysInTxtobj(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetTextBreaking@Ptls6@@YAJPEAVCLsObjectContext@1@JPEBUlsbrk@1@JPEBE@Z
    long LsSetTextBreaking(WindissectOpaque *, long, WindissectOpaque const *, long, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetTextCompression@Ptls6@@YAJPEAVCLsObjectContext@1@JJPEBUlspract@1@JPEBE@Z
    long LsSetTextCompression(WindissectOpaque *, long, long, WindissectOpaque const *, long, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetTextConfig@Ptls6@@YAJPEAVCLsObjectContext@1@PEBUlstxtcfg@1@@Z
    long LsSetTextConfig(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetTextExpansion@Ptls6@@YAJPEAVCLsObjectContext@1@JPEBUlsexpan@1@JPEBE@Z
    long LsSetTextExpansion(WindissectOpaque *, long, WindissectOpaque const *, long, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetTextModWidthPairs@Ptls6@@YAJPEAVCLsObjectContext@1@JPEBUlspairact@1@JPEBE@Z
    long LsSetTextModWidthPairs(WindissectOpaque *, long, WindissectOpaque const *, long, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSetTextParaParams@Ptls6@@YAJPEAVCLsObjectLineContext@1@PEBUlstppr@1@@Z
    long LsSetTextParaParams(WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSublineEnumCore@Ptls6@@YAJPEBVCLsSubline@1@AEAJPEAPEAUlsdnodedetails@1@@Z
    long LsSublineEnumCore(WindissectOpaque const *, long &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSublineUpdateSpacingCore@Ptls6@@YAJPEAVCLsSubline@1@JPEBJ@Z
    long LsSublineUpdateSpacingCore(WindissectOpaque *, long, long const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsSubtractArraysIntoFirst@Ptls6@@YAXJPEAJPEBJ@Z
    void LsSubtractArraysIntoFirst(long, long *, long const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsTruncateSublineCoreReal@Ptls6@@YAJPEBVCLsSubline@1@JHPEAVCLsTruncationPointSubline@1@AEAH2@Z
    long LsTruncateSublineCoreReal(WindissectOpaque const *, long, int, WindissectOpaque *, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsTruncateText@Ptls6@@YAJPEBUlocchnk@1@PEAJPEAVLSCHCNT@1@@Z
    long LsTruncateText(WindissectOpaque const *, long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsUndoAppliedCharNti@Ptls6@@YAXPEAJ0PEAUtxtinf@1@JE0@Z
    void LsUndoAppliedCharNti(long *, long *, WindissectOpaque *, long, unsigned char, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFCanBreakBeforeNextChunkCore@Ptls6@@YAJPEBVCLsDnode@1@AEAH@Z
    long LsdnFCanBreakBeforeNextChunkCore(WindissectOpaque const *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishByCurrentPosition@Ptls6@@YAJPEAVCLsDnode@1@PEAVILsObjectFormattingSession@1@PEAVCLsObject@1@AEBUOBJDIM@1@H@Z
    long LsdnFinishByCurrentPosition(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishDelete@Ptls6@@YAJPEAVCLsDnode@1@J@Z
    long LsdnFinishDelete(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishSimple@Ptls6@@YAJPEAVCLsDnode@1@JPEAVCLsObject@1@PEBUOBJDIM@1@H@Z
    long LsdnFinishSimple(WindissectOpaque *, long, WindissectOpaque *, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishTexTab@Ptls6@@YAJPEAVCLsDnode@1@PEAVCLsObject@1@W4_tabres@1@@Z
    long LsdnFinishTexTab(WindissectOpaque *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishTextEol@Ptls6@@YAJPEAVCLsDnode@1@PEAVCLsObject@1@JW4_stopres@1@@Z
    long LsdnFinishTextEol(WindissectOpaque *, WindissectOpaque *, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishTextGeneral@Ptls6@@YAJPEAVCLsDnode@1@JPEAVCLsObject@1@JH@Z
    long LsdnFinishTextGeneral(WindissectOpaque *, long, WindissectOpaque *, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnFinishWordRegular@Ptls6@@YAJPEAVCLsDnode@1@JPEAUlsrun@1@PEBUlschp@1@PEAVCLsObject@1@PEBUOBJDIM@1@HHH@Z
    long LsdnFinishWordRegular(WindissectOpaque *, long, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque *, WindissectOpaque const *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnGetDupText@Ptls6@@YAJPEAVCLsDnode@1@PEAJ@Z
    long LsdnGetDupText(WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnGetHeightPresText@Ptls6@@YAJPEAVCLsDnode@1@PEAUheights@1@@Z
    long LsdnGetHeightPresText(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnGetPenAtBeginningOfDnode@Ptls6@@YAJPEAVCLsDnode@1@PEAKPEAJ2@Z
    long LsdnGetPenAtBeginningOfDnode(WindissectOpaque *, unsigned long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LsdnGetUrPenAtBeginningOfChunk@Ptls6@@YAJPEAVCLsDnode@1@PEAKPEAJ2@Z
    long LsdnGetUrPenAtBeginningOfChunk(WindissectOpaque *, unsigned long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LssbFDoneDisplay@Ptls6@@YAJPEAVILsSubline@1@PEAH@Z
    long LssbFDoneDisplay(WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LssbGetObjDimSubline@Ptls6@@YAJPEBVILsSubline@1@PEAKPEAUOBJDIM@1@@Z
    long LssbGetObjDimSubline(WindissectOpaque const *, unsigned long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToNextDnode@Ptls6@@YAXAEAPEBVCLsDnode@1@AEAUtagLSPOINTUV@1@@Z
    void MoveToNextDnode(WindissectOpaque const * &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToPrevDnode@Ptls6@@YAXAEAPEBVCLsDnode@1@AEAUtagLSPOINTUV@1@PEAH@Z
    void MoveToPrevDnode(WindissectOpaque const * &, WindissectOpaque &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextBreakLoopUseTruncateReal@Ptls6@@YAJJPEBUlschnke@1@JJPEAHPEAUlstxtbrkinfo@1@@Z
    long NextBreakLoopUseTruncateReal(long, WindissectOpaque const *, long, long, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextBreakLoopWithoutTruncate@Ptls6@@YAJJPEBUlschnke@1@HJJPEAHPEAUlstxtbrkinfo@1@@Z
    long NextBreakLoopWithoutTruncate(long, WindissectOpaque const *, int, long, long, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrevBreakLoopUseTruncateReal@Ptls6@@YAJJPEBUlschnke@1@JJPEAHPEAUlstxtbrkinfo@1@@Z
    long PrevBreakLoopUseTruncateReal(long, WindissectOpaque const *, long, long, int *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrevBreakLoopWithoutTruncate@Ptls6@@YAJJPEBUlschnke@1@HJJPEAHPEAUlstxtbrkinfo@1@@Z
    long PrevBreakLoopWithoutTruncate(long, WindissectOpaque const *, int, long, long, int *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAggregateJustInfoInFragmReal@Ptls6@@YAJPEBUlschnke@1@PEAPEAUtxtfragm@1@HPEBUtxtstartopp@1@JHPEBUtxtbreakopp@1@J@Z
    long SetAggregateJustInfoInFragmReal(WindissectOpaque const *, WindissectOpaque * *, int, WindissectOpaque const *, long, int, WindissectOpaque const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommonTextMetrics@Ptls6@@YAXPEAUheights@1@0AEBU21@1HPEAH@Z
    void SetCommonTextMetrics(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const &, WindissectOpaque const &, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetJustNewSizeReal@Ptls6@@YAXJPEBUlschnke@1@HPEBUtxtstartopp@1@HPEBUtxtbreakopp@1@PEAPEAUtxtfragm@1@@Z
    void SetJustNewSizeReal(long, WindissectOpaque const *, int, WindissectOpaque const *, int, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsAllocMemoryCore@Ptls6@@YAJPEAUtsmemorycontext@1@JPEAPEAX@Z
    long TsAllocMemoryCore(WindissectOpaque *, long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCalculateLineVariantRestriction@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtspenaltycalcstate@1@1PEAPEAUtslinevariantrestriction@1@@Z
    long TsCalculateLineVariantRestriction(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCalculateLineVariantRestrictionCore@Ptls6@@YAJPEAUtspenaltycontext@1@PEBUtspenaltycalcstate@1@1PEAPEAUtslinevariantrestriction@1@@Z
    long TsCalculateLineVariantRestrictionCore(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCalculatePenalty@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtslinepenaltyinfo@1@PEAUtspenaltycalcstate@1@PEAPEAU41@PEAH@Z
    long TsCalculatePenalty(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCalculatePenaltyCore@Ptls6@@YAJPEAUtspenaltycontext@1@PEBUtslinepenaltyinfo@1@PEBUtspenaltycalcstate@1@PEAPEAU41@PEAH@Z
    long TsCalculatePenaltyCore(WindissectOpaque *, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCheckAbsForRestriction@Ptls6@@YAJJJ@Z
    long TsCheckAbsForRestriction(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCheckAdditionForLongPara@Ptls6@@YAJJJJ@Z
    long TsCheckAdditionForLongPara(long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCheckPositiveAdditionForLongPara@Ptls6@@YAJJJJ@Z
    long TsCheckPositiveAdditionForLongPara(long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCreateDefaultPenaltyContextCore@Ptls6@@YAJPEAUlscontext@1@PEAPEAUtspenaltycontext@1@@Z
    long TsCreateDefaultPenaltyContextCore(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCreateForcedLinePenaltyInfoCore@Ptls6@@YAJPEAUtspenaltycontext@1@PEAPEAUtslinepenaltyinfo@1@@Z
    long TsCreateForcedLinePenaltyInfoCore(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCreateLinePenaltyInfoCore@Ptls6@@YAJPEAUtspenaltycontext@1@JHHHW4_lshyphenquality@1@HJJJPEBJJHHW4_lsmathbreakquality@1@JPEAPEAUtslinepenaltyinfo@1@@Z
    long TsCreateLinePenaltyInfoCore(WindissectOpaque *, long, int, int, int, int, int, long, long, long, long const *, long, int, int, int, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCreateMemoryContext@Ptls6@@YAJP6APEAXPEAXJ@ZP6AX00@ZP6APEAX00J@Z0P6AXPEBD4HK@Z4PEAPEAUtsmemorycontext@1@@Z
    long TsCreateMemoryContext(void * ( *)(void *, long), void ( *)(void *, void *), void * ( *)(void *, void *, long), void *, void ( *)(char const *, char const *, int, unsigned long), char const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsCreateQuickHeapFactory@Ptls6@@YAJPEAUtsmemorycontext@1@JJJPEAPEAUqheapfactory@1@@Z
    long TsCreateQuickHeapFactory(WindissectOpaque *, long, long, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyLinePenaltyInfo@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtslinepenaltyinfo@1@@Z
    long TsDestroyLinePenaltyInfo(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyLinePenaltyInfoCore@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtslinepenaltyinfo@1@@Z
    long TsDestroyLinePenaltyInfoCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyLinePenaltyRestriction@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtslinevariantrestriction@1@@Z
    long TsDestroyLinePenaltyRestriction(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyMemoryCore@Ptls6@@YAXPEAUtsmemorycontext@1@PEAX@Z
    void TsDestroyMemoryCore(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyPenaltyCalculationState@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtspenaltycalcstate@1@@Z
    long TsDestroyPenaltyCalculationState(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyPenaltyCalculationStateCore@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtspenaltycalcstate@1@@Z
    long TsDestroyPenaltyCalculationStateCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyPenaltyContextCore@Ptls6@@YAJPEAUtspenaltycontext@1@@Z
    long TsDestroyPenaltyContextCore(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyQuickHeap@Ptls6@@YAXPEAUqheap@1@@Z
    void TsDestroyQuickHeap(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDestroyQuickHeapFactory@Ptls6@@YAXPEAUqheapfactory@1@@Z
    void TsDestroyQuickHeapFactory(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsDuplicateLinePenaltyInfo@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtslinepenaltyinfo@1@PEAPEAU31@@Z
    long TsDuplicateLinePenaltyInfo(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsFCanMergePenaltyCalculations@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtspenaltycalcstate@1@1PEAH@Z
    long TsFCanMergePenaltyCalculations(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsFComparePenalty@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtspenaltycalcstate@1@1PEAH@Z
    long TsFComparePenalty(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsFComparePenaltyCore@Ptls6@@YAJPEBUtspenaltycontext@1@PEBUtspenaltycalcstate@1@1PEAH@Z
    long TsFComparePenaltyCore(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsFCompareRestriction@Ptls6@@YAJPEAUtspenaltycontext@1@PEAUtslinevariantrestriction@1@1PEAH@Z
    long TsFCompareRestriction(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsInitPenaltyState@Ptls6@@YAJPEAUtspenaltycontext@1@W4_tspenaltyparatype@1@PEAPEAUtspenaltycalcstate@1@@Z
    long TsInitPenaltyState(WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsInitPenaltyStateCore@Ptls6@@YAJPEAUtspenaltycontext@1@HHPEAPEAUtspenaltycalcstate@1@@Z
    long TsInitPenaltyStateCore(WindissectOpaque *, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsIsBetterThanAnySmallerCore@Ptls6@@YAHPEAUtspenaltycontext@1@PEAUtslinepenaltyinfo@1@@Z
    int TsIsBetterThanAnySmallerCore(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsNewQuickHeapFromFactory@Ptls6@@YAJPEAUqheapfactory@1@PEAPEAUqheap@1@@Z
    long TsNewQuickHeapFromFactory(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsPvNewQuickProc@Ptls6@@YAJPEAUqheap@1@PEAPEAX@Z
    long TsPvNewQuickProc(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsReallocMemoryCore@Ptls6@@YAJPEAUtsmemorycontext@1@JJPEAPEAX@Z
    long TsReallocMemoryCore(WindissectOpaque *, long, long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsReleaseQuickHeapToFactory@Ptls6@@YAXPEAUqheapfactory@1@PEAUqheap@1@@Z
    void TsReleaseQuickHeapToFactory(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TsSetPenaltyContextCore@Ptls6@@YAJPEAUtspenaltycontext@1@W4_lspenaltytolerance@1@111@Z
    long TsSetPenaltyContextCore(WindissectOpaque *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WchFromFragm@Ptls6@@YAGPEAUtxtobj@1@PEAUtxtfragm@1@J@Z
    unsigned short WchFromFragm(WindissectOpaque *, WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidthClusterInObj@Ptls6@@YAJPEAUtxtobj@1@J@Z
    long WidthClusterInObj(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidthElemInObj@Ptls6@@YAJPEAUtxtobj@1@W4_lsdevice@1@J@Z
    long WidthElemInObj(WindissectOpaque *, int, long);
};
