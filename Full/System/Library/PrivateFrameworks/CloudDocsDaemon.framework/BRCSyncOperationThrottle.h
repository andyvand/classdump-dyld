/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/NSSecureCoding.h>

@class NSString;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {

	double _delay;
	double _nextTry;
	NSString* _containerID;

}

@property (nonatomic,readonly) double delay;                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double nextTry;                    //@synthesize nextTry=_nextTry - In the implementation block
@property (nonatomic,retain) NSString * containerID;              //@synthesize containerID=_containerID - In the implementation block
+(char)supportsSecureCoding;
-(void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1 ;
-(void)updateAfterSchedulingTask;
-(void)updateForError:(id)arg1 ;
-(double)nextTry;
-(NSString *)containerID;
-(id)initWithContainerID:(id)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(id)description;
-(void)clear;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)delay;
@end
