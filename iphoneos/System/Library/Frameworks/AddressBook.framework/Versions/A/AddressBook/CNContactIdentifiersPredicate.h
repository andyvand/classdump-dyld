/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNPredicate.h>

@class NSArray;

@interface CNContactIdentifiersPredicate : CNPredicate {

	NSArray* _identifiers;

}

@property (nonatomic,copy,readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(id)cn_coreDataPredicate;
-(id)initWithIdentifies:(id)arg1 ;
-(NSArray *)identifiers;
-(void)dealloc;
@end

