/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PAMemRange;

@interface PARangeContainer : NSObject {

	PAMemRange* range;

}

@property (retain) PAMemRange * range; 
-(long long)compareRange:(id)arg1 equalWhenContained:(char)arg2 equalWhenIntersects:(char)arg3 ;
-(PAMemRange *)range;
-(void)setRange:(PAMemRange *)arg1 ;
@end

