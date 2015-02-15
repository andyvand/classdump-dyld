/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSWindow.h>

@class IKSSPanel, NSMutableArray;

@interface IKSSBackgroundWindow : NSWindow {

	IKSSPanel* _panel;
	NSMutableArray* _fauxUIElements;

}
-(void)setPanel:(id)arg1 ;
-(CGRect)boundsForPanelButtonAtIndex:(long long)arg1 ;
-(void)buttonSetupDone:(id)arg1 ;
-(id)accessibilityAttributeValue2:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)canBecomeMainWindow;
-(char)canBecomeKeyWindow;
-(void)mouseMoved:(id)arg1 ;
@end

