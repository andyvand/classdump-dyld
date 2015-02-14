/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSTextViewDelegate <NSTextDelegate>
@optional
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementString:(id)arg3;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(CGRect)arg3 atIndex:(unsigned long long)arg4;
-(void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(CGRect)arg3 atIndex:(unsigned long long)arg4;
-(void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(CGRect)arg3 event:(id)arg4 atIndex:(unsigned long long)arg5;
-(id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
-(char)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
-(NSRange*)textView:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3;
-(char)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
-(id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
-(void)textViewDidChangeSelection:(id)arg1;
-(void)textViewDidChangeTypingAttributes:(id)arg1;
-(id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
-(id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(NSRange)arg3 indexOfSelectedItem:(long long*)arg4;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
-(long long)textView:(id)arg1 shouldSetSpellingState:(long long)arg2 range:(NSRange)arg3;
-(id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
-(id)textView:(id)arg1 willCheckTextInRange:(NSRange)arg2 options:(id)arg3 types:(unsigned long long*)arg4;
-(id)textView:(id)arg1 didCheckTextInRange:(NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 results:(id)arg5 orthography:(id)arg6 wordCount:(long long)arg7;
-(id)textView:(id)arg1 URLForContentsOfTextAttachment:(id)arg2 atIndex:(unsigned long long)arg3;
-(id)textView:(id)arg1 willShowSharingServicePicker:(id)arg2 forItems:(id)arg3;
-(id)undoManagerForTextView:(id)arg1;
-(char)textView:(id)arg1 clickedOnLink:(id)arg2;
-(void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(CGRect)arg3;
-(void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(CGRect)arg3;
-(void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(CGRect)arg3 event:(id)arg4;

@end

