/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:54:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Accounts/Notification/CloudDocsAccountNotificationPlugin.bundle/Contents/MacOS/CloudDocsAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(char)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(char)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

