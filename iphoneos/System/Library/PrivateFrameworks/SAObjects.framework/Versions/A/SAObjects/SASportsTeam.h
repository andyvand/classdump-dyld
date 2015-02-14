/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class NSString, NSArray, NSNumber;

@interface SASportsTeam : SASportsEntity

@property (nonatomic,copy) NSString * abbreviatedName; 
@property (nonatomic,copy) NSArray * athletes; 
@property (nonatomic,copy) NSString * awayLosses; 
@property (nonatomic,copy) NSString * awayWins; 
@property (nonatomic,copy) NSNumber * clinchedQualificationPosition; 
@property (nonatomic,copy) NSNumber * conferencePosition; 
@property (nonatomic,copy) NSString * gamesBehind; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSNumber * groupPosition; 
@property (nonatomic,copy) NSString * groupPositionDescription; 
@property (nonatomic,copy) NSString * homeLosses; 
@property (nonatomic,copy) NSString * homeWins; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * losses; 
@property (nonatomic,copy) NSArray * news; 
@property (nonatomic,copy) NSString * overtimeLosses; 
@property (nonatomic,copy) NSString * points; 
@property (nonatomic,copy) NSString * pointsAgainst; 
@property (nonatomic,copy) NSString * pointsFor; 
@property (nonatomic,copy) NSNumber * primaryColor; 
@property (nonatomic,copy) NSString * qualificationPosition; 
@property (nonatomic,copy) NSArray * rankings; 
@property (nonatomic,copy) NSNumber * secondaryColor; 
@property (nonatomic,copy) NSArray * statistics; 
@property (nonatomic,copy) NSString * streakNumber; 
@property (nonatomic,copy) NSString * streakType; 
@property (nonatomic,copy) NSString * ties; 
@property (nonatomic,copy) NSString * venueLocation; 
@property (nonatomic,copy) NSString * venueName; 
@property (nonatomic,copy) NSString * winPercentage; 
@property (nonatomic,copy) NSString * wins; 
+(id)team;
+(id)teamWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)statistics;
-(NSString *)groupName;
-(NSNumber *)secondaryColor;
-(NSString *)points;
-(void)setSecondaryColor:(NSNumber *)arg1 ;
-(NSString *)abbreviatedName;
-(void)setPoints:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)news;
-(void)setStatistics:(NSArray *)arg1 ;
-(NSArray *)athletes;
-(void)setAthletes:(NSArray *)arg1 ;
-(void)setAbbreviatedName:(NSString *)arg1 ;
-(NSString *)awayLosses;
-(void)setAwayLosses:(NSString *)arg1 ;
-(NSString *)awayWins;
-(void)setAwayWins:(NSString *)arg1 ;
-(NSNumber *)clinchedQualificationPosition;
-(void)setClinchedQualificationPosition:(NSNumber *)arg1 ;
-(NSNumber *)conferencePosition;
-(void)setConferencePosition:(NSNumber *)arg1 ;
-(NSString *)gamesBehind;
-(void)setGamesBehind:(NSString *)arg1 ;
-(NSNumber *)groupPosition;
-(void)setGroupPosition:(NSNumber *)arg1 ;
-(NSString *)groupPositionDescription;
-(void)setGroupPositionDescription:(NSString *)arg1 ;
-(NSString *)homeLosses;
-(void)setHomeLosses:(NSString *)arg1 ;
-(NSString *)homeWins;
-(void)setHomeWins:(NSString *)arg1 ;
-(NSString *)losses;
-(void)setLosses:(NSString *)arg1 ;
-(void)setNews:(NSArray *)arg1 ;
-(NSString *)overtimeLosses;
-(void)setOvertimeLosses:(NSString *)arg1 ;
-(NSString *)pointsAgainst;
-(void)setPointsAgainst:(NSString *)arg1 ;
-(NSString *)pointsFor;
-(void)setPointsFor:(NSString *)arg1 ;
-(NSNumber *)primaryColor;
-(void)setPrimaryColor:(NSNumber *)arg1 ;
-(NSString *)qualificationPosition;
-(void)setQualificationPosition:(NSString *)arg1 ;
-(NSArray *)rankings;
-(void)setRankings:(NSArray *)arg1 ;
-(NSString *)streakNumber;
-(void)setStreakNumber:(NSString *)arg1 ;
-(NSString *)streakType;
-(void)setStreakType:(NSString *)arg1 ;
-(NSString *)ties;
-(void)setTies:(NSString *)arg1 ;
-(NSString *)venueLocation;
-(void)setVenueLocation:(NSString *)arg1 ;
-(NSString *)venueName;
-(void)setVenueName:(NSString *)arg1 ;
-(NSString *)winPercentage;
-(void)setWinPercentage:(NSString *)arg1 ;
-(NSString *)wins;
-(void)setWins:(NSString *)arg1 ;
-(NSString *)location;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

