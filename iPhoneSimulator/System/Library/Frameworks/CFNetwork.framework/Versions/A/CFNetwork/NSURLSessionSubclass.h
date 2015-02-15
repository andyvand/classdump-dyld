/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLSessionSubclass <NSObject>
@required
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4;
-(id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(/*^block*/id)arg4;
-(id)_streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1;
-(void)_onqueue_completeInvalidation:(char)arg1;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1;

@end

