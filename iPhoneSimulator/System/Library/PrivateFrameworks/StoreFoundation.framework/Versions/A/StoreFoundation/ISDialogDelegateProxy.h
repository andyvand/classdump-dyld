/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/ISDialogDelegate.h>

@protocol ISDialogDelegate;
@interface ISDialogDelegateProxy : NSObject <ISDialogDelegate> {

	id<ISDialogDelegate> _delegate;

}

@property (retain) id<ISDialogDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue; 
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setDelegate:(id<ISDialogDelegate>)arg1 ;
-(id<ISDialogDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)dialog:(id)arg1 shouldDismissWithReturnCode:(long long)arg2 replyBlock:(/*^block*/id)arg3 ;
@end

