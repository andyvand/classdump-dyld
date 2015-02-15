/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaUI/MediaUI-Structs.h>
#import <MediaUI/MediaUIValueTiming.h>

@interface MediaUIConcreteValueTiming : MediaUIValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(SCD_Struct_Me1)_timing;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rate;
@end

