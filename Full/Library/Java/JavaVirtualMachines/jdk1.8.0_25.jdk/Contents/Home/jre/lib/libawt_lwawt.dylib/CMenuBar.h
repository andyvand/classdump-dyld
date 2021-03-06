/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Java/JavaVirtualMachines/jdk1.8.0_25.jdk/Contents/Home/jre/lib/libawt_lwawt.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libawt_lwawt.dylib/libawt_lwawt.dylib-Structs.h>
#import <libawt_lwawt.dylib/CMenuComponent.h>

@class NSMutableArray, CMenu;

@interface CMenuBar : CMenuComponent {

	NSMutableArray* fMenuList;
	CMenu* fHelpMenu;
	char fModallyDisabled;

}
+(void)activate:(id)arg1 modallyDisabled:(char)arg2 ;
+(void)clearMenuBarExcludingAppleMenu_OnAppKitThread:(char)arg1 ;
+(void)addDefaultHelpMenu;
+(char)isActiveMenuBar:(id)arg1 ;
-(void)javaSetHelpMenu:(id)arg1 ;
-(void)javaAddMenu:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithPeer:(jobjectRef)arg1 ;
-(void)javaDeleteMenu:(int)arg1 ;
-(void)nativeDeleteMenu_OnAppKitThread:(id)arg1 ;
-(long long)javaIndexToNSMenuIndex_OnAppKitThread:(int)arg1 ;
-(void)nativeAddMenuAtIndex_OnAppKitThread:(id)arg1 ;
-(void)javaAddMenu:(id)arg1 ;
-(void)dealloc;
-(void)deactivate;
@end

