/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Terminal/Terminal-Structs.h>
#import <Terminal/TTAccessibleView.h>
#import <Terminal/TTBlinking.h>
#import <Terminal/NSTextInputClient.h>
#import <Terminal/NSAnimationDelegate.h>
#import <Terminal/NSTextFinderClient.h>

@class NSString, NSArray, TTLogicalScreen, TTViewAttributedString, TTProfile, TTPane, TTTabController, NSTimer, NSURL, NSMutableIndexSet, NSCursor, NSAttributedString, NSInvocation, NSImage, NSColor, TTViewVisualBellAnimation, NSTextFinder;

@interface TTView : TTAccessibleView <TTBlinking, NSTextInputClient, NSAnimationDelegate, NSTextFinderClient> {

	CGSize _cellSize;
	double _kern;
	double _descender;
	double _leading;
	double _baselineOffset;
	TTLogicalScreen* _logicalScreen;
	TTViewAttributedString* _attributedString;
	TTProfile* _profile;
	unsigned long long _lowMemoryLineCountLimit;
	TTPane* pane;
	TTTabController* _controller;
	NSTimer* _needsDisplayTimer;
	char _shouldUpdateDirtyFlag;
	char _shouldUpdateAXCursorLocation;
	char _isDrawingThumbnail;
	char _isUpdatingBusyFlag;
	char _isClearingBusyFlag;
	char _isWaitingForEchoOutput;
	SCD_Struct_TT7* _glyphsBuffer;
	SCD_Struct_TT7* _advancesBuffer;
	SCD_Struct_TT7* _indicesBuffer;
	char _isTextBlinkActive;
	char _isCursorBlinkActive;
	char _shouldSuppressCursorBlink;
	char _doRectangularSelection;
	char _doAppendSelection;
	char _doDiscontinuousSelection;
	char _doPathOrURLSelection;
	NSURL* _clickedURL;
	unsigned long long _selectionStyle;
	char _isTransientSelection;
	char _isDraggingSelection;
	char _isPrintable;
	char _isHandlingContextualMenu;
	NSURL* _contextualMenuURL;
	NSMutableIndexSet* _activeTextSelection;
	NSMutableIndexSet* _textSelectionRanges;
	NSMutableIndexSet* _selectionSetDifference;
	NSMutableIndexSet* _savedTextSelectionRanges;
	NSRange _initialSelectionPoint;
	NSRange _endSelectionPoint;
	NSRange _previousSelectionStart;
	NSRange _previousSelectionEnd;
	NSCursor* _mouseCursor;
	char _dragAndDropIsActive;
	unsigned long long _printRange;
	NSRange _ttaxLastCursorPosition;
	unsigned long long _ttaxLastLineCount;
	char _hasMarkedText;
	NSAttributedString* _markedText;
	NSRange _markedTextSelectedRange;
	NSRange _markedTextAnchor;
	unsigned long long _markedTextWidth;
	char _hasUnprocessedInsertion;
	NSInvocation* _markedTextInvocation;
	char _didChangeInputSource;
	char _restrictedInputSources;
	NSString* _savedKeyboardInputSource;
	NSString* _autoSelectedKeyboardInputSource;
	NSMutableIndexSet* _dirtyLines;
	char _shouldDirtyAllLines;
	NSMutableIndexSet* _blinkingLines;
	unsigned long long _scrollingLineOffset;
	char _isScrollingPinned;
	NSImage* _backgroundImage;
	NSColor* _currentBackgroundColor;
	double _backgroundColorAlpha;
	char _alertsSuppressed;
	NSURL* _alertSoundURL;
	unsigned _alertSoundID;
	unsigned long long _alertQueueCount;
	char _alertSoundWaitForCompletion;
	char _isVisualBellActive;
	double _visualBellFraction;
	TTViewVisualBellAnimation* _visualBellAnimation;
	char _shouldFocusFollowMouse;
	char _shouldFocusFollowMouseInBackground;
	char _isMouseFocusWindow;
	double _accelLastEntry;
	double _accelCount;
	SEL _accelSelector;
	id _accelTarget;
	NSTextFinder* _textFinder;

}

@property (assign,nonatomic) TTPane * pane; 
@property (assign) char scrollingIsPinned;                               //@synthesize isScrollingPinned=_isScrollingPinned - In the implementation block
@property (readonly) NSMutableIndexSet * dirtyLines;                     //@synthesize dirtyLines=_dirtyLines - In the implementation block
@property (assign,nonatomic) double visualBellFraction;                  //@synthesize visualBellFraction=_visualBellFraction - In the implementation block
@property (assign,nonatomic) double backgroundColorAlpha;                //@synthesize backgroundColorAlpha=_backgroundColorAlpha - In the implementation block
@property (readonly) double alphaForBackground; 
@property (nonatomic,retain) NSURL * alertSoundURL;                      //@synthesize alertSoundURL=_alertSoundURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSelectable,readonly) char selectable; 
@property (readonly) char allowsMultipleSelection; 
@property (getter=isEditable,readonly) char editable; 
@property (readonly) NSString * string; 
@property (readonly) NSRange firstSelectedRange; 
@property (copy) NSArray * selectedRanges; 
@property (copy,readonly) NSArray * visibleCharacterRanges; 
+(CGRect)unpaddedContentRectForProfile:(id)arg1 ;
+(CGSize)logicalContentSizeForRect:(CGRect)arg1 profile:(id)arg2 controller:(id)arg3 ;
+(CGRect)rectWithoutPadding:(CGRect)arg1 font:(id)arg2 ;
+(CGSize)cellSizeForProfile:(id)arg1 controller:(id)arg2 kern:(double*)arg3 ;
+(CGSize)logicalContentSizeForRect:(CGRect)arg1 cellSize:(CGSize)arg2 font:(id)arg3 ;
+(id)trustedFontFamilyNames;
+(CGRect)convertScreenToAccessibility:(CGRect)arg1 ;
+(double)dragAndDropTextDelay;
+(void)initialize;
+(id)markedTextAttributes;
-(id)logicalScreen;
-(void)sizeToFit:(CGRect)arg1 ;
-(CGSize)contentSizeForLogicalContentSize:(CGSize)arg1 ;
-(TTPane *)pane;
-(void)setSelectedProfile:(id)arg1 ;
-(double)backgroundColorAlpha;
-(double)alphaForBackground;
-(id)dockTileImageOfSize:(CGSize)arg1 ;
-(void)setBackgroundColorAlpha:(double)arg1 ;
-(char)scrollingIsPinned;
-(void)setScrollingIsPinned:(char)arg1 ;
-(id)thumbnailImageWithProfile:(id)arg1 size:(CGSize)arg2 ;
-(void)blinker:(id)arg1 didBlink:(char)arg2 ;
-(char)readFilePathFromString:(id)arg1 escapeTilde:(char)arg2 isCommand:(char)arg3 forceEscape:(char)arg4 ;
-(void)emulatorDidDecodeData:(id)arg1 ;
-(void)setLogicalScreen:(id)arg1 ;
-(void)delayedSetNeedsDisplay:(char)arg1 ;
-(CGSize)visibleContentSize;
-(CGRect)unpaddedContentRect;
-(CGSize)roundedContentSizeForContentSize:(CGSize)arg1 ;
-(NSMutableIndexSet *)dirtyLines;
-(char)isInverted;
-(void)setVisualBellFraction:(double)arg1 ;
-(void)handleAlertCompletion;
-(NSURL *)alertSoundURL;
-(void)setAlertSoundURL:(NSURL *)arg1 ;
-(void)initSelection;
-(void)setPrintRange:(unsigned long long)arg1 ;
-(void)scheduleDelayedDisplayTimer:(char)arg1 ;
-(void)setPane:(TTPane *)arg1 ;
-(void)deallocSelection;
-(void)emulatorWillDecodeData:(id)arg1 ;
-(void)emulatorDidBeep:(id)arg1 ;
-(void)updateShellContentSize;
-(void)calculateCellSize;
-(void)updateBlinker;
-(void)setObserversForLogicalScreen:(char)arg1 ;
-(void)screenDidRewrap:(id)arg1 ;
-(CGSize)logicalSizeForContentSize:(CGSize)arg1 ;
-(CGSize)logicalContentSize;
-(double)descenderInPixels;
-(unsigned long long)visibleRowCount;
-(void)setNeedsImmediateDisplay;
-(id)newBackgroundImageWithContentsOfBookmark:(id)arg1 ;
-(char)hasActiveSelection;
-(char)isKeyFocusWindow;
-(id)adjustedColorWithColor:(id)arg1 withBackgroundColor:(id)arg2 force:(char)arg3 ;
-(unsigned long long)printRange;
-(id)bezierPathForRanges:(id)arg1 ;
-(void)drawAttributedStringsToScreen:(char)arg1 inRect:(CGRect)arg2 selectedTextRanges:(id)arg3 selectionColor:(id)arg4 ;
-(NSRange)visibleLineRange;
-(NSRange)lineRangeForRect:(CGRect)arg1 ;
-(CGPoint)pointForDisplayPosition:(NSRange)arg1 ;
-(void)drawAttributedString:(id)arg1 forLine:(unsigned long long)arg2 inContext:(CGContextRef)arg3 atPoint:(CGPoint)arg4 isTextMarked:(char)arg5 size:(unsigned long long)arg6 containsCursor:(char)arg7 atColumn:(unsigned long long)arg8 selectedTextRanges:(id)arg9 selectionColor:(id)arg10 withANSIBackgroundColor:(unsigned long long)arg11 ;
-(id)colorForANSIColor:(unsigned long long)arg1 ;
-(id)colorForANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2 ;
-(void)drawSelectedTextRanges:(id)arg1 withColor:(id)arg2 ;
-(void)drawCursorInMarkedText:(char)arg1 ;
-(void)drawCustomString:(id)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(id)adjustedColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 withBackgroundColor:(id)arg5 force:(char)arg6 ;
-(id)colorForANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2 withProfile:(id)arg3 ;
-(id)colorForExtendedANSIColor:(unsigned long long)arg1 adjustedRelativeToColor:(id)arg2 withProfile:(id)arg3 ;
-(id)contrastColorForColor:(id)arg1 high:(char)arg2 ;
-(double)alphaForBackgroundFullScreen:(char)arg1 ;
-(void)prepareToChangeContents;
-(void)clearTextSelectionAndPoint;
-(void)finishChangingContents;
-(void)notifyAccessiblityAboutCursorLocation;
-(void)scrollLinesTo:(unsigned long long)arg1 ;
-(void)scrollToBottom:(id)arg1 ;
-(void)acceleratingApplySelector:(SEL)arg1 withTarget:(id)arg2 withObject:(id)arg3 withMaximum:(double)arg4 withGrowthRate:(double)arg5 ;
-(void)runPrintTerminalOperation;
-(void)setPrintable:(char)arg1 ;
-(void)saveProfileAsDefault:(char)arg1 ;
-(void)profileSavePanelDidEnd:(id)arg1 returnCode:(long long)arg2 ;
-(void)scrollLineRangeToVisible:(NSRange)arg1 ;
-(void)newTerminalAtFolder:(id)arg1 inTab:(char)arg2 ;
-(void)findLineAtPosition:(NSRange)arg1 startPosition:(NSRange*)arg2 endPosition:(NSRange*)arg3 ;
-(void)findWordAtOrBeforePosition:(NSRange)arg1 startPosition:(NSRange*)arg2 endPosition:(NSRange*)arg3 ;
-(id)urlAtOrBeforeDisplayPosition:(NSRange)arg1 ;
-(id)wordAtOrBeforeDisplayPosition:(NSRange)arg1 ;
-(id)selectedManPageActionTextIncludingURLs:(char)arg1 ;
-(void)searchManPagesForSelection:(id)arg1 ;
-(void)selectTitleField:(id)arg1 ;
-(char)_terminalIsNonInteractive;
-(void)_doUpdateTabIsBusy:(id)arg1 ;
-(void)_clearTabIsBusy:(id)arg1 ;
-(void)_clearWaitingForEchoOutput:(id)arg1 ;
-(char)_terminalIsBusy;
-(void)_doSetTabIsBusy:(id)arg1 ;
-(void)_scheduleUpdateTabIsBusy;
-(id)mappedKeyForCharacter:(unsigned short)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)_clearTabIsBusyForInput;
-(void)lineUp:(id)arg1 ;
-(void)lineDown:(id)arg1 ;
-(void)sendInterrupt:(id)arg1 ;
-(NSRange)displayPositionForPoint:(CGPoint)arg1 ;
-(char)selectionContainsDisplayPosition:(NSRange)arg1 ;
-(void)newWindowAtFolder:(id)arg1 ;
-(void)newTabAtFolder:(id)arg1 ;
-(void)openManPage:(id)arg1 ;
-(void)searchManPages:(id)arg1 ;
-(void)separatorMenuItem1:(id)arg1 ;
-(void)lookUp:(id)arg1 ;
-(void)separatorMenuItem2:(id)arg1 ;
-(void)selectTextBetweenDisplayPositions:(NSRange)arg1 positionTwo:(NSRange)arg2 rememberPositions:(char)arg3 ;
-(void)windowDidChangeMain:(id)arg1 ;
-(void)updateBackgroundAlpha;
-(void)delayedSetNeedsDisplayInLine:(unsigned long long)arg1 ;
-(void)setNeedsDisplayInRanges:(id)arg1 ;
-(void)windowDidChangeMainOrKey;
-(void)_restoreInputSource;
-(void)removeMarkedText;
-(void)ttaxEmulatorDidDecodeData:(id)arg1 ;
-(void)updateKeyboardInputSource;
-(void)delayedSetNeedsDisplayInLines:(id)arg1 ;
-(void)clipSelectionRanges;
-(void)_immediateUpdateTabIsBusy;
-(id)NSRectArrayForRanges:(id)arg1 ;
-(CGSize)pageSize;
-(double)getScaleFactor;
-(CGSize)scaledCellSizeForScaleFactor:(double)arg1 ;
-(unsigned long long)linesPerPrintingPageReturningUnScaledSize:(CGSize*)arg1 ;
-(NSRange)lineRangeForPrintRange:(unsigned long long)arg1 ;
-(void)savePanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(id)allText;
-(void)didPresentSaveErrorWithRecovery:(char)arg1 contextInfo:(void*)arg2 ;
-(void)saveTextAs:(id)arg1 ;
-(void)saveSelectedTextAs:(id)arg1 ;
-(void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_resetCommon;
-(id)selectedAttributedTextWithProfile:(id)arg1 ;
-(id)attributedSubstringForRange:(NSRange)arg1 withProfile:(id)arg2 withKerning:(char)arg3 ;
-(id)selectedTextParagraphCounts;
-(void)copySelectedText:(id)arg1 ;
-(void)copySelectedAttributedText:(id)arg1 withProfile:(id)arg2 ;
-(void)copySelectionToPasteboard:(id)arg1 ;
-(char)readSelectionFromString:(id)arg1 ;
-(id)selectionPasteboard;
-(id)updatedSelectionPasteboard;
-(void)copyWithoutBackgroundColor:(id)arg1 ;
-(void)copyPlainText:(id)arg1 ;
-(void)pasteSelection:(id)arg1 ;
-(void)pasteSelectionEscaped:(id)arg1 ;
-(char)pasteboardHasText:(id)arg1 ;
-(void)pasteEscaped:(id)arg1 ;
-(void)toggleShowAlternateDisplay:(id)arg1 ;
-(void)restoreDefaultFontSize:(id)arg1 ;
-(void)returnToDefaultSize:(id)arg1 ;
-(void)openManPageForSelection:(id)arg1 ;
-(void)searchInSpotlight:(id)arg1 ;
-(void)printTerminalSelection:(id)arg1 ;
-(void)printTerminal:(id)arg1 ;
-(void)saveProfile:(id)arg1 ;
-(char)readSelectionFromPasteboard:(id)arg1 isDragAndDrop:(char)arg2 isCommand:(char)arg3 sender:(id)arg4 ;
-(void)selectionFlagsChanged:(id)arg1 ;
-(CGPoint)pointByRoundingToCellBoundary:(CGPoint)arg1 ;
-(void)selectionMouseDown:(id)arg1 ;
-(void)selectionMouseUp:(id)arg1 ;
-(void)selectionMouseDragged:(id)arg1 ;
-(void)selectionOtherMouseDown:(id)arg1 ;
-(void)scrollLinesBy:(long long)arg1 ;
-(unsigned long long)lastScrollableLine;
-(CGRect)rectForLineRange:(NSRange)arg1 ;
-(char)deleteTextForReplacementRange:(NSRange)arg1 ;
-(id)NSRectArrayForRange:(NSRange)arg1 ;
-(void)needsDisplayTimer:(id)arg1 ;
-(void)printColor:(unsigned long long)arg1 ;
-(void)clearScrollback:(id)arg1 ;
-(void)clearAll:(id)arg1 ;
-(void)setProfileAsDefault:(id)arg1 ;
-(void)saveProfileAndSetAsDefault:(id)arg1 ;
-(void)saveProfileImmediately:(id)arg1 ;
-(void)applyFrontMostWindowProfileToAllShells:(id)arg1 ;
-(void)restoreFactoryDefaultProfile:(id)arg1 ;
-(void)takeProfileFrom:(id)arg1 ;
-(SCD_Struct_TT7*)createUTF16FromUTF8:(SCD_Struct_TT7*)arg1 ;
-(CGRect)boundsForPrintRange:(unsigned long long)arg1 ;
-(void)exportSettings:(id)arg1 ;
-(void)sendSoftReset:(id)arg1 ;
-(void)sendHardReset:(id)arg1 ;
-(id)selectedAttributedText;
-(char)shouldAutoscrollForEvent:(id)arg1 ;
-(id)bezierPathForRanges:(id)arg1 intersectingRect:(CGRect)arg2 ;
-(double)visualBellFraction;
-(id)focusedThumbnailImageWithProfile:(id)arg1 size:(CGSize)arg2 ;
-(void)clearTextSelection;
-(id)ttaxSelectedTextRangeAttribute;
-(void)ttaxSetSelectedTextRangeAttribute:(id)arg1 ;
-(id)ttaxRoleAttribute;
-(char)ttaxIsRoleAttributeMutable;
-(id)ttaxDescriptionAttribute;
-(char)ttaxIsDescriptionAttributeMutable;
-(id)ttaxSizeAttribute;
-(char)ttaxIsSizeAttributeMutable;
-(id)ttaxPositionAttribute;
-(char)ttaxIsPositionAttributeMutable;
-(id)ttaxValueAttribute;
-(char)ttaxIsValueAttributeMutable;
-(id)ttaxNumberOfCharactersAttribute;
-(char)ttaxIsNumberOfCharactersAttributeMutable;
-(id)ttaxSelectedTextAttribute;
-(char)ttaxIsSelectedTextAttributeMutable;
-(char)ttaxIsSelectedTextRangeAttributeMutable;
-(id)ttaxSelectedTextRangesAttribute;
-(void)ttaxSetSelectedTextRangesAttribute:(id)arg1 ;
-(char)ttaxIsSelectedTextRangesAttributeMutable;
-(id)ttaxInsertionPointLineNumberAttribute;
-(char)ttaxIsInsertionPointLineNumberAttributeMutable;
-(id)ttaxVisibleCharacterRangeAttribute;
-(char)ttaxIsVisibleCharacterRangeAttributeMutable;
-(id)ttaxLineForIndexAttributeForParameter:(id)arg1 ;
-(id)ttaxRangeForLineAttributeForParameter:(id)arg1 ;
-(id)ttaxStringForRangeAttributeForParameter:(id)arg1 ;
-(id)ttaxRangeForPositionAttributeForParameter:(id)arg1 ;
-(id)ttaxRangeForIndexAttributeForParameter:(id)arg1 ;
-(id)ttaxBoundsForRangeAttributeForParameter:(id)arg1 ;
-(unsigned short)matchingCharacterForCharacter:(unsigned short)arg1 matchType:(unsigned long long*)arg2 ;
-(void)extendSelectionToMatchingCharacter;
-(void)moveCursorToPosition:(NSRange)arg1 event:(id)arg2 ;
-(void)findWordAtPosition:(NSRange)arg1 startPosition:(NSRange*)arg2 endPosition:(NSRange*)arg3 ;
-(void)findPathAtPosition:(NSRange)arg1 startPosition:(NSRange*)arg2 endPosition:(NSRange*)arg3 ;
-(void)findWordAtPosition:(NSRange)arg1 startPosition:(NSRange*)arg2 endPosition:(NSRange*)arg3 searchingBefore:(char)arg4 ;
-(char)hasContiguousSelection;
-(void)appendSelectionToDisplayPosition:(NSRange)arg1 rememberPositions:(char)arg2 ;
-(double)thumbnailScaleFactorForSize:(CGSize)arg1 ;
-(CGRect)thumbnailFitVisibleRect;
-(double)thumbnailFitScaleFactorForSize:(CGSize)arg1 ;
-(CGSize)thumbnailSizeForSize:(CGSize)arg1 ;
-(void)printOperationDidRun:(id)arg1 success:(char)arg2 contextInfo:(void*)arg3 ;
-(id)profile;
-(void)setProfile:(id)arg1 ;
-(void)scrollToTop:(id)arg1 ;
-(unsigned long long)rowCount;
-(id)selectedText;
-(id)autorelease;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)accessibilityParameterizedAttributeNames;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(NSString *)string;
-(id)controller;
-(void)removeFromSuperview;
-(void)windowDidBecomeKey:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(float)animation:(id)arg1 valueForProgress:(float)arg2 ;
-(void)animationDidEnd:(id)arg1 ;
-(id)validRequestorForSendType:(id)arg1 returnType:(id)arg2 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)doCommandBySelector:(SEL)arg1 ;
-(CGSize)cellSize;
-(char)isOpaque;
-(char)preservesContentDuringLiveResize;
-(CGSize)contentSize;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)updateScroller;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setController:(id)arg1 ;
-(char)hasMarkedText;
-(void)setSelectedRange:(NSRange)arg1 ;
-(NSRange)selectedRange;
-(CGPoint)_autoscrollAmountForEvent:(id)arg1 ;
-(CGRect)adjustScroll:(CGRect)arg1 ;
-(char)autoscroll:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)deleteForward:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)shouldDelayWindowOrderingForEvent:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)updateDraggingItemsForDrag:(id)arg1 ;
-(void)performTextFinderAction:(id)arg1 ;
-(id)textFinder;
-(NSRange)firstSelectedRange;
-(id)contentViewAtIndex:(unsigned long long)arg1 effectiveCharacterRange:(NSRange*)arg2 ;
-(void)setSelectedRanges:(NSArray *)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(NSArray *)selectedRanges;
-(NSArray *)visibleCharacterRanges;
-(void)windowDidResignKey:(id)arg1 ;
-(void)changeFont:(id)arg1 ;
-(unsigned long long)characterIndexForPoint:(CGPoint)arg1 ;
-(void)unmarkText;
-(id)validAttributesForMarkedText;
-(NSRange)markedRange;
-(void)viewDidEndLiveResize;
-(CGRect)rectForPage:(int)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
-(char)_wantsKeyDownForEvent:(id)arg1 ;
-(char)readSelectionFromPasteboard:(id)arg1 ;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)openURL:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(char)writeSelectionToPasteboard:(id)arg1 types:(id)arg2 ;
-(void)centerSelectionInVisibleArea:(id)arg1 ;
-(CGPoint)_autoscrollAmountForWindowPoint:(CGPoint)arg1 ;
-(id)attributedSubstringForProposedRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(id)attributedString;
-(double)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1 ;
-(id)rectsForCharacterRange:(NSRange)arg1 ;
-(void)drawCharactersInRange:(NSRange)arg1 forContentView:(id)arg2 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)deleteBackward:(id)arg1 ;
-(char)knowsPageRange:(NSRange*)arg1 ;
-(CGSize)contentMinSize;
-(id)_screenAtPoint:(CGPoint)arg1 ;
-(void)setSelectedIndexes:(id)arg1 ;
-(void)beginPageInRect:(CGRect)arg1 atPlacement:(CGPoint)arg2 ;
-(void)searchInGoogle:(id)arg1 ;
-(char)hasSelection;
-(unsigned long long)visibleLineCount;
-(void)dragSelectionWithEvent:(id)arg1 ;
@end
