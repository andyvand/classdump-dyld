/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/NSCopying.h>

@interface CUIRenditionSliceInformation : NSObject <NSCopying> {

	long long _renditionType;
	double _boundaries[4];
	CGRect _destinationRect;
	SCD_Struct_CU0 _edgeInsets;

}

@property (nonatomic,readonly) long long renditionType;                //@synthesize renditionType=_renditionType - In the implementation block
@property (nonatomic,readonly) CGRect destinationRect;                 //@synthesize destinationRect=_destinationRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CU0 edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(long long)renditionType;
-(id)initWithRenditionType:(long long)arg1 destinationRect:(CGRect)arg2 topLeftInset:(CGSize)arg3 bottomRightInset:(CGSize)arg4 ;
-(double)positionOfSliceBoundary:(unsigned long long)arg1 ;
-(id)initWithSliceInformation:(id)arg1 destinationRect:(CGRect)arg2 ;
-(CGSize)_topLeftCapSize;
-(CGSize)_bottomRightCapSize;
-(CGRect)destinationRect;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CU0)edgeInsets;
@end
