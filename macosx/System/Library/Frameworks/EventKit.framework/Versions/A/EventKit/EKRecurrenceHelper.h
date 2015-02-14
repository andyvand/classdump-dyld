/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {

	NSString* _specifier;
	char _dirty;
	char _parsed;
	NSArray* _daysOfTheWeek;
	NSArray* _daysOfTheMonth;
	NSArray* _daysOfTheYear;
	NSArray* _weeksOfTheYear;
	NSArray* _monthsOfTheYear;
	NSArray* _setPositions;

}

@property (nonatomic,readonly) char isDirty; 
@property (nonatomic,copy) NSString * specifier; 
@property (nonatomic,copy) NSArray * daysOfTheWeek; 
@property (nonatomic,copy) NSArray * daysOfTheMonth; 
@property (nonatomic,copy) NSArray * daysOfTheYear; 
@property (nonatomic,copy) NSArray * weeksOfTheYear; 
@property (nonatomic,copy) NSArray * monthsOfTheYear; 
@property (nonatomic,copy) NSArray * setPositions; 
-(NSArray *)daysOfTheYear;
-(NSArray *)weeksOfTheYear;
-(void)_updateSpecifier;
-(void)_clearArrays;
-(void)_parseSpecifierIfNeeded;
-(void)_appendDaysOfTheWeek:(id)arg1 toSpecifier:(id)arg2 ;
-(void)_appendIndexList:(id)arg1 toSpecifier:(id)arg2 propertyKey:(unsigned short)arg3 ;
-(id)_parseDaysOfWeek:(SCD_Struct_EK2*)arg1 range:(SCD_Struct_EK1)arg2 ;
-(id)_parseIndexList:(SCD_Struct_EK2*)arg1 range:(SCD_Struct_EK1)arg2 ;
-(void)setSpecifier:(NSString *)arg1 ;
-(void)setDaysOfTheWeek:(NSArray *)arg1 ;
-(void)setDaysOfTheMonth:(NSArray *)arg1 ;
-(void)setDaysOfTheYear:(NSArray *)arg1 ;
-(void)setWeeksOfTheYear:(NSArray *)arg1 ;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(void)setSetPositions:(NSArray *)arg1 ;
-(void)revert;
-(NSArray *)daysOfTheWeek;
-(NSArray *)daysOfTheMonth;
-(NSArray *)monthsOfTheYear;
-(NSArray *)setPositions;
-(char)isDirty;
-(char)isEqual:(id)arg1 ;
-(NSString *)specifier;
-(id)initWithSpecifier:(id)arg1 ;
@end

