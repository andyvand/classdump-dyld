/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol
@optional
-(void)beginService;
-(void)endService;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;
-(oneway void)release;
-(id)retain;

@required
+(id)getSilo;
-(void)heartAttack;

@end

