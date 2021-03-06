/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TNWOperationDelegateProtocol <NSObject>
@optional
-(void)preflightNWOperationEvent:(long long)arg1 results:(id)arg2 opController:(INWOperationController*)arg3;
-(void)nwOperationEventNewOperation:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventAskUser:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventWaitForAnswer:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventCanceled:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventStarted:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventPreprocess:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventProgress:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventPostprocess:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventFinished:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventErrorOccurred:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventConnecting:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventInformation:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventConflict:(id)arg1 opController:(INWOperationController*)arg2;
-(void)nwOperationEventBlocked:(id)arg1 opController:(INWOperationController*)arg2;

@end

