/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSRequestDelegate;
@class NSString, NSValue;

@interface SSRequest : NSObject {

	id<SSRequestDelegate> _delegate;
	NSString* _identifier;
	long long _state;
	NSValue* _callbackID;

}

@property (assign,nonatomic,__weak) id<SSRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * requestQueueSelectorName; 
@property (readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
+(id)_newIdentifier;
-(void)_finish;
-(void)_failWithError:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SSRequestDelegate>)arg1 ;
-(void)dealloc;
-(char)start;
-(void)cancel;
-(NSString *)identifier;
-(id<SSRequestDelegate>)delegate;
-(char)send;
-(char)issueRequestForIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)handleFinishResponse:(id)arg1 error:(id*)arg2 ;
-(id)requestInfo;
-(NSString *)requestQueueSelectorName;
-(id)messageName;
-(void)callback:(id)arg1 connectionIsValid:(char)arg2 ;
-(void)handleDaemonExit;
@end

