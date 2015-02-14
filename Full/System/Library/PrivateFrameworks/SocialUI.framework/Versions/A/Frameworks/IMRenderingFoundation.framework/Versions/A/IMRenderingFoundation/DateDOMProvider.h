/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/DOMProvider.h>

@class NSMutableArray;

@interface DateDOMProvider : DOMProvider {

	NSMutableArray* _preciseFragments;
	NSMutableArray* _longFragments;
	NSMutableArray* _dateFragments;
	NSMutableArray* _timeFragments;
	NSMutableArray* _timeOrDateFragments;

}

@property (retain) NSMutableArray * preciseFragments;                 //@synthesize preciseFragments=_preciseFragments - In the implementation block
@property (retain) NSMutableArray * longFragments;                    //@synthesize longFragments=_longFragments - In the implementation block
@property (retain) NSMutableArray * dateFragments;                    //@synthesize dateFragments=_dateFragments - In the implementation block
@property (retain) NSMutableArray * timeFragments;                    //@synthesize timeFragments=_timeFragments - In the implementation block
@property (retain) NSMutableArray * timeOrDateFragments;              //@synthesize timeOrDateFragments=_timeOrDateFragments - In the implementation block
+(void)initialize;
-(id)dateStringForDate:(id)arg1 ;
-(id)timeStringForDate:(id)arg1 ;
-(void)clearCache;
-(id)preciseStringForDate:(id)arg1 ;
-(id)parseTime:(id)arg1 changeToDateStampTomorrow:(char)arg2 ;
-(id)parsePreciseDate:(id)arg1 ;
-(id)parseLongDate:(id)arg1 ;
-(void)dateFormatDidChange;
-(id)_formatDate:(id)arg1 withFormatter:(long long)arg2 ;
-(char)_adjustElement:(id)arg1 usingFormatter:(long long)arg2 ;
-(void)_adjustElementsInArray:(id)arg1 withFormat:(long long)arg2 ;
-(void)adjustDateFragmentsForTimeChange;
-(id)_baseDateElementWithString:(id)arg1 timestamp:(double)arg2 ;
-(id)formatDate:(id)arg1 roundInterval:(int)arg2 showDate:(char)arg3 showTime:(char)arg4 showSeconds:(char)arg5 ;
-(id)_genericDateFragmentForDate:(id)arg1 formatter:(long long)arg2 cache:(id)arg3 ;
-(id)longStringForDate:(id)arg1 ;
-(id)parseDate:(id)arg1 ;
-(NSMutableArray *)preciseFragments;
-(void)setPreciseFragments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)longFragments;
-(void)setLongFragments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dateFragments;
-(void)setDateFragments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeFragments;
-(void)setTimeFragments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)timeOrDateFragments;
-(void)setTimeOrDateFragments:(NSMutableArray *)arg1 ;
-(id)initWithController:(id)arg1 ;
@end

