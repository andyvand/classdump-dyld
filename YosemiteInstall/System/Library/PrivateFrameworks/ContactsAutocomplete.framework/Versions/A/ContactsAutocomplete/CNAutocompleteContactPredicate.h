/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNPredicate.h>

@class NSPredicate;

@interface CNAutocompleteContactPredicate : CNPredicate {

	NSPredicate* _cn_coreDataPredicate;

}
+(id)predicateForProperties:(id)arg1 term:(id)arg2 ;
-(id)cn_coreDataPredicate;
-(id)initWithPredicate:(id)arg1 coreDataPredicate:(id)arg2 ;
@end

