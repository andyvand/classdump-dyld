/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CALPublishOperationDelegate;
@class NSMutableDictionary, NSError;

@interface CALPublishOperation : NSObject {

	long long _operationProgress;
	long long _operationTotal;
	NSMutableDictionary* _privateInfos;
	id<CALPublishOperationDelegate> _delegate;
	char _useKerberos;
	NSError* _error;

}
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)error;
-(void)setError:(id)arg1 ;
-(void)setFirstPublish:(char)arg1 ;
-(void)publish:(id)arg1 automatic:(char)arg2 ;
-(void)unpublishWithAutomatic:(char)arg1 ;
-(id)initWithPublisher:(id)arg1 ;
-(void)setEtag:(id)arg1 ;
-(void)setInfo:(id)arg1 forKey:(id)arg2 ;
-(void)removeInfoForKey:(id)arg1 ;
-(id)infoForKey:(id)arg1 ;
-(id)publisher;
-(long long)operationProgress;
-(long long)operationTotal;
-(void)setUseKerberos:(char)arg1 ;
-(char)useKerberos;
-(void)abortOperation;
@end

