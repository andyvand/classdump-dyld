/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSDictionary, NSTextContainer, NSTextView, NSColor, NSRulerView, NSParagraphStyle, NSAttributedString, NSArray, NSWindow, NSTextInputContext, NSSelectionArray, NSUndoManager, NSTextFinder, NSMutableSet, NSSharingServicePicker;

@interface NSTextViewSharedData : NSObject <NSCoding> {

	struct {
		unsigned selectable : 1;
		unsigned editable : 1;
		unsigned richText : 1;
		unsigned importsGraphics : 1;
		unsigned fieldEditor : 1;
		unsigned usesFontPanel : 1;
		unsigned rulerVisible : 1;
		unsigned usesRuler : 1;
		unsigned postingTextDidEnd : 1;
		unsigned beganEditing : 1;
		unsigned continuousSpellCheckingEnabled : 1;
		unsigned drawsBackground : 1;
		unsigned hasSpellCheckerDocumentTag : 1;
		unsigned selectionAffinity : 2;
		unsigned selectionGranularity : 2;
		unsigned blinkCaretDrawn : 1;
		unsigned resigningFirstResponder : 1;
		unsigned becomingFirstResponder : 1;
		unsigned selectionExtensionAnchor : 2;
		unsigned rulerUpdateDisabled : 1;
		unsigned delegateHandlesKeyBindings : 1;
		unsigned insertionPointDisabled : 1;
		unsigned smartnessEnabled : 1;
		unsigned rulerDisabled : 1;
		unsigned continueKillRing : 1;
		unsigned trackingAttachmentCell : 1;
		unsigned bufferingAltKeypadDigits : 1;
		unsigned allowsUndo : 1;
		unsigned delegateProvidesUndoManager : 1;
	}  _sdFlags;
	NSRange _selectedCharRange;
	NSRange _lastSelectedCharRangeForZoomNotification;
	NSRange _dragAndDropCharRange;
	double _distanceForVerticalArrowKeyMovement;
	NSRange _markedCharRange;
	NSDictionary* _markedAttributesDict;
	CFRunLoopTimerRef _blinkTimer;
	NSTextContainer* _blinkContainer;
	CGRect _blinkRect;
	id _delegate;
	NSTextView* _notifyingTextView;
	NSColor* _backgroundColor;
	NSDictionary* _selectedAttributesDict;
	NSColor* _insertionPointColor;
	long long _spellCheckerDocumentTag;
	NSDictionary* _typingAttributesDict;
	NSTextView* _rulerClient;
	NSRulerView* _ruler;
	NSParagraphStyle* _rulerStyle;
	unsigned long long _clickedCharIndex;
	id _undoTextObject;
	NSAttributedString* _attributedStringForMarkedRange;
	NSArray* _validMarkedAttributesDict;
	NSRange _emacsMarkCharRange;
	struct {
		unsigned _acceptsGlyphInfo : 1;
		unsigned _wantsNotificationForMarkedText : 1;
		unsigned _usesInspectorBar : 1;
		unsigned _allowsDocumentBackgroundColorChange : 1;
		unsigned _delegateControlsInsertionPointDrawing : 1;
		unsigned _delegateHandlesEvents : 1;
		unsigned _delegateHearsAboutEvents : 1;
		unsigned _undoRedoInProgress : 1;
		unsigned _colorToChange : 3;
		unsigned _grammarCheckingEnabled : 1;
		unsigned _splitInsertionPoint : 1;
		unsigned _undoManagerUsed : 1;
		unsigned _insertingText : 1;
		unsigned _markingText : 1;
		unsigned _allowsImageEditing : 1;
		unsigned _quoteSubstitutionEnabled : 1;
		unsigned _linkDetectionEnabled : 1;
		unsigned _delegateHandlesSpellingState : 1;
		unsigned _displaysLinkToolTips : 1;
		unsigned _settingColorPanel : 1;
		unsigned _drawingFindIndicator : 1;
		unsigned _ignoringQuoteSubstitution : 1;
		unsigned _needsNewTypingAttributes : 1;
		unsigned _selectionIsRectangular : 1;
		unsigned _hasBeenScrolled : 1;
		unsigned _scrollingToEnd : 1;
		unsigned _correctingText : 1;
		unsigned _forceCoalesceTyping : 1;
		unsigned _usesRolloverForSelection : 1;
		unsigned _pad : 1;
	}  _sdFlags2;
	unsigned long long _pastedGraphicCount;
	NSDictionary* _linkAttributesDict;
	NSParagraphStyle* _defaultParagraphStyle;
	CFRunLoopTimerRef _toolTipTimer;
	CGPoint _toolTipPoint;
	NSWindow* _toolTipWindow;
	NSTextView* _toolTipTrackingRectClient;
	long long _toolTipTrackingRectTag;
	NSTextInputContext* _inputContext;
	NSSelectionArray* _selectedRanges;
	NSSelectionArray* _savedSelectedRanges;
	NSSelectionArray* _dragAndDropCharRanges;
	CGRect _alternateBlinkRect;
	NSDictionary* _markedTypingAttributesDict;
	NSUndoManager* _fieldEditorUndoManager;
	NSArray* _allowedInputLocales;
	NSArray* _smartLinkLocations;
	NSArray* _textCheckingChangeLocations;
	NSArray* _textCheckingScheduledRanges;
	NSRange _deferredCheckingRange;
	NSRange _lastDeferredCheckingRange;
	struct {
		unsigned _languageIdentificationEnabled : 1;
		unsigned _dateDetectionEnabled : 1;
		unsigned _addressDetectionEnabled : 1;
		unsigned _dashSubstitutionEnabled : 1;
		unsigned _textReplacementEnabled : 1;
		unsigned _spellingCorrectionEnabled : 1;
		unsigned _reservedTextCheckingType1 : 1;
		unsigned _reservedTextCheckingType2 : 1;
		unsigned _delegateHandlesWillCheckText : 1;
		unsigned _delegateHandlesDidCheckText : 1;
		unsigned _scheduleTextCheckingQuickly : 1;
		unsigned _registeredForSpellCheckerNotifications : 1;
		unsigned _centersOnScroll : 1;
		unsigned _inLineByLineScrolling : 1;
		unsigned _scrollRangeDisabled : 1;
		unsigned _incrementalSearchingEnabled : 1;
		unsigned _textReplacementSet : 1;
		unsigned _spellingCorrectionSet : 1;
		unsigned _registeredForPreferenceNotifications : 1;
		unsigned _textHasBeenEdited : 1;
		unsigned _startOfTextReplaced : 1;
		unsigned _startOfTextReplacedRecently : 1;
		unsigned _quoteSubstitutionSet : 1;
		unsigned _dashSubstitutionSet : 1;
		unsigned _pad : 8;
	}  _sdFlags3;
	unsigned long long _otherEnabledTextCheckingTypes;
	long long _previousCheckingSequenceNumber;
	long long _prechangeCheckingSequenceNumber;
	CGPoint _dataDetectionPoint;
	NSRange _dataDetectionRange;
	NSWindow* _dataDetectionWindow;
	void* _dataDetectionHighlight;
	/*^block*/id _performTextChecking;
	/*^block*/id _considerDeferredTextChecking;
	/*^block*/id _updateDragTypeRegistration;
	NSTextFinder* _textFinder;
	long long _preferredTextFinderStyle;
	NSMutableSet* _activeAttachmentEditors;
	NSTextView* _correctingTextView;
	NSRange _temporaryCorrectionRange;
	CFRunLoopTimerRef _bubbleTimer;
	NSRange _bubbleRange;
	NSArray* _inspectorBarItems;
	NSRange _spellingFromMenuRange;
	NSRange _selectionRolloverRange;
	CFRunLoopTimerRef _selectionRolloverTimer;
	NSSharingServicePicker* _selectionRolloverPicker;

}
+(void)initialize;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_commonInit;
-(id)typingAttributes;
-(char)wantsNotificationForMarkedText;
-(void)setTypingAttributes:(id)arg1 ;
-(void)setSelectedTextAttributes:(id)arg1 ;
-(void)setWantsNotificationForMarkedText:(char)arg1 ;
-(void)setSelectedRanges:(id)arg1 ;
-(id)validAttributesForMarkedText;
-(id)inputContextForFirstTextView:(id)arg1 ;
-(void)clearMarkedRange;
-(char)acceptsGlyphInfo;
-(void)setDefaultParagraphStyle:(id)arg1 ;
-(void)stopCoalescing;
-(void)setDelegate:(id)arg1 withNotifyingTextView:(id)arg2 ;
-(char)isCoalescing;
-(void)changeWillBeUndone:(id)arg1 ;
-(void)setLinkTextAttributes:(id)arg1 ;
-(void)setInsertionPointColor:(id)arg1 ;
-(void)setMarkedTextAttributes:(id)arg1 ;
-(void)setDragAndDropCharRanges:(id)arg1 ;
-(void)coalesceInTextView:(id)arg1 affectedRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)setAcceptsGlyphInfo:(char)arg1 ;
-(void)addAttachmentEditor:(id)arg1 ;
-(void)removeAttachmentEditor:(id)arg1 ;
-(id)activeAttachmentEditors;
-(void)_flushInspectorBarItemIdentifiers;
@end

