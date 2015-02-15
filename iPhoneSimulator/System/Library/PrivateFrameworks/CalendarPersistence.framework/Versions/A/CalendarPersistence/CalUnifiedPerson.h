/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABPerson, NSString, NSArray, NSDateComponents;

@interface CalUnifiedPerson : NSObject {

	ABPerson* _mainPerson;
	NSString* _uid;
	NSArray* _linkedPeople;
	NSString* _linkID;
	NSDateComponents* _preferredBirthdayComponents;
	NSDateComponents* _preferredAlternateBirthdayComponents;
	NSString* _alternateBirthdayCalendarIdentifier;

}

@property (retain) NSString * alternateBirthdayCalendarIdentifier;              //@synthesize alternateBirthdayCalendarIdentifier=_alternateBirthdayCalendarIdentifier - In the implementation block
@property (retain) ABPerson * mainPerson;                                       //@synthesize mainPerson=_mainPerson - In the implementation block
@property (retain) NSString * uid;                                              //@synthesize uid=_uid - In the implementation block
@property (retain) NSArray * linkedPeople;                                      //@synthesize linkedPeople=_linkedPeople - In the implementation block
@property (retain) NSString * linkID;                                           //@synthesize linkID=_linkID - In the implementation block
+(id)unifiedPersonForPeople:(id)arg1 ;
+(id)unifiedPersonForPerson:(id)arg1 ;
-(void)dealloc;
-(NSString *)linkID;
-(void)setLinkID:(NSString *)arg1 ;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(NSArray *)linkedPeople;
-(id)preferredBirthday;
-(char)birthdayIsYearless;
-(id)preferredAlternateBirthday;
-(char)alternateBirthdayIsYearless;
-(NSString *)alternateBirthdayCalendarIdentifier;
-(ABPerson *)mainPerson;
-(int)birthdayCalendarType;
-(id)initWithPreferredPerson:(id)arg1 linkedPeople:(id)arg2 preferredBirthdayComponents:(id)arg3 preferredAlternateBirthdayComponents:(id)arg4 ;
-(void)setMainPerson:(ABPerson *)arg1 ;
-(void)setLinkedPeople:(NSArray *)arg1 ;
-(void)setAlternateBirthdayCalendarIdentifier:(NSString *)arg1 ;
@end

