/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TPPageLayout.h>
#import <iWorkImport/TSWPLayoutParent.h>
#import <iWorkImport/TSWPColumnMetrics.h>
#import <iWorkImport/TPAttachmentLayoutParent.h>

@protocol TPHeaderFooterProvider, TPMasterDrawableProvider;
@class TSWPLayout, TPMarginAdjustLayout, TPInflatableFootnoteContainerLayout, TSURetainedPointerKeyDictionary, , NSArray, TPFootnoteContainerLayout, TSWPPadding;

@interface TPPaginatedPageLayout : TPPageLayout <TSWPLayoutParent, TSWPColumnMetrics, TPAttachmentLayoutParent> {

	TSWPLayout* _headerFooterLayouts[2][3];
	CGRect _headerFooterClipRects[23];
	CGRect _headerFooterBorderRects[23];
	TPMarginAdjustLayout* _marginAdjustLayout;
	TPInflatableFootnoteContainerLayout* _footnoteContainerLayout;
	unsigned _pageNumber;
	unsigned _pageCount;
	BOOL _childLayoutsValid;
	TSURetainedPointerKeyDictionary* _oldChildLayouts;
	<TPHeaderFooterProvider>* _headerFooterProvider;
	<TPMasterDrawableProvider>* _masterDrawableProvider;
	unsigned _contentFlags;

}

@property (nonatomic,readonly) float headerHeight; 
@property (nonatomic,readonly) float footerHeight; 
@property (nonatomic,readonly) NSArray * floatingDrawableLayouts; 
@property (nonatomic,readonly) NSArray * anchoredDrawableLayouts; 
@property (nonatomic,readonly) TPMarginAdjustLayout * marginAdjustLayout; 
@property (nonatomic,readonly) TPFootnoteContainerLayout * footnoteContainerLayout;              //@synthesize footnoteContainerLayout=_footnoteContainerLayout - In the implementation block
@property (nonatomic,readonly) unsigned pageNumber; 
@property (nonatomic,readonly) unsigned pageCount; 
@property (nonatomic,readonly) <TPHeaderFooterProvider> * headerFooterProvider; 
@property (nonatomic,readonly) <TPMasterDrawableProvider> * masterDrawableProvider; 
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) float textScaleFactor; 
-(CGRect)bodyRect;
-(id)dependentLayouts;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(void)wrappableChildInvalidated:(id)arg1 ;
-(BOOL)textIsVertical;
-(CGSize)adjustedInsets;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(float)widthForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)gapForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 ;
-(float)positionForColumnIndex:(unsigned)arg1 bodyWidth:(float)arg2 outWidth:(float*)arg3 outGap:(float*)arg4 ;
-(id)layoutMargins;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(float)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(unsigned)pageCountForAttachment:(id)arg1 ;
-(unsigned)pageNumberForAttachment:(id)arg1 ;
-(void)addAttachmentLayout:(id)arg1 ;
-(id)existingAttachmentLayoutForInfo:(id)arg1 ;
-(void)processWidowAndInflation;
-(id)masterDrawableProvider;
-(id)headerFooterProvider;
-(BOOL)allowsBody;
-(BOOL)allowsFootnotes;
-(void)resetFootnoteLayoutsForReinflation;
-(id)footnoteContainerLayout;
-(float)heightAvailableForFootnotes;
-(void)invalidateLayoutsForPageCountChange;
-(BOOL)allowsHeaderFooter;
-(BOOL)isReadyForBodyLayout;
-(void)invalidateBodyAndMarginLayouts;
-(void)invalidateHeaderFooterLayoutsCache;
-(void)invalidateFootnoteContainers;
-(void)invalidateHeaderFooterLayouts;
-(void)invalidateFootnoteSeparatorLine;
-(void)rebuildChildLayoutsOnNextValidation;
-(BOOL)p_updateCachedHeaderFooterLayouts;
-(id)marginAdjustLayout;
-(void)p_invalidatePageControllerForDynamicOperation;
-(void)p_updateHeaderFooterClipAndBorderRects:(int)arg1 ;
-(void)p_updateHeaderFooterClipAndBorderRect;
-(id)headerFooterLayout:(int)arg1 atIndex:(int)arg2 ;
-(BOOL)shouldHeaderFooterBeVisibleForPageIndex:(unsigned)arg1 ;
-(id)floatingDrawableLayouts;
-(id)anchoredDrawableLayouts;
-(id)p_existingChildLayoutForInfo:(id)arg1 ;
-(BOOL)shouldHeaderFooterBeVisible:(int)arg1 ;
-(void)p_updateFromLayoutInfoProvider;
-(void)p_insertValidatedMasterLayouts;
-(void)p_insertBodyAndValidatedFloatingLayouts;
-(void)p_insertValidatedFloatingLayouts;
-(void)p_insertFootnoteContainerLayout;
-(void)p_insertValidatedHeaderFooterLayouts;
-(void)p_insertValidatedMarginAdjustLayout;
-(id)p_insertChildLayoutForInfo:(id)arg1 ;
-(id)p_orderedChildInfos;
-(BOOL)p_isHeaderFooter:(int)arg1 editingAtFragmentIndex:(int)arg2 ;
-(void)invalidateForDraggingDrawables;
-(CGRect)clipRectForHeaderFooter:(int)arg1 atIndex:(int)arg2 ;
-(CGRect)borderRectForHeaderFooter:(int)arg1 atIndex:(int)arg2 ;
-(BOOL)isHeaderFooterLayout:(id)arg1 ;
-(void)inflateFootnotesInFootnoteContainer:(id)arg1 ;
-(CGRect)footnoteContainerFrameWithSize:(CGSize)arg1 ;
-(id)layoutsCausingWrapOnTextLayoutTarget:(id)arg1 ignoreIntersection:(BOOL)arg2 ;
-(void)evacuateOldChildLayoutCache;
-(id)p_insertValidatedChildLayoutForInfo:(id)arg1 ;
-(void)validate;
-(void)dealloc;
-(unsigned)pageCount;
-(id).cxx_construct;
-(unsigned)columnCount;
-(float)headerHeight;
-(float)footerHeight;
-(unsigned)pageNumber;
@end
