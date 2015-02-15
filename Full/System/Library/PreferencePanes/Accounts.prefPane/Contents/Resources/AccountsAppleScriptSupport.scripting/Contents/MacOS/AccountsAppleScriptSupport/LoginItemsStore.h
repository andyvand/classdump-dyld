/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Accounts.prefPane/Contents/Resources/AccountsAppleScriptSupport.scripting/Contents/MacOS/AccountsAppleScriptSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccountsAppleScriptSupport/AccountsAppleScriptSupport-Structs.h>
@class NSMutableArray;

@interface LoginItemsStore : NSObject {

	id _delegate;
	NSMutableArray* _loginItems;
	OpaqueLSSharedFileListRefRef _sflref;
	OpaqueLSSharedFileListRefRef _globalsflref;
	OpaqueLSSharedFileListRefRef _managedsflref;

}
+(id)sharedLoginItemsStore;
-(void)addItemWithPath:(id)arg1 ;
-(void)authenticateStore:(AuthorizationOpaqueRefRef)arg1 ;
-(void)_notifyDelegate;
-(char)userMayAddItems;
-(void)readDefault;
-(void)toggleHideForItemAtIndex:(unsigned long long)arg1 ;
-(char)isPathUnique:(id)arg1 ;
-(char)isURLUnique:(id)arg1 ;
-(id)itemForPath:(id)arg1 ;
-(id)loginItems;
-(id)itemForURL:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)delegate;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
@end
