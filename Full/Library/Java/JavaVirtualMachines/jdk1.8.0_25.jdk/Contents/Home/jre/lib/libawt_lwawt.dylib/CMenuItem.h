/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/Contents/Home/jre/lib/libawt_lwawt.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libawt_lwawt.dylib/libawt_lwawt.dylib-Structs.h>
#import <libawt_lwawt.dylib/CMenuComponent.h>

@class NSMenuItem;

@interface CMenuItem : CMenuComponent {

	NSMenuItem* fMenuItem;
	char fIsCheckbox;
	char fIsEnabled;

}
-(void)addNSMenuItemToMenu:(id)arg1 ;
-(id)initWithPeer:(jobjectRef)arg1 asSeparator:(id)arg2 ;
-(void)setIsCheckbox;
-(void)setJavaState:(char)arg1 ;
-(void)_createMenuItem_OnAppKitThread:(id)arg1 ;
-(void)setJavaImage:(id)arg1 ;
-(void)setJavaToolTipText:(id)arg1 ;
-(void)setJavaLabel:(id)arg1 shortcut:(id)arg2 modifierMask:(int)arg3 ;
-(void)handleAction:(id)arg1 ;
-(void)setJavaEnabled:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEnabled;
-(char)worksWhenModal;
-(id)menuItem;
-(void)cleanup;
@end
