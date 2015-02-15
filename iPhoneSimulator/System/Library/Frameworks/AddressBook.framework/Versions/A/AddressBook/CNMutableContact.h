/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/CNContact.h>

@class NSString, NSDateComponents, NSArray, NSDictionary, NSDate, CNContact;

@interface CNMutableContact : CNContact

@property (nonatomic,copy) NSString * nameTitle; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * nameSuffix; 
@property (nonatomic,copy) NSString * maidenName; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * phoneticFirstName; 
@property (nonatomic,copy) NSString * phoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticLastName; 
@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * departmentName; 
@property (nonatomic,copy) NSString * jobTitle; 
@property (nonatomic,copy) NSDateComponents * birthdayComponents; 
@property (nonatomic,copy) NSDateComponents * alternateBirthdayComponents; 
@property (nonatomic,copy) NSString * note; 
@property (assign,nonatomic) long long displayStyle; 
@property (assign,nonatomic) long long nameOrder; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * urlAddresses; 
@property (nonatomic,copy) NSArray * otherDateComponents; 
@property (nonatomic,copy) NSArray * instantMessageAddresses; 
@property (nonatomic,copy) NSArray * relatedNames; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSArray * postalAddresses; 
@property (nonatomic,copy) NSString * linkIdentifier; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSDictionary * alertTones; 
@property (nonatomic,copy) NSString * sortingFirstName; 
@property (nonatomic,copy) NSString * sortingLastName; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (assign,getter=isPreferredForName,nonatomic) char preferredForName; 
@property (assign,getter=isPreferredForPhoto,nonatomic) char preferredForPhoto; 
@property (nonatomic,copy) NSArray * calendarURIs; 
@property (nonatomic,copy) NSString * cardDAVUID; 
@property (nonatomic,copy) NSString * accountIdentifier; 
@property (nonatomic,copy) CNContact * snapshot; 
@property (nonatomic,copy) NSArray * linkedContacts; 
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setRingtone:(id)arg1 ;
-(void)setTexttone:(id)arg1 ;
-(void)setDisplayStyle:(long long)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(id)copyWithSelfAsSnapshot;
-(void)setTone:(id)arg1 forAlert:(id)arg2 ;
-(void)setAlertTones:(NSDictionary *)arg1 ;
-(void)setNameTitle:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setMaidenName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setSortingFirstName:(NSString *)arg1 ;
-(void)setSortingLastName:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setDepartmentName:(NSString *)arg1 ;
-(void)setBirthdayComponents:(NSDateComponents *)arg1 ;
-(void)setAlternateBirthdayComponents:(NSDateComponents *)arg1 ;
-(void)setNote:(NSString *)arg1 ;
-(void)setLinkIdentifier:(NSString *)arg1 ;
-(void)setPreferredForName:(char)arg1 ;
-(void)setPreferredForPhoto:(char)arg1 ;
-(void)setNameOrder:(long long)arg1 ;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(void)setUrlAddresses:(NSArray *)arg1 ;
-(void)setOtherDateComponents:(NSArray *)arg1 ;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(id)freeze;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(void)setSnapshot:(CNContact *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
@end

