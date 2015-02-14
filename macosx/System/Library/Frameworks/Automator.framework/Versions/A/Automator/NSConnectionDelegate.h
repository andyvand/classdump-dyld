/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSConnectionDelegate <NSObject>
@optional
-(char)connection:(id)arg1 shouldMakeNewConnection:(id)arg2;
-(char)makeNewConnection:(id)arg1 sender:(id)arg2;
-(id)authenticationDataForComponents:(id)arg1;
-(char)authenticateComponents:(id)arg1 withData:(id)arg2;
-(char)connection:(id)arg1 handleRequest:(id)arg2;
-(id)createConversationForConnection:(id)arg1;

@end

