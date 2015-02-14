/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSDate, NSString, NSArray;

@interface _AMSystemEventsTrack : _AMSystemEventsItem

@property (readonly) long long audioChannelCount; 
@property (readonly) char audioCharacteristic; 
@property (readonly) double audioSampleRate; 
@property (readonly) long long audioSampleSize; 
@property (copy,readonly) NSDate * creationTime; 
@property (copy,readonly) NSString * dataFormat; 
@property (readonly) long long dataRate; 
@property (readonly) long long dataSize; 
@property (copy,readonly) NSArray * dimensions; 
@property (readonly) long long duration; 
@property (assign) char enabled; 
@property (assign) char highQuality; 
@property (copy,readonly) NSString * href; 
@property (copy,readonly) NSString * kind; 
@property (copy,readonly) NSDate * modificationTime; 
@property (copy,readonly) NSString * name; 
@property (assign) long long startTime; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * typeClass; 
@property (readonly) long long videoDepth; 
@property (readonly) char visualCharacteristic; 
-(NSDate *)creationTime;
-(long long)dataSize;
-(NSDate *)modificationTime;
-(long long)audioChannelCount;
-(char)audioCharacteristic;
-(double)audioSampleRate;
-(long long)audioSampleSize;
-(NSString *)dataFormat;
-(long long)dataRate;
-(char)highQuality;
-(void)setHighQuality:(char)arg1 ;
-(NSString *)typeClass;
-(long long)videoDepth;
-(char)visualCharacteristic;
-(char)enabled;
-(long long)startTime;
-(NSString *)href;
-(id)annotations;
-(long long)duration;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(NSString *)type;
-(NSString *)kind;
-(NSArray *)dimensions;
-(void)setStartTime:(long long)arg1 ;
@end

