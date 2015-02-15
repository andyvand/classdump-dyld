/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {

	AVPlayerItemErrorLogEventInternal* _playerItemErrorLogEvent;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) long long errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(long long)errorStatusCode;
-(NSString *)errorComment;
-(NSString *)URI;
-(NSString *)errorDomain;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id)initWithDictionary:(id)arg1 ;
@end

