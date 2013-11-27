/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayout.h>
#import <iWorkImport/TSWPLayoutTarget.h>
#import <iWorkImport/TSWPLayoutOwner.h>

@class NSMutableArray, TSDCanvas, TSDLayout, TSWPLayoutManager, TSDBezierPath;

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner> {

	TSWPLayoutManager* _layoutManager;
	NSMutableArray* _columns;
	BOOL _textLayoutValid;

}

@property (nonatomic,readonly) TSWPLayoutManager * layoutManager; 
@property (nonatomic,readonly) BOOL textLayoutValid; 
@property (nonatomic,readonly) TSDBezierPath * interiorClippingPath; 
@property (nonatomic,readonly) BOOL shouldWrapAroundExternalDrawables; 
@property (nonatomic,readonly) NSMutableArray * columns;                                            //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) <TSWPOffscreenColumn> * previousTargetLastColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* previousTargetTopicNumbers; 
@property (nonatomic,readonly) <TSWPOffscreenColumn> * nextTargetFirstColumn; 
@property (nonatomic,readonly) const TSWPTopicNumberHints* nextTargetTopicNumbers; 
@property (nonatomic,readonly) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer; 
@property (nonatomic,readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider; 
@property (nonatomic,readonly) TSPObject<TSDHint> * nextTargetFirstChildHint; 
@property (nonatomic,readonly) CGSize minSize; 
@property (nonatomic,readonly) CGSize maxSize; 
@property (nonatomic,readonly) CGSize currentSize; 
@property (nonatomic,readonly) CGPoint position; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (nonatomic,readonly) unsigned autosizeFlags; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int naturalAlignment; 
@property (nonatomic,readonly) int naturalDirection; 
@property (nonatomic,readonly) BOOL wantsLineFragments; 
@property (nonatomic,readonly) unsigned pageNumber; 
@property (nonatomic,readonly) unsigned pageCount; 
@property (nonatomic,readonly) BOOL textIsVertical; 
@property (nonatomic,readonly) BOOL layoutIsValid; 
@property (nonatomic,readonly) float maxAnchorY; 
@property (nonatomic,readonly) CGRect maskRect; 
@property (nonatomic,retain) NSMutableArray * anchoredDrawablesForRelayout; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (nonatomic,readonly) TSDLayout * parentLayoutForInlineAttachments; 
@property (nonatomic,readonly) BOOL shouldHyphenate; 
@property (nonatomic,readonly) CFLocaleRef hyphenationLocale; 
-(Class)repClassOverride;
-(void)invalidateSize;
-(id)computeLayoutGeometry;
-(void)layoutSearchForString:(id)arg1 options:(unsigned)arg2 hitBlock:(/*^block*/ id)arg3 ;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(id)dependentLayouts;
-(void)parentWillChangeTo:(id)arg1 ;
-(void)parentDidChange;
-(CGPoint)capturedInfoPositionForAttachment;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/ id)arg1 ;
-(id)reliedOnLayouts;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldProvideSizingGuides;
-(void)wrappableChildInvalidated:(id)arg1 ;
-(BOOL)textIsVertical;
-(void)invalidateTextLayout;
-(id)columnMetricsForCharIndex:(unsigned)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(int)arg2 afterCharIndex:(unsigned)arg3 ;
-(id)currentAnchoredDrawableLayouts;
-(id)validatedLayoutForAnchoredDrawable:(id)arg1 ;
-(unsigned)autosizeFlags;
-(id)validatedLayoutForInlineDrawable:(id)arg1 ;
-(id)previousTargetLastColumn;
-(id)footnoteHeightMeasurer;
-(id)footnoteMarkProvider;
-(id)textWrapper;
-(id)textColorOverride;
-(float)maxAnchorY;
-(id)nextTargetFirstChildHint;
-(void)setNeedsDisplayInTargetRect:(CGRect)arg1 ;
-(const TSWPTopicNumberHints*)nextTargetTopicNumbers;
-(id)nextTargetFirstColumn;
-(id)currentInlineDrawableLayouts;
-(void)addAttachmentLayout:(id)arg1 ;
-(const TSWPTopicNumberHints*)previousTargetTopicNumbers;
-(BOOL)isLastTarget;
-(int)naturalAlignment;
-(id)interiorClippingPath;
-(id)initWithInfo:(id)arg1 frame:(CGRect)arg2 ;
-(id)p_wpLayoutParent;
-(id)additionalReliedOnLayoutsForTextWrap;
-(void*)initialLayoutState;
-(BOOL)p_parentAutosizes;
-(void)p_validateTextLayout;
-(id)p_firstAncestorRespondingToSelector:(SEL)arg1 ;
-(BOOL)isLayoutOffscreen;
-(void)invalidateParentForAutosizing;
-(CGRect)p_rectForSelection:(id)arg1 useParagraphModeRects:(BOOL)arg2 ;
-(CGRect)targetRectForCanvasRect:(CGRect)arg1 ;
-(BOOL)invalidateForPageCountChange;
-(int)naturalDirection;
-(BOOL)wantsLineFragments;
-(BOOL)layoutIsValid;
-(CGRect)maskRect;
-(BOOL)textLayoutValid;
-(void)invalidateForFootnoteNumberingChange;
-(BOOL)shouldWrapAroundExternalDrawables;
-(CGSize)currentSize;
-(id)styleProvider;
-(void)validate;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(CGSize)maxSize;
-(CGPoint)position;
-(CGPoint)anchorPoint;
-(id)layoutManager;
-(CGSize)minSize;
-(CGRect)rectForSelection:(id)arg1 ;
-(unsigned)pageCount;
-(unsigned)pageNumber;
-(int)verticalAlignment;
-(id)canvas;
-(id)columns;
@end
