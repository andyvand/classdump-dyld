/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:23 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCQOSInvocation.h>

@interface MCPriorityInvocation : MCQOSInvocation {

	unsigned char _priority;

}

@property (assign) unsigned char priority;              //@synthesize priority=_priority - In the implementation block
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6 priority:(unsigned char)arg7 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 priority:(unsigned char)arg3 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 priority:(unsigned char)arg4 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 priority:(unsigned char)arg5 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 priority:(unsigned char)arg6 ;
-(void)setPriority:(unsigned char)arg1 ;
-(unsigned char)priority;
@end
