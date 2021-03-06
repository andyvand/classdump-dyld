/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSComboBox.h>
#import <AppKit/NSFindPatternField.h>

@protocol NSFindPatternManager;
@class NSFindPatternAttachmentCell, NSString;

@interface NSFindPatternComboBox : NSComboBox <NSFindPatternField> {

	id<NSFindPatternManager> findPatternManager;
	NSFindPatternAttachmentCell* selectedAttachment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<NSFindPatternManager> findPatternManager; 
-(void)setStringValue:(id)arg1 ;
-(char)performKeyEquivalent:(id)arg1 ;
-(void)setAttributedStringValue:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(CGRect)arg3 atIndex:(unsigned long long)arg4 ;
-(void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(CGRect)arg3 atIndex:(unsigned long long)arg4 ;
-(id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3 ;
-(void)setFindPatternPropertyList:(id)arg1 ;
-(id)findPatternPropertyList;
-(id)plainTextValue;
-(char)hasFindPattern;
-(id)findPatternArray;
-(void)insertNewFindPattern:(id)arg1 ;
-(id)_fieldEditor;
-(id)replacementExpression;
-(id)regularExpression;
-(void)setFindPatternArray:(id)arg1 ;
-(void)setFindPatternManager:(id<NSFindPatternManager>)arg1 ;
-(void)_insertFindPattern:(id)arg1 ;
-(id)menuForFindPatternAttachment:(id)arg1 ;
-(char)removeFindPattern:(id)arg1 ;
-(id<NSFindPatternManager>)findPatternManager;
-(id)findField;
-(char)_eventIsInsertPatternKeyEquivalent:(id)arg1 ;
-(id)_findPatternAttachmentForFindPattern:(id)arg1 ;
-(void)_insertFindPatternAttachment:(id)arg1 ;
-(id)replaceField;
-(char)_isFindField;
-(void)_updateReplacePatternsWithNewPatterns:(id)arg1 ;
-(void)_invalidateLayout;
-(void)_updateFindPatternsWithNewPatterns:(id)arg1 ;
-(void)_uniqueFindPatternsInAttributedStringAttachments:(id)arg1 ;
-(id)_rangesOfFindPattern:(id)arg1 ;
-(id)_uniquePatterns;
-(void)_selectedFindPattern:(id)arg1 ;
@end

