/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FCLimitItem : NSObject {

	NSMutableDictionary* _dictionary;

}
+(id)limitItemWithDictionary:(id)arg1 ;
+(id)allLimitsForUser:(id)arg1 ;
+(id)limitItemWithLimitItem:(id)arg1 ;
+(id)limitItemWithBundleID:(id)arg1 ;
+(id)limitItemWithURL:(id)arg1 ;
+(id)computerLimit;
+(id)limitWithID:(id)arg1 forUser:(id)arg2 ;
+(id)computerLimitForUser:(id)arg1 ;
+(id)computerLimitFromArray:(id)arg1 ;
-(void)setItemType:(id)arg1 ;
-(id)bundleID;
-(id)weekdayAllowance;
-(id)weekendAllowance;
-(id)curfews;
-(void)setAllowancesActive:(char)arg1 ;
-(char)isComputer;
-(char)isProgram;
-(id)allowances;
-(char)hasActiveSchedule;
-(id)scheduleDescription;
-(void)setAllowances:(id)arg1 ;
-(char)allowancesActive;
-(char)isWebSite;
-(void)setWeekdayAllowanceSeconds:(int)arg1 ;
-(void)setWeekendAllowanceSeconds:(int)arg1 ;
-(void)removeWeekdayAllowance;
-(void)removeWeekendAllowance;
-(void)setCurfews:(id)arg1 ;
-(int)timeLastUpdated;
-(void)setTimeLastUpdated:(int)arg1 ;
-(id)_dictionary;
-(char)enabled;
-(id)plistRepresentation;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)path;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setEnabled:(char)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)uniqueID;
-(id)itemType;
-(id)briefDescription;
-(void)setBundleID:(id)arg1 ;
@end

