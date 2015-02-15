/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:25 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebNotificationProvider
@required
-(void)registerWebView:(id)arg1;
-(void)unregisterWebView:(id)arg1;
-(void)showNotification:(id)arg1 fromWebView:(id)arg2;
-(void)cancelNotification:(id)arg1;
-(void)notificationDestroyed:(id)arg1;
-(void)clearNotifications:(id)arg1;
-(int)policyForOrigin:(id)arg1;
-(void)webView:(id)arg1 didShowNotification:(unsigned long long)arg2;
-(void)webView:(id)arg1 didClickNotification:(unsigned long long)arg2;
-(void)webView:(id)arg1 didCloseNotifications:(id)arg2;

@end
