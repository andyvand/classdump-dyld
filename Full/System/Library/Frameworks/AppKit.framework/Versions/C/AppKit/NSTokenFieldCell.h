/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSCharacterSet;

@interface NSTokenFieldCell : NSTextFieldCell {

	NSCharacterSet* _tokenizingCharacterSet;
	id _delegate;
	double _completionDelay;
	id _cache;
	id _defaultTerminator;
	id _trackingArea;
	id _lastCell;
	CGRect _lastCellFrame;
	char* _autoCompleteCancel;
	id _reserved[6];
	struct {
		unsigned _style : 4;
		unsigned _invalidCache : 1;
		unsigned _inDidChange : 1;
		unsigned _validationDisabled : 1;
		unsigned _reserved1 : 1;
		unsigned _autoCompleteMode : 2;
		unsigned _inValidateEditing : 1;
		unsigned _performingDrop : 1;
		unsigned _reserved : 20;
	}  _tfcFlags;

}

@property (assign) unsigned long long tokenStyle; 
@property (assign) double completionDelay; 
@property (copy) NSCharacterSet * tokenizingCharacterSet; 
@property (assign) id<NSTokenFieldCellDelegate> delegate; 
+(void)initialize;
+(double)defaultCompletionDelay;
+(id)defaultTokenizingCharacterSet;
-(id)init;
-(void)setDelegate:(id<NSTokenFieldCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(id<NSTokenFieldCellDelegate>)delegate;
-(id)initTextCell:(id)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setControlSize:(unsigned long long)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(void)setWraps:(char)arg1 ;
-(void)setLineBreakMode:(unsigned long long)arg1 ;
-(void)updateTrackingAreaWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)initImageCell:(id)arg1 ;
-(id)_formatObjectValue:(id)arg1 invalid:(char)arg2 ;
-(id)_unformattedAttributedStringValue:(id)arg1 ;
-(void)setScrollable:(char)arg1 ;
-(id)_textAttributes;
-(char)_hasAttributedStringValue;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)accessibilityValueAttribute;
-(char)_objectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(char)_skipsSynchronizationForEditingTextView:(id)arg1 ;
-(char)allowsEditingTextAttributes;
-(char)allowsEditingTokens;
-(long long)_typesetterBehavior;
-(void)_setEditingTextView:(id)arg1 ;
-(id)_selectOrEdit:(const CGRect*)arg1 inView:(id)arg2 target:(id)arg3 editor:(id)arg4 event:(id)arg5 start:(long long)arg6 end:(long long)arg7 ;
-(void)textDidChange:(id)arg1 ;
-(id)setUpFieldEditorAttributes:(id)arg1 ;
-(void)_validateEditing:(id)arg1 ;
-(id)fieldEditorForView:(id)arg1 ;
-(id)_defaultPlaceholderString;
-(NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3 ;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(void)mouseMoved:(id)arg1 ;
-(id)acceptableDragTypes;
-(NSRange)rangeForUserCompletion;
-(NSCharacterSet *)tokenizingCharacterSet;
-(id)tokenAttachment:(id)arg1 shouldUseTokenAttachmentCell:(id)arg2 ;
-(void)tokenAttachment:(id)arg1 prepareMenu:(id)arg2 forTextView:(id)arg3 withEvent:(id)arg4 ;
-(char)hasMenuForTokenAttachment:(id)arg1 ;
-(id)menuForTokenAttachment:(id)arg1 ;
-(unsigned long long)tokenStyle;
-(char)tokenAttachment:(id)arg1 doubleClickedInRect:(CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(void)setAutoValidationDisabled:(char)arg1 ;
-(void)setTokenStyle:(unsigned long long)arg1 ;
-(void)setCompletionDelay:(double)arg1 ;
-(double)completionDelay;
-(void)setTokenizingCharacterSet:(NSCharacterSet *)arg1 ;
-(id)_defaultTokenizingCharacter;
-(id)setUpTokenAttachmentCell:(id)arg1 forRepresentedObject:(id)arg2 ;
-(char)_characterAtIndex:(unsigned long long)arg1 shouldTerminateString:(id)arg2 ;
-(id)_representedObjectsForString:(id)arg1 andAttributedString:(id)arg2 range:(NSRange)arg3 ;
-(id)_attributedStringForRepresentedObjects:(id)arg1 ;
-(id)_stringForRepresentedObjects:(id)arg1 ;
-(char)_tokenizeCharactersAdjacentToSelectionForTextView:(id)arg1 terminatorsNeeded:(char)arg2 ;
-(char)autoValidationDisabled;
-(void)_concludeTracking;
-(id)layoutManager:(id)arg1 shouldUseSelectedTextAttributes:(id)arg2 atCharacterIndex:(unsigned long long)arg3 effectiveRange:(NSRange*)arg4 ;
-(id)tokenTextView:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2 ;
-(id)tokenTextView:(id)arg1 shouldUseWritablePasteboardTypes:(id)arg2 ;
-(id)tokenTextView:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2 ;
-(char)tokenTextView:(id)arg1 writeSelectionToPasteboard:(id)arg2 type:(id)arg3 ;
-(char)tokenTextView:(id)arg1 readSelectionFromPasteboard:(id)arg2 type:(id)arg3 ;
-(char)_performingDrop;
-(void)_setPerformingDrop:(char)arg1 ;
@end
