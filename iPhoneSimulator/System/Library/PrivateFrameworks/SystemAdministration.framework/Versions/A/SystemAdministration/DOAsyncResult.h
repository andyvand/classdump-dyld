/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SystemAdministration/DOAsyncResultProtocol.h>

@interface DOAsyncResult : NSObject <DOAsyncResultProtocol> {

	char mDone;
	long long mResult;
	/*^block*/id mCompletionBlock;
	void* mContext;

}

@property (readonly) char done; 
@property (readonly) long long result; 
@property (readonly) void* context; 
-(oneway void)setDoneWithResult:(long long)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 context:(void*)arg2 ;
-(void)waitForResult;
-(char)done;
-(id)init;
-(void)dealloc;
-(void*)context;
-(long long)result;
@end

