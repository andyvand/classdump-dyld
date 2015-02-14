/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {

	struct {
		unsigned _evaluationBlocked : 1;
		unsigned _reservedPredicateFlags : 31;
	}  _predicateFlags;
	unsigned reserved;

}

@property (copy,readonly) NSString * predicateFormat; 
+(id)calendarItemPredicateWithLocalUID:(id)arg1 calendar:(id)arg2 ;
+(id)eventPredicateWithAttendee:(char)arg1 calendars:(id)arg2 ;
+(id)eventPredicateWithCalendars:(id)arg1 ;
+(id)taskPredicateWithCalendars:(id)arg1 ;
+(id)calendarItemPredicateWithSharedUIDs:(id)arg1 calendars:(id)arg2 ;
+(id)calendarItemPredicateWithSharedUIDs:(id)arg1 calendar:(id)arg2 ;
+(id)calendarItemPredicateWithSharedUID:(id)arg1 calendar:(id)arg2 ;
+(id)calendarItemPredicateWithFilenames:(id)arg1 calendar:(id)arg2 ;
+(id)alarmPredicateWithCalendars:(id)arg1 ;
+(id)nodePredicateWithUID:(id)arg1 ;
+(id)calendarItemPredicateWithLocalUIDs:(id)arg1 ;
+(id)calendarItemPredicateWithObjectIDs:(id)arg1 ;
+(id)calendarItemPredicateWithLocalUID:(id)arg1 ;
+(id)calendarItemPredicateWithSharedUIDs:(id)arg1 ;
+(id)calendarItemPredicateWithSharedUID:(id)arg1 ;
+(id)eventPredicateWithLocalUID:(id)arg1 occurrence:(id)arg2 ;
+(id)eventPredicateWithSharedUIDs:(id)arg1 ;
+(id)eventPredicateWithSharedUID:(id)arg1 occurrence:(id)arg2 ;
+(id)eventPredicateWithSharedUID:(id)arg1 occurrences:(id)arg2 ;
+(id)eventPredicateWithAlarm:(char)arg1 calendars:(id)arg2 ;
+(id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
+(id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 sharedUID:(id)arg3 calendars:(id)arg4 ;
+(id)eventPredicateWithSearchTerm:(id)arg1 property:(id)arg2 calendars:(id)arg3 ;
+(id)eventPredicateWithURL:(id)arg1 calendar:(id)arg2 ;
+(id)taskPredicateWithAlarm:(char)arg1 calendars:(id)arg2 ;
+(id)taskPredicateWithSearchTerm:(id)arg1 property:(id)arg2 calendars:(id)arg3 ;
+(id)calendarPredicateWithGroups:(id)arg1 ;
+(id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)eventPredicateWithStartDate:(id)arg1 endDate:(id)arg2 sharedUID:(id)arg3 ;
+(id)predicateWithBlock:(/*^block*/id)arg1 ;
+(CFLocaleRef)retainedLocale;
+(id)predicateWithFormat:(id)arg1 arguments:(_va_list_tag*)arg2 ;
+(id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2 ;
+(id)predicateFromMetadataQueryString:(id)arg1 ;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)predicateWithFormat:(id)arg1 ;
+(id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2 ;
+(id)predicateWithValue:(char)arg1 ;
-(id)predicateByAlsoMatchingNilValueForLeftExpression:(id)arg1 modifier:(unsigned long long)arg2 ;
-(id)br_watchedURL;
-(void)validate;
-(id)minimalFormInContext:(id)arg1 ;
-(void)allowEvaluation;
-(char)_allowsEvaluation;
-(NSString *)predicateFormat;
-(char)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(void)_validateForMetadataQueryScopes:(id)arg1 ;
-(id)generateMetadataDescription;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)evaluateWithObject:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
@end

