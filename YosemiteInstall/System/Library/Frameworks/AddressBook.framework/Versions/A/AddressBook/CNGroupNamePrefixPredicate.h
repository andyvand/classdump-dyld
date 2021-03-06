/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNPredicate.h>

@class NSString;

@interface CNGroupNamePrefixPredicate : CNPredicate {

	NSString* _prefix;

}

@property (nonatomic,copy,readonly) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
-(NSString *)prefix;
-(id)cn_coreDataPredicate;
-(id)initWithPrefix:(id)arg1 ;
-(void)dealloc;
@end

