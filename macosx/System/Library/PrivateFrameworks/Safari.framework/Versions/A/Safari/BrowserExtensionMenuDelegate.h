/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSMenuDelegate.h>

@class NSString;

@interface BrowserExtensionMenuDelegate : NSObject <NSMenuDelegate> {

	ExtensionMenu* _extensionMenu;
	char _menuNeedsUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearMenu:(id)arg1 ;
-(ExtensionMenu*)extensionMenu;
-(id)initWithExtensionMenu:(ExtensionMenu*)arg1 ;
-(void)setMenuNeedsUpdate:(char)arg1 ;
-(void)menuNeedsUpdate:(id)arg1 ;
-(void)menuDidClose:(id)arg1 ;
@end

