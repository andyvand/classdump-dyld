/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PubSub/PubSub-Structs.h>
#import <PubSub/NSCopying.h>

@protocol PSMessageQueueDelegate;
@class NSString, PSGetOperation, PSPutOperation, NSURL, NSDictionary;

@interface PSMessageQueue : NSObject <NSCopying> {

	NSString* _base;
	NSString* _userAgent;
	NSString* _curETag;
	unsigned _curFile;
	unsigned _curEOF;
	char _curIncomplete;
	double _lastFetchTime;
	id<PSMessageQueueDelegate> _delegate;
	PSGetOperation* _pendingGet;
	PSPutOperation* _pendingPut;

}

@property (readonly) NSURL * baseURL; 
@property (readonly) NSDictionary * state; 
@property (readonly) char isEmpty; 
@property (copy) NSString * userAgent;                               //@synthesize userAgent=_userAgent - In the implementation block
@property (assign) id<PSMessageQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) char isBusy; 
@property (readonly) char isFetchingMessages; 
@property (readonly) char isSendingMessages; 
-(id)credential;
-(void)setUserAgent:(NSString *)arg1 ;
-(char)fetchNewMessages;
-(id)initWithDotMacMember:(id)arg1 basePath:(id)arg2 state:(id)arg3 ;
-(char)createParentDirectory:(id*)arg1 ;
-(char)sendMessages:(id)arg1 ;
-(id)initWithBaseURL:(id)arg1 state:(id)arg2 ;
-(void)stateChanged;
-(id)_urlForFileNumber:(unsigned)arg1 ;
-(char)isOnDotMac;
-(void)_finishedGET:(id)arg1 error:(id)arg2 ;
-(id)_currentURL;
-(long long)_parseChunks:(id)arg1 position:(unsigned long long)arg2 into:(id)arg3 ;
-(void)addedData:(id)arg1 fromFile:(unsigned)arg2 atOffset:(unsigned)arg3 ;
-(void)_setCurFile:(unsigned)arg1 eof:(unsigned)arg2 eTag:(id)arg3 incomplete:(char)arg4 ;
-(void)addedMessages:(id)arg1 ;
-(void)_finishedPUT:(id)arg1 error:(id)arg2 ;
-(char)_sendMessages:(id)arg1 ;
-(id)_doModalAction:(SEL)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(char)sendMessages:(id)arg1 error:(id*)arg2 ;
-(char)isFetchingMessages;
-(char)isSendingMessages;
-(id)fetchNewMessages:(id*)arg1 ;
-(char)sendMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithState:(id)arg1 ;
-(char)isBusy;
-(NSString *)userAgent;
-(void)setDelegate:(id<PSMessageQueueDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(NSDictionary *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PSMessageQueueDelegate>)delegate;
-(char)isEmpty;
-(NSURL *)baseURL;
@end

