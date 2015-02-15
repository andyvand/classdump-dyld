/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface WBSHistoryTombstone : NSObject {

	NSString* _urlString;
	double _startTime;
	double _endTime;
	long long _generation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * urlString;                                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long generation;                                 //@synthesize generation=_generation - In the implementation block
-(NSString *)urlString;
-(char)matchesVisitTime:(double)arg1 urlString:(id)arg2 ;
-(id)initWithURLString:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 generation:(long long)arg4 ;
-(id)initWithSQLiteRow:(id)arg1 ;
-(long long)generation;
-(double)startTime;
-(double)endTime;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
@end
