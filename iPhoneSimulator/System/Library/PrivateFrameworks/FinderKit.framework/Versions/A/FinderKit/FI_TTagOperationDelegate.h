/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/IAsyncNodeOperationDelegateProtocol.h>

@class NSString;

@interface FI_TTagOperationDelegate : NSObject <IAsyncNodeOperationDelegateProtocol> {

	TMutex fLock;
	TConditionVariable fCondition;
	BOOL fFinished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)waitForOperationToFinish;
-(int)asyncNodeOperation:(id)arg1 statusNotification:(const OperationMonitor*)arg2 ;
-(int)asyncNodeOperation:(id)arg1 errorNotification:(const OperationMonitor*)arg2 error:(const OperationErrorRecord*)arg3 reply:(NodeEventReply*)arg4 ;
-(int)asyncNodeOperation:(id)arg1 completedNotification:(const OperationMonitor*)arg2 ;
@end

