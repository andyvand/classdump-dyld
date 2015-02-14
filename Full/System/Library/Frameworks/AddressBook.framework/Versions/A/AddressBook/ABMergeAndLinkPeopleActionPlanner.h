/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ABMergeAndLinkPeopleActionPlanner : NSObject {

	NSArray* _people;

}

@property (readonly) int plannedActions; 
-(id)initWithPeople:(id)arg1 ;
-(int)plannedActions;
-(id)menuTitleForPlannedActions:(int)arg1 ;
-(id)peopleByStoreURL;
-(char)thereArePeopleInMoreThanOneAccount:(id)arg1 ;
-(char)anyAccountHasMoreThanOneWritablePerson:(id)arg1 ;
-(char)anyPersonIsReadOnly;
-(void)dealloc;
@end

