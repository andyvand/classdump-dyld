/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/Versions/A/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/NSCoding.h>
#import <iCalendar/ICSWriting.h>

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting> {

	int _freq;
	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic) int freq; 
@property (nonatomic,retain) ICSDateValue * until; 
@property (assign,nonatomic) NSNumber * count; 
@property (assign,nonatomic) NSNumber * interval; 
@property (nonatomic,retain) NSArray * bysecond; 
@property (nonatomic,retain) NSArray * byminute; 
@property (nonatomic,retain) NSArray * byhour; 
@property (nonatomic,retain) NSArray * byday; 
@property (nonatomic,retain) NSArray * bymonthday; 
@property (nonatomic,retain) NSArray * byyearday; 
@property (nonatomic,retain) NSArray * byweekno; 
@property (nonatomic,retain) NSArray * bymonth; 
@property (nonatomic,retain) NSArray * bysetpos; 
@property (assign,nonatomic) NSNumber * wkst; 
+(id)recurrenceRuleFromICSCString:(const char*)arg1 withTokenizer:(id)arg2 ;
+(id)recurrenceRuleFromICSString:(id)arg1 ;
-(void)setInterval:(NSNumber *)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(char)shouldObscureValue;
-(void)setBymonth:(NSArray *)arg1 ;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setBymonthday:(NSArray *)arg1 ;
-(void)cleanUpForStartDate:(id)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4 ;
-(void)setFreq:(int)arg1 ;
-(void)setBysecond:(NSArray *)arg1 ;
-(void)setByminute:(NSArray *)arg1 ;
-(void)setByhour:(NSArray *)arg1 ;
-(void)setByyearday:(NSArray *)arg1 ;
-(void)setByweekno:(NSArray *)arg1 ;
-(void)setBysetpos:(NSArray *)arg1 ;
-(void)setWkst:(NSNumber *)arg1 ;
-(void)dealloc;
-(NSNumber *)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)interval;
-(void)setCount:(NSNumber *)arg1 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(id)parameterValueForName:(id)arg1 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(int)freq;
-(ICSDateValue *)until;
-(NSArray *)bysecond;
-(NSArray *)byminute;
-(NSArray *)byhour;
-(NSArray *)byday;
-(NSArray *)bymonthday;
-(NSArray *)byyearday;
-(NSArray *)byweekno;
-(NSArray *)bymonth;
-(NSArray *)bysetpos;
-(NSNumber *)wkst;
-(void)setUntil:(ICSDateValue *)arg1 ;
-(void)setByday:(NSArray *)arg1 ;
-(id)initWithFrequency:(int)arg1 ;
@end

