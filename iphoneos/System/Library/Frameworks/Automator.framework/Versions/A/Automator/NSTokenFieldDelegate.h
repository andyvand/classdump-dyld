/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSTokenFieldDelegate <NSTextFieldDelegate>
@optional
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
-(unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
-(char)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
-(id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4;
-(id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;

@end

