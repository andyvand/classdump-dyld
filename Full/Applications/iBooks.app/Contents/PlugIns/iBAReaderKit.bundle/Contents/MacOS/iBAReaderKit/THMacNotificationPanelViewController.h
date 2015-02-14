/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <AppKit/NSViewController.h>

@class TSDMacHUDWindow, NSFont;

@interface THMacNotificationPanelViewController : NSViewController {

	TSDMacHUDWindow* _hudWindow;
	NSFont* _labelFont;

}

@property (nonatomic,retain) TSDMacHUDWindow * hudWindow;              //@synthesize hudWindow=_hudWindow - In the implementation block
@property (nonatomic,retain) NSFont * labelFont;                       //@synthesize labelFont=_labelFont - In the implementation block
+(void)showAndFadePanelWithText:(id)arg1 overView:(id)arg2 ;
+(id)_singletonAlloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(void)setHudWindow:(TSDMacHUDWindow *)arg1 ;
-(TSDMacHUDWindow *)hudWindow;
-(void)p_fadeOutAndRemoveFromViewHierarchy;
-(NSFont *)labelFont;
-(void)setLabelFont:(NSFont *)arg1 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

