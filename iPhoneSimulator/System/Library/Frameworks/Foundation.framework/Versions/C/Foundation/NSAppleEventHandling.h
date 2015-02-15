/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSAppleEventDescriptor, NSScriptCommand;

@interface NSAppleEventHandling : NSObject {

	NSAppleEventDescriptor* _event;
	NSAppleEventDescriptor* _replyEvent;
	NSScriptCommand* _scriptCommand;
	char _isSuspendedWithAE;
	char _padding[3];

}
-(id)initWithEvent:(const AEDesc*)arg1 replyEvent:(AEDesc*)arg2 ;
-(void)setScriptCommand:(id)arg1 ;
-(id)replyEvent;
-(id)scriptCommand;
-(void)resumeWithScriptCommandResult:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(id)event;
@end

