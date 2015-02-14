/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCardViewDataSource.h>
#import <AddressBook/ABCardViewDataSourceProvider.h>

@protocol ABCommand;
@class CNContactStore, CNContact, ABAddressBook, NSArray, ABCardView, ABCardViewPersonMapper, CNWeakReference, AKCardViewFaceTimeAvailabilityWatcher, AKCardViewImageDataSource, NSDictionary, NSString, NSMutableArray, NSMutableSet;

@interface AKCardViewDataSource : NSObject <ABCardViewDataSource, ABCardViewDataSourceProvider> {

	CNContactStore* _addressBook;
	CNContact* _person;
	CNContact* _updatedPerson;
	ABAddressBook* _abAddressBook;
	NSArray* _meIdentifiers;
	char _transient;
	ABCardView* _cardView;
	ABCardViewPersonMapper* _personMapper;
	CNWeakReference* _weakDelegate;
	AKCardViewFaceTimeAvailabilityWatcher* _faceTimeWatcher;
	id<ABCommand> _updatedImageCommand;
	AKCardViewImageDataSource* _imageDataSource;
	NSDictionary* _birthdayValuesByUID;
	NSDictionary* _alternateBirthdayValuesByUID;
	NSDictionary* _maidenNamesByUID;
	NSDictionary* _notesByUID;
	NSString* _preferredForPhotoUID;
	NSString* _preferredForNameUID;
	char _hasSingleValuePropertyChanges;
	NSMutableArray* _unlinkedPeople;
	NSString* _linkIdentifier;
	NSMutableSet* _editedPropertyKeys;
	NSMutableSet* _manuallyAddedPropertyKeys;
	char _availableForFaceTime;

}

@property (copy) NSArray * alternateImageIDs; 
@property (copy) NSString * alternateImagePath; 
@property (readonly) ABAddressBook * legacyAddressBook;                           //@synthesize abAddressBook=_abAddressBook - In the implementation block
@property (readonly) AKCardViewImageDataSource * imageDataSource;                 //@synthesize imageDataSource=_imageDataSource - In the implementation block
@property (__weak) id<ABCardViewDataSourceDelegate> delegate; 
@property (getter=isAvailableForFaceTime) char availableForFaceTime; 
@property (copy) CNContact * person;                                              //@synthesize person=_person - In the implementation block
@property (copy) CNContact * updatedPerson;                                       //@synthesize updatedPerson=_updatedPerson - In the implementation block
@property (retain) id<ABCommand> updatedImageCommand;                             //@synthesize updatedImageCommand=_updatedImageCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isTransient) char transient; 
+(id)trueMultiValueKeys;
+(id)allMultiValueKeys;
-(void)unlinkPerson:(id)arg1 ;
-(id)ringtone;
-(void)setRingtone:(id)arg1 ;
-(id)texttone;
-(void)setTexttone:(id)arg1 ;
-(id)updatedPeople;
-(id)completeName;
-(id)uniqueIdentifiers;
-(unsigned long long)displayStyle;
-(id)companyName;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(id)localLargePhotoFuture;
-(id)linkedLocalPhotoFuturesByIdentifier;
-(void)setAlternateImageIDs:(NSArray *)arg1 ;
-(NSArray *)alternateImageIDs;
-(void)setAlternateImagePath:(NSString *)arg1 ;
-(NSString *)alternateImagePath;
-(id)accountTypeForImageIdentifier:(id)arg1 ;
-(char)allowsPhotoEditing;
-(char)keyAvailable:(id)arg1 ;
-(void)manuallyAddPropertyKey:(id)arg1 ;
-(id)multiValueKeys;
-(void)setPersonWithIdentifierPreferredForPhoto:(id)arg1 ;
-(void)markAsViewed:(id)arg1 ;
-(char)isDirectoryResult;
-(char)isUnified;
-(ABAddressBook *)legacyAddressBook;
-(id)departmentName;
-(char)hasKeyBeenManuallyAdded:(id)arg1 ;
-(char)shouldUseUnifiedPlaceholderForKey:(id)arg1 ;
-(char)shouldOfferPhoneticName;
-(id)nameKeys;
-(id)phoneticNameKeys;
-(id)localThumbnailPhotoFuture;
-(id)initials;
-(id)remotePhotoFuture;
-(id)nameOrder;
-(void)setAvailableForFaceTime:(char)arg1 ;
-(id)birthdayComponents;
-(id)otherDateComponents;
-(id)nameTitle;
-(id)nameSuffix;
-(id)maidenName;
-(id)nickname;
-(id)phoneticFirstName;
-(id)phoneticMiddleName;
-(id)phoneticLastName;
-(id)alternateBirthdayComponents;
-(id)urlAddresses;
-(id)instantMessageAddresses;
-(id)relatedNames;
-(id)socialProfiles;
-(id)postalAddresses;
-(void)setNameTitle:(id)arg1 ;
-(void)setMiddleName:(id)arg1 ;
-(void)setNameSuffix:(id)arg1 ;
-(void)setMaidenName:(id)arg1 ;
-(void)setNickname:(id)arg1 ;
-(void)setPhoneticFirstName:(id)arg1 ;
-(void)setPhoneticMiddleName:(id)arg1 ;
-(void)setPhoneticLastName:(id)arg1 ;
-(void)setCompanyName:(id)arg1 ;
-(void)setDepartmentName:(id)arg1 ;
-(void)setBirthdayComponents:(id)arg1 ;
-(void)setAlternateBirthdayComponents:(id)arg1 ;
-(void)setNote:(id)arg1 ;
-(void)setPreferredForName:(id)arg1 ;
-(void)setPhoneNumbers:(id)arg1 ;
-(void)setUrlAddresses:(id)arg1 ;
-(void)setOtherDateComponents:(id)arg1 ;
-(void)setInstantMessageAddresses:(id)arg1 ;
-(void)setRelatedNames:(id)arg1 ;
-(void)setSocialProfiles:(id)arg1 ;
-(void)setPostalAddresses:(id)arg1 ;
-(id)nameViewKeys;
-(char)isAvailableForFaceTime;
-(id)nameTitlePlaceholder;
-(id)firstNamePlaceholder;
-(id)middleNamePlaceholder;
-(id)lastNamePlaceholder;
-(id)nameSuffixPlaceholder;
-(id)nicknamePlaceholder;
-(id)completeNamePlaceholder;
-(id)phoneticFirstNamePlaceholder;
-(id)phoneticMiddleNamePlaceholder;
-(id)phoneticLastNamePlaceholder;
-(id)phoneticCompleteNamePlaceholder;
-(id)phoneticCompleteName;
-(id)companyNamePlaceholder;
-(id)departmentNamePlaceholder;
-(id)jobTitlePlaceholder;
-(id)makeSetImageCommandWithImage:(id)arg1 ;
-(id)identifierOfPersonPreferredForPhoto;
-(id)preferredForName;
-(id)unlinkedPeople;
-(id)editedPropertyKeys;
-(char)multiValueKeyAvailable:(id)arg1 ;
-(char)singleValueKeyAvailable:(id)arg1 ;
-(id)multiValueForKey:(id)arg1 ;
-(void)setMultiValue:(id)arg1 forKey:(id)arg2 ;
-(id)valuesByIdentifierFromMultiValue:(id)arg1 ;
-(id)updatedLinkedPeople;
-(id)placeholderStringForNameViewKey:(id)arg1 ;
-(void)setValue:(id)arg1 forNameKey:(id)arg2 ;
-(void)setPerson:(id)arg1 withUpdatedKey:(id)arg2 rebuildPersonMapper:(char)arg3 ;
-(id)mutablePeopleFromPeople:(id)arg1 ;
-(id)writablePeopleFromPeople:(id)arg1 ;
-(void)applyPersonDiff:(id)arg1 toMutablePeople:(id)arg2 ;
-(void)applySingleValuePropertyChangesToMutablePeople:(id)arg1 ;
-(void)applyPreferredForPhotoOnMutablePeople:(id)arg1 ;
-(void)applyPreferredForNameOnMutablePeople:(id)arg1 ;
-(void)sanitizeLabelsOnMutablePeople:(id)arg1 ;
-(id)makeUpdatedPerson;
-(void)setUpdatedPerson:(CNContact *)arg1 ;
-(id)constraintForPerson:(id)arg1 ;
-(void)setSingleValuesByPersonIdentifier:(id)arg1 onMutablePeople:(id)arg2 forKey:(id)arg3 ;
-(id)converterForKey:(id)arg1 ;
-(CNContact *)updatedPerson;
-(void)separateRequestedLinkedPeople:(id)arg1 intoRemovedIdentifiers:(id)arg2 addedIdentifiers:(id)arg3 ;
-(void)adjustUpdatedPeople:(id)arg1 forRemovedIdentifiers:(id)arg2 ;
-(void)adjustUpdatedPeople:(id)arg1 forAddedIdentifiers:(id)arg2 ;
-(id)removePeopleInArray:(id)arg1 withIdentifiers:(id)arg2 ;
-(id)relinkPersonWithIdentifier:(id)arg1 ;
-(id)personBySettingLinkIdentifier:(id)arg1 onPerson:(id)arg2 ;
-(id)updatedImage;
-(void)setUpdatedImageCommand:(id<ABCommand>)arg1 ;
-(id<ABCommand>)updatedImageCommand;
-(id)initWithContactStore:(id)arg1 legacyAddressBook:(id)arg2 contact:(id)arg3 cardView:(id)arg4 ;
-(AKCardViewImageDataSource *)imageDataSource;
-(char)isReadOnly;
-(void)setTransient:(char)arg1 ;
-(id)middleName;
-(id)phoneNumbers;
-(char)isMe;
-(void)setDelegate:(id<ABCardViewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id)URL;
-(void)setImage:(id)arg1 ;
-(id<ABCardViewDataSourceDelegate>)delegate;
-(char)isEmpty;
-(id)dataSource;
-(id)firstName;
-(char)isTransient;
-(char)hasChanges;
-(void)setJobTitle:(id)arg1 ;
-(id)jobTitle;
-(id)note;
-(id)emailAddresses;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)lastName;
-(void)setEmailAddresses:(id)arg1 ;
-(CNContact *)person;
-(void)setPerson:(CNContact *)arg1 ;
-(id)linkedPeople;
-(id)people;
-(void)setLinkedPeople:(id)arg1 ;
@end

