/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Mail/Mail-Structs.h>
@class NSMutableDictionary, NSCalendar, NSDate;

@interface MFUsageCounter : NSObject {

	NSMutableDictionary* _counts;
	char _isDirty;
	NSCalendar* _gregorianCalendar;
	NSDate* _referenceDate;

}

@property (nonatomic,readonly) NSCalendar * gregorianCalendar;              //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (nonatomic,readonly) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
+(char)gatherJunkMailUsageCounts;
+(void)setGatherJunkMailUsageCounts:(char)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(unsigned long long)countForKey:(id)arg1 includeToday:(char)arg2 ;
-(void)removeCountForKey:(id)arg1 ;
-(void)incrementCountForKey:(id)arg1 ;
-(void)incrementCountForKey:(id)arg1 byCount:(unsigned long long)arg2 ;
-(id)_dictionaryForKey:(id)arg1 createIfNeeded:(char)arg2 ;
-(NSCalendar *)gregorianCalendar;
-(long long)numberOfDaysAvailableForKey:(id)arg1 ;
-(unsigned long long)countForKey:(id)arg1 ;
-(NSDate *)referenceDate;
-(id)init;
-(void)dealloc;
-(void)saveDefaults;
@end

