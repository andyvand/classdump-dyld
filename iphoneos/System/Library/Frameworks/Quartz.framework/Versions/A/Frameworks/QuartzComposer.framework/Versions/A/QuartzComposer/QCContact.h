/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzComposer/QuartzComposer-Structs.h>
@interface QCContact : NSObject {

	QCContactInfo _info;
	unsigned long long _index;

}

@property (readonly) double x; 
@property (readonly) double y; 
@property (readonly) int state; 
@property (readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)contactWithInfo:(QCContactInfo)arg1 index:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)index;
-(int)state;
-(id)initWithInfo:(QCContactInfo)arg1 index:(unsigned long long)arg2 ;
-(double)x;
-(double)y;
@end

