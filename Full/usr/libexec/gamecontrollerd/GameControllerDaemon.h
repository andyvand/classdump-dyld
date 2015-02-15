/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/gamecontrollerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GameControllerDaemon <NSObject>
@required
-(void)requestConnectedHosts;
-(void)startForwardingToApplicationNamed:(id)arg1 pid:(id)arg2 bundlePath:(id)arg3;
-(void)startBonjourService;
-(void)setUserActivityUserInfo:(id)arg1;
-(void)addController:(id)arg1 forward:(char)arg2;
-(void)removeController:(id)arg1 forward:(char)arg2;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(char)arg4;
-(void)ping;

@end
