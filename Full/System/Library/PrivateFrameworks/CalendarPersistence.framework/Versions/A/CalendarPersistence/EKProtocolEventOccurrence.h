/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSDate, NSSet;


@protocol EKProtocolEventOccurrence <EKProtocolOccurrence>
@property (nonatomic,readonly) NSString * lunarCalendarString; 
@property (nonatomic,copy,readonly) NSDate * endDateUnadjustedFromUTC; 
@property (nonatomic,readonly) NSSet * notificationBoxMessageSet; 
@property (nonatomic,copy,readonly) NSString * privacyLevelString; 
@property (nonatomic,copy,readonly) NSString * statusString; 
@property (nonatomic,readonly) int availabilityEnum; 
@property (nonatomic,readonly) double travelDuration; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> ekStructuredLocation; 
@property (nonatomic,copy,readonly) id<EKProtocolStructuredLocation> ekStructuredStartLocation; 
@property (nonatomic,readonly) unsigned long long participantsStatus; 
@property (nonatomic,copy,readonly) NSString * responseComment; 
@property (nonatomic,readonly) char dontSendNotificationForChanges; 
@property (nonatomic,copy,readonly) NSString * sliceParentID; 
@property (nonatomic,copy,readonly) NSString * birthdayTitle; 
@property (nonatomic,readonly) NSString * nameForBirthday; 
@property (nonatomic,readonly) char isYearlessBirthday; 
@property (nonatomic,readonly) char isYearlessLeapMonthBirthday; 
@optional
-(id)masterEventOccurrence;
-(char)isSignificantlyDetached;
-(char)isSignificantlyDetachedIgnoringParticipation;

@required
-(NSString *)statusString;
-(char)isDetached;
-(char)isPhantom;
-(NSDate *)endDateUnadjustedFromUTC;
-(NSString *)nameForBirthday;
-(char)isYearlessBirthday;
-(NSString *)lunarCalendarString;
-(double)travelDuration;
-(NSSet *)notificationBoxMessageSet;
-(NSString *)privacyLevelString;
-(int)availabilityEnum;
-(id<EKProtocolStructuredLocation>)ekStructuredLocation;
-(id<EKProtocolStructuredLocation>)ekStructuredStartLocation;
-(unsigned long long)participantsStatus;
-(NSString *)responseComment;
-(char)dontSendNotificationForChanges;
-(NSString *)sliceParentID;
-(NSString *)birthdayTitle;
-(char)isYearlessLeapMonthBirthday;

@end

