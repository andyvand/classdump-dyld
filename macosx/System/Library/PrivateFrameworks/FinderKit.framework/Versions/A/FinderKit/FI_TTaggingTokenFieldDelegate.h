/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/NSTokenFieldDelegate.h>

@class NSString;

@interface FI_TTaggingTokenFieldDelegate : NSObject <NSTokenFieldDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2 ;
-(id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long*)arg4 ;
-(id)tokenFieldCell:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3 ;
@end

