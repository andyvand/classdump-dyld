/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNVCardPerson.h>

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents, ABPerson;

@interface ABPersonvCardAdapter : NSObject <CNVCardPerson> {

	ABPerson* _person;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) char isCompany; 
@property (readonly) NSString * nickname; 
@property (readonly) NSString * maidenName; 
@property (readonly) NSString * phoneticFirstName; 
@property (readonly) NSString * phoneticMiddleName; 
@property (readonly) NSString * phoneticLastName; 
@property (readonly) NSString * organization; 
@property (readonly) NSString * department; 
@property (readonly) NSString * jobTitle; 
@property (readonly) char isMe; 
@property (readonly) int nameOrder; 
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
@property (readonly) NSArray * postalAddresses; 
@property (readonly) NSArray * socialProfiles; 
@property (readonly) NSArray * instantMessagingAddresses; 
@property (readonly) NSArray * urls; 
@property (readonly) NSArray * calendarURIs; 
@property (readonly) NSDictionary * activityAlerts; 
@property (readonly) NSArray * imageReferences; 
@property (readonly) NSDictionary * imageCropRects; 
@property (readonly) NSDictionary * largeImageCropRects; 
@property (readonly) NSData * largeImageData; 
@property (readonly) NSData * imageData; 
@property (readonly) NSDateComponents * birthdayComponents; 
@property (readonly) NSDateComponents * alternateBirthdayComponents; 
@property (readonly) NSArray * otherDateComponents; 
@property (readonly) NSArray * relatedNames; 
@property (readonly) NSString * note; 
@property (readonly) NSArray * namesOfParentGroups; 
@property (readonly) NSString * cardDAVUID; 
@property (readonly) NSString * uid; 
@property (readonly) NSString * phonemeData; 
@property (readonly) NSArray * unknownProperties; 
+(id)adapterWithPerson:(id)arg1 ;
-(NSData *)largeImageData;
-(id)largeImageHashOfType:(id)arg1 ;
-(NSArray *)imageReferences;
-(NSString *)phonemeData;
-(NSString *)organization;
-(char)isCompany;
-(NSString *)companyName;
-(int)nameOrder;
-(NSDateComponents *)birthdayComponents;
-(NSArray *)otherDateComponents;
-(NSString *)maidenName;
-(NSString *)nickname;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticMiddleName;
-(NSString *)phoneticLastName;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)relatedNames;
-(NSArray *)socialProfiles;
-(NSArray *)postalAddresses;
-(NSArray *)calendarURIs;
-(NSString *)cardDAVUID;
-(id)initWithPerson:(id)arg1 ;
-(id)vCardPropertyItemsForProperty:(id)arg1 ;
-(id)jpegImageDataOfAllowableKinds:(id)arg1 maximumLength:(unsigned long long)arg2 cropRects:(id*)arg3 ;
-(NSString *)suffix;
-(NSString *)department;
-(NSArray *)instantMessagingAddresses;
-(NSDictionary *)activityAlerts;
-(NSDictionary *)imageCropRects;
-(NSDictionary *)largeImageCropRects;
-(NSArray *)namesOfParentGroups;
-(NSArray *)unknownProperties;
-(NSString *)middleName;
-(NSArray *)phoneNumbers;
-(char)isMe;
-(void)dealloc;
-(NSString *)title;
-(NSString *)firstName;
-(NSArray *)urls;
-(NSString *)jobTitle;
-(NSString *)note;
-(NSString *)uid;
-(NSArray *)emailAddresses;
-(NSString *)lastName;
-(NSData *)imageData;
@end

