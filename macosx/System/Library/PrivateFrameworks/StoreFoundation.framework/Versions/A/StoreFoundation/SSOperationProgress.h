/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/StoreFoundation-Structs.h>
#import <StoreFoundation/NSSecureCoding.h>
#import <StoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface SSOperationProgress : NSObject <NSSecureCoding, NSCopying> {

	char _canPause;
	double _changeRate;
	double _currentValue;
	double _estimatedTimeRemaining;
	double _maxValue;
	double _normalizedCurrentValue;
	double _normalizedMaxValue;
	long long _operationType;
	long long _units;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;

}

@property (assign,nonatomic) char canPause;                              //@synthesize canPause=_canPause - In the implementation block
@property (assign,nonatomic) long long operationType;                    //@synthesize operationType=_operationType - In the implementation block
@property (assign,nonatomic) double changeRate;                          //@synthesize changeRate=_changeRate - In the implementation block
@property (assign,nonatomic) double currentValue;                        //@synthesize currentValue=_currentValue - In the implementation block
@property (assign,nonatomic) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (assign,nonatomic) double maxValue;                            //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) long long units;                            //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) double normalizedCurrentValue;              //@synthesize normalizedCurrentValue=_normalizedCurrentValue - In the implementation block
@property (assign,nonatomic) double normalizedMaxValue;                  //@synthesize normalizedMaxValue=_normalizedMaxValue - In the implementation block
+(char)supportsSecureCoding;
-(void)snapshot;
-(long long)operationType;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(double)estimatedTimeRemaining;
-(void)setCurrentValue:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)currentValue;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)setUnits:(long long)arg1 ;
-(long long)units;
-(void)setOperationType:(long long)arg1 ;
-(void)setCanPause:(char)arg1 ;
-(void)resetSnapshots;
-(void)setChangeRate:(double)arg1 ;
-(void)setNormalizedCurrentValue:(double)arg1 ;
-(void)setNormalizedMaxValue:(double)arg1 ;
-(void)_updateStatisticsFromSnapshots;
-(double)normalizedCurrentValue;
-(double)normalizedMaxValue;
-(char)canPause;
-(double)changeRate;
@end

