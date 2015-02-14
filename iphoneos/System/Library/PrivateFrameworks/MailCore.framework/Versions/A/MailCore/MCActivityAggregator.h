/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class MCActivityAggregate;

@interface MCActivityAggregator : NSObject {

	MCActivityAggregate* _in;
	MCActivityAggregate* _out;
	MCActivityAggregate* _save;

}

@property (nonatomic,readonly) MCActivityAggregate * in;                //@synthesize in=_in - In the implementation block
@property (nonatomic,readonly) MCActivityAggregate * out;               //@synthesize out=_out - In the implementation block
@property (nonatomic,readonly) MCActivityAggregate * save;              //@synthesize save=_save - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(MCActivityAggregate *)in;
-(MCActivityAggregate *)out;
-(void)activityMonitor:(id)arg1 didChangeTypeFrom:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(MCActivityAggregate *)save;
@end

