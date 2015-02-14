/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzFilters/QuartzFilters-Structs.h>
@class QuartzFilter, QuartzFilterOwner, NSURL, NSMutableDictionary, QFilter;

@interface QuartzFilterInternal : NSObject {

	QuartzFilter* mQuartzFilter;
	QuartzFilterOwner* mOwner;
	NSURL* mURL;
	NSMutableDictionary* mProperties;
	QFilter* mQFilter;
	NSMutableDictionary* mContextDict;

}
+(id)newWithProperties:(id)arg1 quartzFilter:(id)arg2 ;
+(id)newWithURL:(id)arg1 quartzFilter:(id)arg2 ;
+(id)newWithOutputIntents:(id)arg1 quartzFilter:(id)arg2 ;
-(void)filterNotification:(id)arg1 type:(int)arg2 info:(void*)arg3 ;
-(id)qfilter;
-(id)quartzfilter;
-(id)contextDictionary;
-(id)initWithURL:(id)arg1 quartzFilter:(id)arg2 ;
-(id)initWithProperties:(id)arg1 quartzFilter:(id)arg2 ;
-(id)initWithOutputIntents:(id)arg1 quartzFilter:(id)arg2 ;
-(void)flushDerivables;
-(void)dealloc;
-(id)description;
-(id)url;
-(id)name;
-(void)setURL:(id)arg1 ;
-(id)properties;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(char)applyToContext:(CGContextRef)arg1 ;
@end

