/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalendarAgentLink-Structs.h>
#import <CalendarAgentLink/NSSecureCoding.h>

@class NSString;

@interface CalAgentLinkQueueDebugOperationItem : NSObject <NSSecureCoding> {

	NSString* _className;
	NSString* _readableDescription;
	long long _retryCounter;
	long long _maxRetries;
	char _isRunning;
	char _isPendingRetry;

}

@property (nonatomic,retain) NSString * className;                        //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSString * readableDescription;              //@synthesize readableDescription=_readableDescription - In the implementation block
@property (assign,nonatomic) long long retryCounter;                      //@synthesize retryCounter=_retryCounter - In the implementation block
@property (assign,nonatomic) long long maxRetries;                        //@synthesize maxRetries=_maxRetries - In the implementation block
@property (assign,nonatomic) char isRunning;                              //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) char isPendingRetry;                         //@synthesize isPendingRetry=_isPendingRetry - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isRunning;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(char)isPendingRetry;
-(NSString *)readableDescription;
-(void)setReadableDescription:(NSString *)arg1 ;
-(void)setIsRunning:(char)arg1 ;
-(void)setIsPendingRetry:(char)arg1 ;
-(long long)maxRetries;
-(void)setMaxRetries:(long long)arg1 ;
-(long long)retryCounter;
-(void)setRetryCounter:(long long)arg1 ;
@end

