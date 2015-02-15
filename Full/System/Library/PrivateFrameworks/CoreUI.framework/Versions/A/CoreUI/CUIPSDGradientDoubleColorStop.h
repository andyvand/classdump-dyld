/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientColorStop.h>
#import <CoreUI/NSCoding.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {

	psdGradientColor leadOutColor;

}
+(id)doubleColorStopWithLocation:(double)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
+(void)initialize;
-(psdGradientColor)leadOutColor;
-(char)isDoubleStop;
-(id)initWithLocation:(double)arg1 leadInColor:(psdGradientColor)arg2 leadOutColor:(psdGradientColor)arg3 ;
-(psdGradientColor)leadInColor;
-(void)_setLeadOutColor:(psdGradientColor)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

