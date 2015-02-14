/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CNContactStore, CNContact, NSObject, NSCache;

@interface CalContactProvider : NSObject {

	CNContactStore* _contactStore;
	CNContact* _cachedMe;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSCache* _emailToPersonCache;

}

@property (nonatomic,retain) CNContactStore * contactStore;                        //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContact * cachedMe;                                 //@synthesize cachedMe=_cachedMe - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,retain) NSCache * emailToPersonCache;                         //@synthesize emailToPersonCache=_emailToPersonCache - In the implementation block
+(id)defaultProvider;
-(void)peopleWithEmailAddresses:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)myHomeAddress;
-(id)myWorkAddress;
-(id)unifiedMeContact;
-(void)_addressBookChangedExternally:(id)arg1 ;
-(id)_unifiedContactForPerson:(id)arg1 ;
-(NSCache *)emailToPersonCache;
-(id)_fetchUnifiedMeContact;
-(id)myAddressForLabel:(id)arg1 ;
-(id)myFirstName;
-(id)myNickName;
-(CNContact *)cachedMe;
-(void)setCachedMe:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(id)personWithIdentifier:(id)arg1 ;
-(id)personWithEmailAddress:(id)arg1 ;
-(id)myLastName;
-(id)myShortDisplayName;
-(char)idIsMe:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEmailToPersonCache:(NSCache *)arg1 ;
-(id)init;
@end

