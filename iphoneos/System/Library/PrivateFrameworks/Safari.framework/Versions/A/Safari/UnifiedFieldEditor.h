/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/TextFieldEditor.h>

@class UnifiedField, NSString;

@interface UnifiedFieldEditor : TextFieldEditor {

	UnifiedField* field;
	NSString* _previousMarkedText;
	char _selectionWasAutocompleted;
	char _isAdjustingAutocompleteSelection;

}

@property (assign,nonatomic) char selectionWasAutocompleted;                                                           //@synthesize selectionWasAutocompleted=_selectionWasAutocompleted - In the implementation block
@property (assign,getter=isAdjustingAutocompleteSelection,nonatomic) char adjustingAutocompleteSelection;              //@synthesize isAdjustingAutocompleteSelection=_isAdjustingAutocompleteSelection - In the implementation block
-(id)initWithField:(id)arg1 ;
-(char)pasteReplacesTabsWithSpaces;
-(char)isAdjustingAutocompleteSelection;
-(void)setSelectionWasAutocompleted:(char)arg1 ;
-(void)_notifyFieldIfMarkedTextDidChange;
-(char)selectionWasAutocompleted;
-(void)setAdjustingAutocompleteSelection:(char)arg1 ;
-(char)_allTextSelected;
-(char)_shouldWriteSearchTermsToPasteboardAsLink;
-(id)_replacementStringforWritingToPasteboard;
-(void)doCommandBySelector:(SEL)arg1 ;
-(char)canSmoothFontsInLayer;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)didChangeText;
-(void)insertText:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)writablePasteboardTypes;
-(char)writeSelectionToPasteboard:(id)arg1 type:(id)arg2 ;
-(id)selectedTextAttributes;
-(id)acceptableDragTypes;
-(void)pasteAsPlainText:(id)arg1 ;
-(void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(char)arg3 ;
-(char)shouldDrawInsertionPoint;
-(void)smartInsertForString:(id)arg1 replacingRange:(NSRange)arg2 beforeString:(id*)arg3 afterString:(id*)arg4 ;
@end

