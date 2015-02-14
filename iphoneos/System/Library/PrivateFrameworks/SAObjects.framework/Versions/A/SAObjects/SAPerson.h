/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSString, NSNumber;

@interface SAPerson : SADomainObject

@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * firstNamePhonetic; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * lastNamePhonetic; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * nickName; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSArray * phones; 
@property (nonatomic,copy) NSString * prefix; 
@property (nonatomic,copy) NSArray * relatedNames; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSString * suffix; 
+(id)personWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)person;
-(NSArray *)phones;
-(NSArray *)emails;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(NSNumber *)me;
-(NSString *)prefix;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(NSDate *)birthday;
-(NSArray *)relatedNames;
-(NSArray *)socialProfiles;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(NSString *)suffix;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setEmails:(NSArray *)arg1 ;
-(NSString *)middleName;
-(void)setMe:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)firstNamePhonetic;
-(void)setFirstNamePhonetic:(NSString *)arg1 ;
-(NSString *)lastNamePhonetic;
-(void)setLastNamePhonetic:(NSString *)arg1 ;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(NSString *)firstName;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSArray *)addresses;
@end

