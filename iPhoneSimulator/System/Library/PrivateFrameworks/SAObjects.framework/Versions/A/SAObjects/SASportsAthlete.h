/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:24 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASportsEntity.h>

@class SASportsTeam, NSArray, NSString, NSNumber;

@interface SASportsAthlete : SASportsEntity

@property (nonatomic,retain) SASportsTeam * activeTeam; 
@property (nonatomic,copy) NSArray * athleteMetadata; 
@property (nonatomic,copy) NSArray * careerStatistics; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSArray * formattedMetadata; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSNumber * injured; 
@property (nonatomic,copy) NSArray * lastGameStatistics; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * position; 
@property (nonatomic,copy) NSArray * previousTeams; 
@property (nonatomic,copy) NSArray * statistics; 
+(id)athlete;
+(id)athleteWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)statistics;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(SASportsTeam *)activeTeam;
-(void)setActiveTeam:(SASportsTeam *)arg1 ;
-(NSArray *)athleteMetadata;
-(void)setAthleteMetadata:(NSArray *)arg1 ;
-(NSArray *)careerStatistics;
-(void)setCareerStatistics:(NSArray *)arg1 ;
-(NSArray *)formattedMetadata;
-(void)setFormattedMetadata:(NSArray *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(NSNumber *)injured;
-(void)setInjured:(NSNumber *)arg1 ;
-(NSArray *)lastGameStatistics;
-(void)setLastGameStatistics:(NSArray *)arg1 ;
-(NSArray *)previousTeams;
-(void)setPreviousTeams:(NSArray *)arg1 ;
-(void)setStatistics:(NSArray *)arg1 ;
-(void)setPosition:(NSString *)arg1 ;
-(NSString *)position;
-(NSString *)firstName;
-(id)groupIdentifier;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
@end

