/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PFUBLogEventID : NSObject {

	NSString* _idString;
	long long _hash;
	long long _eventType;

}

@property (nonatomic,readonly) NSString * idString;              //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) long long hash;                   //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) long long eventType;              //@synthesize eventType=_eventType - In the implementation block
+(void)initialize;
-(id)initWithEventType:(int)arg1 ;
-(id)initWithCustomKey:(id)arg1 ;
-(NSString *)idString;
-(long long)eventType;
-(long long)hash;
@end
