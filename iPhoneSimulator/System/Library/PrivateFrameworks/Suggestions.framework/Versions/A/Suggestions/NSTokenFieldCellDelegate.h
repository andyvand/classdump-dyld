/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSTokenFieldCellDelegate <NSObject>
@optional
-(id)tokenFieldCell:(id)arg1 displayStringForRepresentedObject:(id)arg2;
-(id)tokenFieldCell:(id)arg1 editingStringForRepresentedObject:(id)arg2;
-(id)tokenFieldCell:(id)arg1 representedObjectForEditingString:(id)arg2;
-(unsigned long long)tokenFieldCell:(id)arg1 styleForRepresentedObject:(id)arg2;
-(char)tokenFieldCell:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
-(id)tokenFieldCell:(id)arg1 readFromPasteboard:(id)arg2;
-(id)tokenFieldCell:(id)arg1 menuForRepresentedObject:(id)arg2;
-(char)tokenFieldCell:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
-(id)tokenFieldCell:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4;
-(id)tokenFieldCell:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;

@end

