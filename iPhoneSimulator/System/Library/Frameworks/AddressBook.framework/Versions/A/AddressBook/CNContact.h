/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSCopying.h>
#import <AddressBook/NSMutableCopying.h>
#import <AddressBook/NSSecureCoding.h>

@class CNContactIdentifier, NSString, NSDateComponents, NSDate, NSArray, NSDictionary, NSURL;

@interface CNContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	CNContactIdentifier* _identifier;
	NSString* _nameTitle;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _nameSuffix;
	NSString* _maidenName;
	NSString* _nickname;
	NSString* _phoneticFirstName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticLastName;
	NSString* _sortingFirstName;
	NSString* _sortingLastName;
	NSString* _companyName;
	NSString* _departmentName;
	NSString* _jobTitle;
	NSDateComponents* _birthdayComponents;
	NSDateComponents* _alternateBirthdayComponents;
	NSDate* _creationDate;
	NSString* _note;
	NSString* _linkIdentifier;
	char _preferredForName;
	char _preferredForPhoto;
	NSString* _phonemeData;
	long long _displayStyle;
	long long _nameOrder;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;
	NSArray* _urlAddresses;
	NSArray* _otherDateComponents;
	NSArray* _instantMessageAddresses;
	NSArray* _relatedNames;
	NSArray* _socialProfiles;
	NSArray* _postalAddresses;
	NSArray* _calendarURIs;
	NSString* _cardDAVUID;
	NSDictionary* _alertTones;
	CNContact* _snapshot;
	NSArray* _linkedContacts;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSDate * creationDateForMailOnly; 
@property (nonatomic,copy,readonly) NSURL * quicklookURL; 
@property (nonatomic,copy,readonly) CNContactIdentifier * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameTitle;                                        //@synthesize nameTitle=_nameTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleName;                                       //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * nameSuffix;                                       //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * maidenName;                                       //@synthesize maidenName=_maidenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;                                         //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFirstName;                                //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName;                               //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticLastName;                                 //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * companyName;                                      //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * departmentName;                                   //@synthesize departmentName=_departmentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;                                         //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * birthdayComponents;                       //@synthesize birthdayComponents=_birthdayComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * alternateBirthdayComponents;              //@synthesize alternateBirthdayComponents=_alternateBirthdayComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDate * birthday; 
@property (nonatomic,copy,readonly) NSString * note;                                             //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) long long displayStyle;                                           //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) long long nameOrder;                                              //@synthesize nameOrder=_nameOrder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * phoneNumbers;                                      //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emailAddresses;                                    //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * urlAddresses;                                      //@synthesize urlAddresses=_urlAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherDateComponents;                               //@synthesize otherDateComponents=_otherDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherDates; 
@property (nonatomic,copy,readonly) NSArray * instantMessageAddresses;                           //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSArray * relatedNames;                                      //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * socialProfiles;                                    //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postalAddresses;                                   //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkIdentifier;                                   //@synthesize linkIdentifier=_linkIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * phonemeData;                                      //@synthesize phonemeData=_phonemeData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ringtone; 
@property (nonatomic,copy,readonly) NSDictionary * texttone; 
@property (nonatomic,copy,readonly) NSDictionary * alertTones;                                   //@synthesize alertTones=_alertTones - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * phoneticFullName; 
@property (nonatomic,copy,readonly) NSString * sortingFirstName;                                 //@synthesize sortingFirstName=_sortingFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortingLastName;                                  //@synthesize sortingLastName=_sortingLastName - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                                       //@synthesize creationDate=_creationDate - In the implementation block
@property (getter=isPreferredForName,nonatomic,readonly) char preferredForName;                  //@synthesize preferredForName=_preferredForName - In the implementation block
@property (getter=isPreferredForPhoto,nonatomic,readonly) char preferredForPhoto;                //@synthesize preferredForPhoto=_preferredForPhoto - In the implementation block
@property (nonatomic,copy,readonly) NSArray * calendarURIs;                                      //@synthesize calendarURIs=_calendarURIs - In the implementation block
@property (nonatomic,copy,readonly) CNContact * snapshot; 
@property (nonatomic,copy,readonly) NSArray * linkedContacts;                                    //@synthesize linkedContacts=_linkedContacts - In the implementation block
@property (getter=isUnified,nonatomic,readonly) char unified; 
@property (nonatomic,copy,readonly) NSString * identifierString; 
@property (nonatomic,copy,readonly) NSString * cardDAVUID;                                       //@synthesize cardDAVUID=_cardDAVUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                                //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(id)unifyContacts:(id)arg1 ;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)contactWithIdentifier:(id)arg1 ;
+(id)contactWithIdentifierString:(id)arg1 ;
+(/*^block*/id)preferredPhotoComparator;
+(id)predicateForIdentifiers:(id)arg1 ;
+(id)predicateForMembersOfGroupWithIdentifier:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)contact;
-(CNContact *)snapshot;
-(NSString *)phonemeData;
-(NSDictionary *)ringtone;
-(NSDictionary *)texttone;
-(char)isPreferredForName;
-(char)isPreferredForPhoto;
-(NSString *)sortingFirstName;
-(NSString *)sortingLastName;
-(NSDate *)creationDateForMailOnly;
-(long long)displayStyle;
-(NSString *)companyName;
-(char)isUnified;
-(NSString *)departmentName;
-(NSString *)linkIdentifier;
-(long long)nameOrder;
-(NSString *)accountIdentifier;
-(id)initWithContact:(id)arg1 ;
-(NSDateComponents *)birthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)linkedContacts;
-(NSDictionary *)alertTones;
-(char)areAllPropertiesEqualToContact:(id)arg1 ;
-(char)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2 ;
-(char)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1 ;
-(NSString *)identifierString;
-(id)copyWithSelfAsSnapshot;
-(NSString *)phoneticFullName;
-(NSDate *)birthday;
-(NSArray *)otherDates;
-(id)diffToSnapshot;
-(char)isEqualIgnoringIdentifiers:(id)arg1 ;
-(id)linkedIdentifierMap;
-(NSString *)nameTitle;
-(NSString *)nameSuffix;
-(NSString *)maidenName;
-(NSString *)nickname;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticMiddleName;
-(NSString *)phoneticLastName;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)urlAddresses;
-(NSArray *)instantMessageAddresses;
-(NSArray *)relatedNames;
-(NSArray *)socialProfiles;
-(NSArray *)postalAddresses;
-(NSArray *)calendarURIs;
-(NSString *)cardDAVUID;
-(NSString *)middleName;
-(NSArray *)phoneNumbers;
-(NSURL *)quicklookURL;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CNContactIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)firstName;
-(NSDate *)creationDate;
-(char)hasChanges;
-(NSString *)jobTitle;
-(NSString *)note;
-(NSArray *)emailAddresses;
-(NSString *)fullName;
-(NSString *)lastName;
@end

