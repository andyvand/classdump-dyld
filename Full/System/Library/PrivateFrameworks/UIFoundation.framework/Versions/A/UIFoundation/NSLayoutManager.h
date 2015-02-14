/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCoding.h>
#import <UIFoundation/NSGlyphStorage.h>

@class NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, NSStorage, NSRunStorage, NSTextContainer, NSSortedArray, NSTextView, NSFont, NSBox, NSTabWell, NSAttributedString, NSArray;

@interface NSLayoutManager : NSObject <NSCoding, NSGlyphStorage> {

	NSTextStorage* _textStorage;
	NSGlyphGenerator* _glyphGenerator;
	NSTypesetter* _typesetter;
	NSMutableArray* _textContainers;
	NSStorage* _containerUsedRects;
	NSStorage* _glyphs;
	NSRunStorage* _containerRuns;
	NSRunStorage* _fragmentRuns;
	NSRunStorage* _glyphLocations;
	NSRunStorage* _glyphRotationRuns;
	CGRect _extraLineFragmentRect;
	CGRect _extraLineFragmentUsedRect;
	NSTextContainer* _extraLineFragmentContainer;
	NSSortedArray* _glyphHoles;
	NSSortedArray* _layoutHoles;
	struct {
		unsigned containersAreFull : 1;
		unsigned glyphsMightDrawOutsideLines : 1;
		unsigned backgroundLayoutEnabled : 1;
		unsigned resizingInProgress : 1;
		unsigned allowScreenFonts : 1;
		unsigned cachedRectArrayInUse : 1;
		unsigned displayInvalidationInProgress : 1;
		unsigned insertionPointNeedsUpdate : 1;
		unsigned layoutManagerInDirtyList : 1;
		unsigned originalFontOverride : 1;
		unsigned showInvisibleCharacters : 1;
		unsigned showControlCharacters : 1;
		unsigned delegateRespondsToDidInvalidate : 1;
		unsigned delegateRespondsToDidComplete : 1;
		unsigned glyphFormat : 2;
		unsigned textStorageRespondsToIsEditing : 1;
		unsigned notifyEditedInProgress : 1;
		unsigned containersChanged : 1;
		unsigned isGeneratingGlyphs : 1;
		unsigned hasNonGeneratedGlyphData : 1;
		unsigned inBackgroundLayout : 1;
		unsigned syncAlignmentToDirection : 1;
		unsigned defaultAttachmentScaling : 2;
		unsigned usesFontLeading : 1;
		unsigned seenRightToLeft : 1;
		unsigned ignoresViewTransformations : 1;
		unsigned needToFlushGlyph : 1;
		unsigned flipsIfNeeded : 1;
		unsigned allowNonContig : 1;
		unsigned useNonContig : 1;
	}  _lmFlags;
	id _delegate;
	unsigned short _textViewResizeDisableStack;
	unsigned short _displayInvalidationDisableStack;
	NSRange _deferredDisplayCharRange;
	NSTextView* _firstTextView;
	CGRect* _cachedRectArray;
	unsigned long long _cachedRectArrayCapacity;
	char* _glyphBuffer;
	unsigned long long _glyphBufferSize;
	NSRange _cachedLocationNominalGlyphRange;
	unsigned long long _cachedLocationGlyphIndex;
	CGPoint _cachedLocation;
	NSRange _cachedFontCharRange;
	NSFont* _cachedFont;
	unsigned long long _firstUnlaidGlyphIndex;
	unsigned long long _firstUnlaidCharIndex;
	NSBox* _rulerAccView;
	id _rulerAccViewAlignmentButtons;
	id _rulerAccViewSpacing;
	NSTabWell* _rulerAccViewLeftTabWell;
	NSTabWell* _rulerAccViewRightTabWell;
	NSTabWell* _rulerAccViewCenterTabWell;
	NSTabWell* _rulerAccViewDecimalTabWell;
	id _rulerAccViewStyles;
	id _rulerAccViewLists;
	NSRange _newlyFilledGlyphRange;
	id _extraData;

}

@property (assign) char allowsOriginalFontMetricsOverride; 
@property (assign) NSTextStorage * textStorage; 
@property (readonly) NSAttributedString * attributedString; 
@property (retain) NSGlyphGenerator * glyphGenerator; 
@property (retain) NSTypesetter * typesetter; 
@property (assign) id<NSLayoutManagerDelegate> delegate; 
@property (copy,readonly) NSArray * textContainers; 
@property (assign) char backgroundLayoutEnabled; 
@property (assign) char usesScreenFonts; 
@property (assign) char showsInvisibleCharacters; 
@property (assign) char showsControlCharacters; 
@property (assign) float hyphenationFactor; 
@property (assign) unsigned long long defaultAttachmentScaling; 
@property (assign) long long typesetterBehavior; 
@property (readonly) unsigned long long layoutOptions; 
@property (assign) char allowsNonContiguousLayout; 
@property (readonly) char hasNonContiguousLayout; 
@property (readonly) unsigned long long numberOfGlyphs; 
@property (readonly) unsigned long long firstUnlaidCharacterIndex; 
@property (readonly) unsigned long long firstUnlaidGlyphIndex; 
@property (readonly) CGRect extraLineFragmentRect; 
@property (readonly) CGRect extraLineFragmentUsedRect; 
@property (readonly) NSTextContainer * extraLineFragmentTextContainer; 
@property (assign) char usesFontLeading; 
+(Class)_rulerHelperClass;
+(void)initialize;
+(char)_inBackgroundLayout;
+(char)_usesScreenFonts;
+(char)_ignoresViewTransformations;
+(char)_showsInvisibleCharacters;
+(char)_showsControlCharacters;
+(id)_defaultLinkAttributes;
+(void)_doSomeBackgroundLayout;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)_doUserParagraphStyleLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6 isFinal:(char)arg7 ;
-(void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 ;
-(id)_rulerAccViewLeftTabWell;
-(id)_rulerAccViewCenterTabWell;
-(id)_rulerAccViewRightTabWell;
-(id)_rulerAccViewDecimalTabWell;
-(id)rulerMarkersForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3 ;
-(id)rulerAccessoryViewForTextView:(id)arg1 paragraphStyle:(id)arg2 ruler:(id)arg3 enabled:(char)arg4 ;
-(void)_doUserSetAttributes:(id)arg1 removeAttributes:(id)arg2 ;
-(void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_rulerAccViewUpdateStyles:(id)arg1 ;
-(void)_rulerAccViewAlignmentAction:(id)arg1 ;
-(void)_rulerAccViewSetUpLists;
-(unsigned long long)_markerLevelForRange:(NSRange)arg1 ;
-(void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 inRange:(NSRange)arg4 level:(unsigned long long)arg5 ;
-(void)_doUserRemoveMarkerFormatInRange:(NSRange)arg1 ;
-(void)_doUserSetListMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3 forceStartingItemNumber:(char)arg4 ;
-(void)_rulerAccViewListsAction:(id)arg1 ;
-(void)_rulerAccViewSpacingAction:(id)arg1 ;
-(void)_rulerAccViewStylesAction:(id)arg1 ;
-(void)_doUserParagraphStyleLineHeight:(double)arg1 fixed:(char)arg2 ;
-(void)_rulerAccViewIncrementLineHeightAction:(id)arg1 ;
-(void)_rulerAccViewFixedLineHeightAction:(id)arg1 ;
-(void)_rulerAccViewUpdatePullDown:(id)arg1 ;
-(void)_rulerAccViewPullDownAction:(id)arg1 ;
-(void)_doUserSetAttributes:(id)arg1 ;
-(void)spellCheckerDidLearnWord:(id)arg1 ;
-(void)spellCheckerDidUnlearnWord:(id)arg1 ;
-(void)spellCheckerDidChangeLanguage:(id)arg1 ;
-(void)spellCheckerDidChangeCorrection:(id)arg1 ;
-(void)spellCheckerDidChangeReplacement:(id)arg1 ;
-(void)spellCheckerDidChangeQuoteSubstitution:(id)arg1 ;
-(void)spellCheckerDidChangeDashSubstitution:(id)arg1 ;
-(char)layoutManagerOwnsFirstResponderInWindow:(id)arg1 ;
-(void)showPackedGlyphs:(char*)arg1 length:(unsigned long long)arg2 glyphRange:(NSRange)arg3 atPoint:(CGPoint)arg4 font:(id)arg5 color:(id)arg6 printingAdjustment:(CGSize)arg7 ;
-(double)defaultBaselineOffsetForFont:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<NSLayoutManagerDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<NSLayoutManagerDelegate>)delegate;
-(void)_commonInit;
-(long long)typesetterBehavior;
-(void)setUsesFontLeading:(char)arg1 ;
-(void)setUsesScreenFonts:(char)arg1 ;
-(NSRange)glyphRangeForTextContainer:(id)arg1 ;
-(CGRect)usedRectForTextContainer:(id)arg1 ;
-(NSTextStorage *)textStorage;
-(void)setAllowsOriginalFontMetricsOverride:(char)arg1 ;
-(void)setTypesetterBehavior:(long long)arg1 ;
-(unsigned long long)glyphIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(double*)arg3 ;
-(NSRange)characterRangeForGlyphRange:(NSRange)arg1 actualGlyphRange:(NSRange*)arg2 ;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(NSArray *)textContainers;
-(void)removeTextContainerAtIndex:(unsigned long long)arg1 ;
-(void)insertTextContainer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSRange)glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 ;
-(CGRect)boundingRectForGlyphRange:(NSRange)arg1 inTextContainer:(id)arg2 ;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSRange)glyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(void)awakeFromNib;
-(id)_selectedRanges;
-(double)defaultLineHeightForFont:(id)arg1 ;
-(id)firstTextView;
-(char)allowsNonContiguousLayout;
-(void)replaceTextStorage:(id)arg1 ;
-(void)invalidateGlyphsForCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 actualCharacterRange:(NSRange*)arg3 ;
-(void)ensureLayoutForCharacterRange:(NSRange)arg1 ;
-(unsigned long long)numberOfGlyphs;
-(void)invalidateLayoutForCharacterRange:(NSRange)arg1 isSoft:(char)arg2 actualCharacterRange:(NSRange*)arg3 ;
-(id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)setTextStorage:(NSTextStorage *)arg1 ;
-(char)allowsOriginalFontMetricsOverride;
-(void)setDefaultAttachmentScaling:(unsigned long long)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setBackgroundLayoutEnabled:(char)arg1 ;
-(void)addTextContainer:(id)arg1 ;
-(unsigned long long)glyphIndexForCharacterAtIndex:(unsigned long long)arg1 ;
-(void)ensureLayoutForGlyphRange:(NSRange)arg1 ;
-(unsigned long long)glyphIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 ;
-(unsigned long long)characterIndexForGlyphAtIndex:(unsigned long long)arg1 ;
-(char)hasNonContiguousLayout;
-(id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned long long)defaultAttachmentScaling;
-(id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(char)arg3 ;
-(void)addTemporaryAttributes:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(char)arg3 ;
-(CGPoint)locationForGlyphAtIndex:(unsigned long long)arg1 ;
-(CGSize)attachmentSizeForGlyphAtIndex:(unsigned long long)arg1 ;
-(void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(NSRange)arg3 ;
-(id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(CGRect*)rectArrayForGlyphRange:(NSRange)arg1 withinSelectedGlyphRange:(NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long*)arg4 ;
-(char)_hasSeenRightToLeft;
-(char)_canDoLayout;
-(id)textViewForBeginningOfSelection;
-(char)usesScreenFonts;
-(unsigned long long)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned long long)arg1 alternatePositions:(char)arg2 inDisplayOrder:(char)arg3 positions:(double*)arg4 characterIndexes:(unsigned long long*)arg5 ;
-(long long)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned long long)arg1 inDisplayOrder:(char)arg2 positions:(double*)arg3 characterIndexes:(unsigned long long*)arg4 count:(unsigned long long*)arg5 alternatePositions:(double*)arg6 characterIndexes:(unsigned long long*)arg7 count:(unsigned long long*)arg8 ;
-(NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(unsigned long long)firstUnlaidGlyphIndex;
-(void)drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(CGRect*)rectArrayForCharacterRange:(NSRange)arg1 withinSelectedCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long*)arg4 ;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 withoutAdditionalLayout:(char)arg3 ;
-(CGRect)boundsRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(CGRect)boundsRectForTextBlock:(id)arg1 glyphRange:(NSRange)arg2 ;
-(CGRect)layoutRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(NSTextContainer *)extraLineFragmentTextContainer;
-(CGRect)extraLineFragmentUsedRect;
-(id)_selectionRangesForInsertionPointRange:(NSRange)arg1 ;
-(CGRect)extraLineFragmentRect;
-(void)invalidateDisplayForCharacterRange:(NSRange)arg1 ;
-(double)fractionOfDistanceThroughGlyphForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 ;
-(char)usesFontLeading;
-(NSAttributedString *)attributedString;
-(NSTypesetter *)typesetter;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(double*)arg3 ;
-(void)getFirstUnlaidCharacterIndex:(unsigned long long*)arg1 glyphIndex:(unsigned long long*)arg2 ;
-(unsigned)glyphAtIndex:(unsigned long long)arg1 isValidIndex:(char*)arg2 ;
-(char)isValidGlyphIndex:(unsigned long long)arg1 ;
-(void)ensureLayoutForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 ;
-(void)ensureLayoutForTextContainer:(id)arg1 ;
-(void)invalidateDisplayForGlyphRange:(NSRange)arg1 ;
-(unsigned long long)firstUnlaidCharacterIndex;
-(void)showAttachmentCell:(id)arg1 inRect:(CGRect)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)_rulerAccView;
-(id)_rulerHelper;
-(id)_attachmentSizesRun;
-(CGRect)_currentAttachmentRect;
-(unsigned long long)_currentAttachmentIndex;
-(id)_rowArrayCache;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(id)arg5 attributes:(id)arg6 inContext:(id)arg7 ;
-(void)_firstTextViewChanged;
-(void)_setRowArrayCache:(id)arg1 ;
-(void)_invalidateUsageForTextContainersInRange:(NSRange)arg1 ;
-(void)_markSelfAsDirtyForBackgroundLayout:(id)arg1 ;
-(void)_invalidateInsertionPoint;
-(void)_clearTemporaryAttributes;
-(NSGlyphGenerator *)glyphGenerator;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)arg1 isSoft:(char)arg2 ;
-(void)setGlyphGenerator:(NSGlyphGenerator *)arg1 ;
-(unsigned long long)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(char)arg2 ;
-(NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)arg1 ;
-(void)textContainerChangedTextView:(id)arg1 ;
-(void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 offsetPerLineEstimate:(double)arg2 ;
-(NSRange)_extendedCharRangeForInvalidation:(NSRange)arg1 editedCharRange:(NSRange)arg2 ;
-(void)_invalidateGlyphsForCharacterRange:(NSRange)arg1 editedCharacterRange:(NSRange)arg2 changeInLength:(long long)arg3 actualCharacterRange:(NSRange*)arg4 ;
-(CGRect)_boundingRectForGlyphRange:(NSRange)arg1 inTextContainer:(id)arg2 fast:(char)arg3 fullLineRectsOnly:(char)arg4 ;
-(NSRange)_blockRowRangeForCharRange:(NSRange)arg1 ;
-(NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)arg1 ;
-(void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)arg1 ;
-(NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)arg1 ;
-(void)_clearTemporaryAttributesForCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)_fixSelectionAfterChangeInCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
-(void)ensureGlyphsForCharacterRange:(NSRange)arg1 ;
-(void)insertGlyphs:(const unsigned*)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)_simpleDeleteGlyphsInRange:(NSRange)arg1 ;
-(void)_primitiveDeleteGlyphsInRange:(NSRange)arg1 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(char*)arg5 bidiLevels:(char*)arg6 ;
-(void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(CGRect)arg2 ;
-(void)setLocation:(CGPoint)arg1 forStartOfGlyphRange:(NSRange)arg2 ;
-(NSStoredContainerUsage*)_validatedStoredUsageForTextContainerAtIndex:(unsigned long long)arg1 ;
-(id)substituteFontForFont:(id)arg1 ;
-(CGRect*)_rectArrayForRange:(NSRange)arg1 withinSelectionRange:(NSRange)arg2 rangeIsCharRange:(char)arg3 singleRectOnly:(char)arg4 fullLineRectsOnly:(char)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long*)arg7 rangeWithinContainer:(NSRange*)arg8 glyphsDrawOutsideLines:(char*)arg9 ;
-(NSRange)_glyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 fast:(char)arg3 okToFillHoles:(char)arg4 ;
-(id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(CGRect*)_rectArrayForRange:(NSRange)arg1 withinSelectionRange:(NSRange)arg2 rangeIsCharRange:(char)arg3 singleRectOnly:(char)arg4 fullLineRectsOnly:(char)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long*)arg7 rangeWithinContainer:(NSRange*)arg8 glyphsDrawOutsideLines:(char*)arg9 rectArray:(CGRect*)arg10 rectArrayCapacity:(unsigned long long)arg11 ;
-(void)_drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 parameters:(NSDrawingParameters*)arg3 ;
-(void)_drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)_drawBackgroundForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)_showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 type:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 isStrikethrough:(char)arg7 ;
-(void)_lineGlyphRange:(NSRange)arg1 type:(long long)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 isStrikethrough:(char)arg6 ;
-(void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3 ;
-(unsigned long long)layoutOptions;
-(id)_glyphGenerator;
-(void)_setGlyphGenerator:(id)arg1 ;
-(void)setTypesetter:(NSTypesetter *)arg1 ;
-(void)textContainerChangedGeometry:(id)arg1 ;
-(void)textContainerChangedTextView:(id)arg1 fromTextView:(id)arg2 ;
-(void)setAllowsNonContiguousLayout:(char)arg1 ;
-(void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 integerOffsetPerLineEstimate:(unsigned long long)arg2 ;
-(char)backgroundLayoutEnabled;
-(void)setShowsInvisibleCharacters:(char)arg1 ;
-(char)showsInvisibleCharacters;
-(void)setShowsControlCharacters:(char)arg1 ;
-(char)showsControlCharacters;
-(float)hyphenationFactor;
-(char)backgroundColorProvidesOpaqueSurface;
-(void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(NSRange)arg5 ;
-(void)ensureGlyphsForGlyphRange:(NSRange)arg1 ;
-(void)insertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 ;
-(void)replaceGlyphAtIndex:(unsigned long long)arg1 withGlyph:(unsigned)arg2 ;
-(void)deleteGlyphsInRange:(NSRange)arg1 ;
-(void)setCharacterIndex:(unsigned long long)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)arg1 ;
-(void)setGlyphs:(const unsigned short*)arg1 properties:(const long long*)arg2 characterIndexes:(const unsigned long long*)arg3 font:(id)arg4 forGlyphRange:(NSRange)arg5 ;
-(unsigned)glyphAtIndex:(unsigned long long)arg1 ;
-(long long)intAttribute:(long long)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(long long)propertyForGlyphAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char*)arg5 ;
-(unsigned long long)getGlyphsInRange:(NSRange)arg1 glyphs:(unsigned*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(char*)arg5 ;
-(unsigned long long)getGlyphs:(unsigned*)arg1 range:(NSRange)arg2 ;
-(void)setTextContainer:(id)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 ;
-(void)setExtraLineFragmentRect:(CGRect)arg1 usedRect:(CGRect)arg2 textContainer:(id)arg3 ;
-(void)setLocation:(CGPoint)arg1 forStartOfGlyphRange:(NSRange)arg2 coalesceRuns:(char)arg3 ;
-(void)setLocations:(CGPoint*)arg1 startingGlyphIndexes:(unsigned long long*)arg2 count:(unsigned long long)arg3 forGlyphRange:(NSRange)arg4 ;
-(void)setNotShownAttribute:(char)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)setDrawsOutsideLineFragment:(char)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)setAttachmentSize:(CGSize)arg1 forGlyphRange:(NSRange)arg2 ;
-(void)setEllipsisGlyphAttribute:(char)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 allowLayout:(char)arg3 ;
-(char)notShownAttributeForGlyphAtIndex:(unsigned long long)arg1 ;
-(char)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)arg1 ;
-(NSRange)truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned long long)arg1 ;
-(void)setLayoutRect:(CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(NSRange)arg3 ;
-(void)setBoundsRect:(CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(NSRange)arg3 ;
-(CGRect)layoutRectForTextBlock:(id)arg1 glyphRange:(NSRange)arg2 ;
-(NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned long long)arg1 ;
-(void)setTemporaryAttributes:(id)arg1 forCharacterRange:(NSRange)arg2 ;
-(id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(id)_temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(char)synchronizesAlignmentToDirection;
-(void)setSynchronizesAlignmentToDirection:(char)arg1 ;
-(void)enumerateLineFragmentsForGlyphRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEnclosingRectsForGlyphRange:(NSRange)arg1 withinSelectedGlyphRange:(NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEnclosingRectsForCharacterRange:(NSRange)arg1 withinSelectedCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(unsigned long long)arg3 font:(id)arg4 color:(id)arg5 matrix:(CGAffineTransform)arg6 attributes:(id)arg7 inContext:(id)arg8 textLayer:(id)arg9 ;
-(void)fillBackgroundRectArray:(CGRect*)arg1 count:(unsigned long long)arg2 forCharacterRange:(NSRange)arg3 color:(id)arg4 ;
-(void)drawUnderlineForGlyphRange:(NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)drawStrikethroughForGlyphRange:(NSRange)arg1 strikethroughType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(void)strikethroughGlyphRange:(NSRange)arg1 strikethroughType:(long long)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 ;
-(void)underlineGlyphRange:(NSRange)arg1 underlineType:(long long)arg2 lineFragmentRect:(CGRect)arg3 lineFragmentGlyphRange:(NSRange)arg4 containerOrigin:(CGPoint)arg5 ;
-(void)coordinateAccess:(/*^block*/id)arg1 ;
-(NSRange)_blockRangeForGlyphRange:(NSRange)arg1 ;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)arg1 ;
-(unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(char)arg2 okToFillHoles:(char)arg3 ;
-(void)_invalidateDisplayIfNeeded;
-(void)_resizeTextViewForTextContainer:(id)arg1 ;
-(void)_recalculateUsageForTextContainerAtIndex:(unsigned long long)arg1 ;
-(void)_setDrawsUnderlinesLikeWebKit:(char)arg1 ;
-(void)_setDrawsDebugBaselines:(char)arg1 ;
-(double)baselineOffsetForGlyphAtIndex:(unsigned long long)arg1 ;
-(void)setFlipsIfNeeded:(char)arg1 ;
-(void)setIgnoresViewTransformations:(char)arg1 ;
-(void)setLineFragmentRect:(CGRect)arg1 forGlyphRange:(NSRange)arg2 usedRect:(CGRect)arg3 baselineOffset:(double)arg4 ;
-(NSRange)_blockRangeForCharRange:(NSRange)arg1 ;
-(NSRange)_blockRowRangeForCharRange:(NSRange)arg1 completeRows:(char*)arg2 ;
-(unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(char)arg2 okToFillHoles:(char)arg3 considerNulls:(char)arg4 ;
-(void)_fillGlyphHoleForCharacterRange:(NSRange)arg1 startGlyphIndex:(unsigned long long)arg2 desiredNumberOfCharacters:(unsigned long long)arg3 ;
-(void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned long long)arg1 ;
-(char)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned long long)arg1 forCharacterRange:(NSRange)arg2 inTextContainer:(id)arg3 lineLimit:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long*)arg5 ;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 includeBlocks:(char)arg3 ;
-(void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned long long)arg1 nextGlyphIndex:(unsigned long long*)arg2 ;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)arg1 isSoft:(char)arg2 invalidateUsage:(char)arg3 ;
-(void)_fillLayoutHoleForCharacterRange:(NSRange)arg1 desiredNumberOfLines:(unsigned long long)arg2 isSoft:(char)arg3 ;
-(unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(char)arg2 okToFillHoles:(char)arg3 considerNulls:(char)arg4 ;
-(void)_mergeLayoutHoles;
-(void)_fillLayoutHoleAtIndex:(unsigned long long)arg1 desiredNumberOfLines:(unsigned long long)arg2 ;
-(id)_lineFragmentDescriptionForGlyphRange:(NSRange)arg1 includeGlyphLocations:(char)arg2 ;
-(id)_lineFragmentDescription:(char)arg1 ;
-(id)_glyphDescriptionForGlyphRange:(NSRange)arg1 ;
-(void)_growCachedRectArrayToSize:(unsigned long long)arg1 ;
-(NSRange)_glyphRangeForCharacterRange:(NSRange)arg1 actualCharacterRange:(NSRange*)arg2 okToFillHoles:(char)arg3 ;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 hintGlyphRange:(NSRange)arg3 okToFillHoles:(char)arg4 ;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)arg1 inTextContainer:(id)arg2 okToFillHoles:(char)arg3 ;
-(id)selectedTextAttributesForCharacterAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(char)_drawsDebugBaselines;
-(void)showAttachment:(id)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)drawSpellingUnderlineForGlyphRange:(NSRange)arg1 spellingState:(long long)arg2 inGlyphRange:(NSRange)arg3 lineFragmentRect:(CGRect)arg4 lineFragmentGlyphRange:(NSRange)arg5 containerOrigin:(CGPoint)arg6 ;
-(char*)_packedGlyphs:(unsigned long long)arg1 range:(NSRange)arg2 length:(unsigned long long*)arg3 ;
-(void)setBaselineOffset:(double)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(void)_mergeGlyphHoles;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)arg1 completeRows:(char*)arg2 ;
-(void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)arg1 byDelta:(long long)arg2 ;
-(void)_fillGlyphHoleAtIndex:(unsigned long long)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 ;
-(unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(char)arg2 okToFillHoles:(char)arg3 ;
-(id)_containerDescription;
-(id)_lineFragmentDescription;
-(id)_glyphLocationDescription;
-(id)_glyphDescription;
-(id)_glyphHoleDescription;
-(id)_layoutHoleDescription;
-(id)_glyphTreeDescription;
-(id)_layoutTreeDescription;
-(id)_blockDescription;
-(void)_setRotation:(double)arg1 forGlyphAtIndex:(unsigned long long)arg2 ;
-(double)_rotationForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned)_glyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long*)arg2 glyphInscription:(unsigned long long*)arg3 isValidIndex:(char*)arg4 ;
-(char)_needToFlushGlyph;
-(void)_setNeedToFlushGlyph:(char)arg1 ;
-(void)_simpleInsertGlyph:(unsigned)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 elastic:(char)arg4 ;
-(void)_insertGlyphs:(unsigned*)arg1 elasticAttributes:(char*)arg2 count:(unsigned long long)arg3 atGlyphIndex:(unsigned long long)arg4 characterIndex:(unsigned long long)arg5 ;
-(void)_promoteGlyphStoreToFormat:(unsigned long long)arg1 ;
-(void)_setCurrentAttachmentRect:(CGRect)arg1 index:(unsigned long long)arg2 ;
-(void)_clearCurrentAttachmentSettings;
-(void)_setHasSeenRightToLeft:(char)arg1 ;
-(char)flipsIfNeeded;
-(char)ignoresViewTransformations;
-(char)ignoresAntialiasThreshold;
-(void)setIgnoresAntialiasThreshold:(char)arg1 ;
-(char)_alwaysDrawsActive;
-(void)_setAlwaysDrawsActive:(char)arg1 ;
-(id)_insertionPointHelperForGlyphAtIndex:(unsigned long long)arg1 ;
-(char)_drawsUnderlinesLikeWebKit;
-(NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 inContext:(CGContextRef)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(CGPoint)arg7 breakForDescenders:(char)arg8 flipped:(char)arg9 ;
-(void)_drawLineForGlyphRange:(NSRange)arg1 inContext:(CGContextRef)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(CGPoint)arg7 breakForDescenders:(char)arg8 ;
@end

