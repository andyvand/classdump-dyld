/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSTimeChangeType, NSString;

@interface EWSTimeZoneType : NSObject {

	double _BaseOffset;
	char _IsBaseOffsetSpecified;
	EWSTimeChangeType* _Standard;
	EWSTimeChangeType* _Daylight;
	NSString* _TimeZoneName;

}

@property (assign,nonatomic) double BaseOffset;                                        //@synthesize BaseOffset=_BaseOffset - In the implementation block
@property (assign,nonatomic) char IsBaseOffsetSpecified;                               //@synthesize IsBaseOffsetSpecified=_IsBaseOffsetSpecified - In the implementation block
@property (setter=tandard,nonatomic,retain) EWSTimeChangeType * Standard;              //@synthesize Standard=_Standard - In the implementation block
@property (nonatomic,retain) EWSTimeChangeType * Daylight;                             //@synthesize Daylight=_Daylight - In the implementation block
@property (nonatomic,copy) NSString * TimeZoneName;                                    //@synthesize TimeZoneName=_TimeZoneName - In the implementation block
+(id)StandardTimeZoneNameForWindowsTimeZoneName:(id)arg1 ;
+(id)StandardTimeZoneNameForEntourageTimeZoneName:(id)arg1 ;
+(id)WindowsTimeZoneNameForStandardTimeZoneName:(id)arg1 ;
+(id)definition;
-(double)BaseOffset;
-(void)setBaseOffset:(double)arg1 ;
-(char)IsBaseOffsetSpecified;
-(void)setIsBaseOffsetSpecified:(char)arg1 ;
-(EWSTimeChangeType *)Standard;
-(void)setStandard:(EWSTimeChangeType *)arg1 ;
-(EWSTimeChangeType *)Daylight;
-(void)setDaylight:(EWSTimeChangeType *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithStandardTimeZoneName:(id)arg1 ;
-(NSString *)TimeZoneName;
-(id)StandardTimeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
@end

