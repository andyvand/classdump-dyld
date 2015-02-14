/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CalendarPersistence/CalendarPersistence-Structs.h>
@class NSString, ABPerson, CALAddress, CalAddressABGroupWrapper, ABAddressBook;

@interface CalAutocompleteAttendee : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _uid;
	char _isOrganizer;
	NSString* _geoURLString;
	ABPerson* _person;
	CALAddress* _calAddress;
	CalAddressABGroupWrapper* _iiABGroupWrapper;
	ABAddressBook* _addressBook;

}

@property (retain) CALAddress * calAddress;                                   //@synthesize calAddress=_calAddress - In the implementation block
@property (retain) NSString * address; 
@property (retain) NSString * emailAddress; 
@property (retain) NSString * commonName; 
@property (assign) int role; 
@property (assign) int userType; 
@property (readonly) int scheduleStatus; 
@property (assign) int participationStatus; 
@property (assign) char scheduleForceSend; 
@property (assign) char isOrganizer;                                          //@synthesize isOrganizer=_isOrganizer - In the implementation block
@property (retain) NSString * firstName;                                      //@synthesize firstName=_firstName - In the implementation block
@property (retain) NSString * lastName;                                       //@synthesize lastName=_lastName - In the implementation block
@property (retain) ABPerson * person; 
@property (retain) CalAddressABGroupWrapper * ABGroupWrapper;                 //@synthesize iiABGroupWrapper=_iiABGroupWrapper - In the implementation block
@property (retain) NSString * geoURLstring;                                   //@synthesize geoURLString=_geoURLString - In the implementation block
@property (readonly) char hasAddress; 
@property (nonatomic,retain) NSString * UID;                                  //@synthesize uid=_uid - In the implementation block
@property (retain,readonly) NSString * description; 
@property (retain,readonly) NSString * commonNameOrAddress; 
@property (retain,readonly) NSString * commonNameOrEmailAddress; 
@property (retain) ABPerson * _person;                                        //@synthesize person=_person - In the implementation block
@property (retain) ABAddressBook * addressBook;                               //@synthesize addressBook=_addressBook - In the implementation block
+(id)recentsSourceIDForAccount:(id)arg1 ;
+(id)completionForSubstring:(id)arg1 displayedName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 address:(id)arg5 isLocation:(char)arg6 ;
+(id)attendeeWithFirstName:(id)arg1 lastName:(id)arg2 commonName:(id)arg3 userType:(int)arg4 address:(id)arg5 emailAddress:(id)arg6 abPerson:(id)arg7 geoURLstring:(id)arg8 ;
+(id)attendeeFromAddress:(id)arg1 ;
+(id)properURLForAddress:(id)arg1 userType:(int)arg2 ;
+(id)descriptionForDisplayedName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address:(id)arg4 ;
+(id)attendeeWithCommonName:(id)arg1 ;
+(id)attendeeFromDictionary:(id)arg1 ;
+(id)attendeeFromABPerson:(id)arg1 ;
-(id)uiLocation;
-(ABAddressBook *)addressBook;
-(int)role;
-(void)dealloc;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)firstName;
-(NSString *)commonName;
-(NSString *)UID;
-(void)setUID:(NSString *)arg1 ;
-(char)rsvp;
-(void)setRSVP:(char)arg1 ;
-(int)participationStatus;
-(void)setParticipationStatus:(int)arg1 ;
-(void)setCommonName:(NSString *)arg1 ;
-(char)scheduleForceSend;
-(void)setScheduleForceSend:(char)arg1 ;
-(void)setUserType:(int)arg1 ;
-(int)userType;
-(int)scheduleStatus;
-(void)setRole:(int)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(char)isOrganizer;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)lastName;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(ABPerson *)person;
-(id)loginName;
-(CALAddress *)calAddress;
-(id)initWithCALAddress:(id)arg1 ;
-(void)setPerson:(ABPerson *)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 commonName:(id)arg3 userType:(int)arg4 address:(id)arg5 emailAddress:(id)arg6 abPerson:(id)arg7 geoURLstring:(id)arg8 ;
-(void)setGeoURLstring:(NSString *)arg1 ;
-(void)markAsCleanAndNew;
-(void)setCalAddress:(CALAddress *)arg1 ;
-(void)setIsOrganizer:(char)arg1 ;
-(CalAddressABGroupWrapper *)ABGroupWrapper;
-(void)setABGroupWrapper:(CalAddressABGroupWrapper *)arg1 ;
-(ABPerson *)_person;
-(void)set_person:(ABPerson *)arg1 ;
-(char)hasAddress;
-(NSString *)commonNameOrAddress;
-(NSString *)commonNameOrEmailAddress;
-(id)newPersonWithAddressBook:(id)arg1 ;
-(id)compoundName;
-(id)representationForMail;
-(NSString *)geoURLstring;
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
@end

