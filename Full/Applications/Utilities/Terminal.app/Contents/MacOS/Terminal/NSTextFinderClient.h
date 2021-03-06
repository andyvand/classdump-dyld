/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 1:29:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol NSTextFinderClient <NSObject>
@property (getter=isSelectable,readonly) char selectable; 
@property (readonly) char allowsMultipleSelection; 
@property (getter=isEditable,readonly) char editable; 
@property (readonly) NSString * string; 
@property (readonly) NSRange firstSelectedRange; 
@property (copy) NSArray * selectedRanges; 
@property (copy,readonly) NSArray * visibleCharacterRanges; 
@optional
-(NSString *)string;
-(char)isEditable;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2;
-(char)allowsMultipleSelection;
-(char)isSelectable;
-(unsigned long long)stringLength;
-(id)stringAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 endsWithSearchBoundary:(char*)arg3;
-(NSRange)firstSelectedRange;
-(id)contentViewAtIndex:(unsigned long long)arg1 effectiveCharacterRange:(NSRange*)arg2;
-(void)setSelectedRanges:(id)arg1;
-(char)shouldReplaceCharactersInRanges:(id)arg1 withStrings:(id)arg2;
-(void)didReplaceCharacters;
-(void)scrollRangeToVisible:(NSRange)arg1;
-(NSArray *)selectedRanges;
-(NSArray *)visibleCharacterRanges;
-(id)rectsForCharacterRange:(NSRange)arg1;
-(void)drawCharactersInRange:(NSRange)arg1 forContentView:(id)arg2;

@end

