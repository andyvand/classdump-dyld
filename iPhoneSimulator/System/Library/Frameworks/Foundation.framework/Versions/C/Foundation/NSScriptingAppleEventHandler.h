/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSScriptingAppleEventHandler : NSObject
+(id)sharedScriptingAppleEventHandler;
-(id)secureCommandEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)_registerForCommandDescription:(id)arg1 onlySecurityHandlers:(char)arg2 ;
-(void)handleGetAETEEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)handleCommandEvent:(id)arg1 withReplyEvent:(id)arg2 ;
-(void)registerNormalHandlersForCommandDescription:(id)arg1 ;
-(void)registerForCommandDescription:(id)arg1 ;
@end

