/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/NSTokenFieldDelegate.h>

@class NSCharacterSet, AMVariablesEditorView, NSString;

@interface AMVariablesEditorDateFormatDelegate : NSObject <NSTokenFieldDelegate> {

	NSCharacterSet* _charactersICU;
	NSCharacterSet* _charactersToQuote;
	AMVariablesEditorView* _editorView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayStringForPattern:(id)arg1 ;
-(id)displayValueForPattern:(id)arg1 ;
-(id)formatsForPattern:(id)arg1 ;
-(void)formatDidChange:(id)arg1 ;
-(void)setObjectValue:(id)arg1 forTokenField:(id)arg2 ;
-(id)representedObjectsForPattern:(id)arg1 ;
-(id)editorView;
-(void)setEditorView:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)controlTextDidChange:(id)arg1 ;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3 ;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
@end

