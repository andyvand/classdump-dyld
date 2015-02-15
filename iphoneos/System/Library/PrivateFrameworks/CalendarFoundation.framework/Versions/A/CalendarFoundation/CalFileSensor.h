/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject;

@interface CalFileSensor : NSObject {

	NSString* _path;
	int _type;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _eventBlock;
	char _started;

}

@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char started;                 //@synthesize started=_started - In the implementation block
@property (nonatomic,copy) id eventBlock;                  //@synthesize eventBlock=_eventBlock - In the implementation block
+(id)copyFileSensorTypeAsString:(int)arg1 ;
+(unsigned long long)_maskForFileSensorType:(int)arg1 ;
-(id)eventBlock;
-(id)initWithPath:(id)arg1 andType:(int)arg2 ;
-(void)setEventBlock:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)description;
-(NSString *)path;
-(int)type;
-(void)setPath:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(char)started;
-(void)setStarted:(char)arg1 ;
@end
