/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:30 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPanel.h>

@class NSTimer;

@interface StressHUD : NSPanel {

	NSTimer* clock;

}
-(void)becameActive;
-(void)becameInactive;
-(void)tick;
-(id)init;
-(void)stop;
-(void)start;
@end
