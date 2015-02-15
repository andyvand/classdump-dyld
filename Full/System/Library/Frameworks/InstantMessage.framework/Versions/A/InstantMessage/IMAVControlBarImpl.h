/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InstantMessage/IMAVControlBar.h>

@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {

	NSMutableArray* _controls;
	char _updateScheduled;

}
+(id)sharedControlBar;
-(id)_dictionaryRepresentation;
-(void)addControl:(id)arg1 ;
-(void)removeAllControls;
-(void)_deferredControlSync;
-(void)_controlDidChange:(id)arg1 ;
-(id)controls;
-(id)init;
-(void)removeControl:(id)arg1 ;
@end

