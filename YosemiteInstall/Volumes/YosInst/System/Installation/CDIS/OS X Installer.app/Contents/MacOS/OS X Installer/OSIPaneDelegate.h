/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:08:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Installation/CDIS/OS X Installer.app/Contents/MacOS/OS X Installer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OSIPaneDelegate <NSObject>
@optional
-(void)willEnterPane:(int)arg1;
-(char)shouldMoveForward;
-(void)willLeavePane:(int)arg1;
-(char)shouldMoveBack;
-(void)alternateButtonPressed;

@required
-(id)identifier;

@end
