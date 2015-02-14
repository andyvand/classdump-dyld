/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LUIController.h>

@class LUITextField, NSDateFormatter, NSTimer;

@interface LUITimeStatusController : LUIController {

	LUITextField* _timeTextField;
	NSDateFormatter* _timeFormatter;
	NSTimer* _clockTimer;

}
+(id)controllerWithStyle:(int)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)tearDownController;
-(void)_setupContentView;
-(void)pauseController;
-(void)resumeController;
-(id)_userTimeFormat;
-(void)_timePressed:(id)arg1 ;
-(void)_clockTick:(id)arg1 ;
@end

