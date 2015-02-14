/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class ABCardViewLinkedPerson;

@interface ABCardViewLinkedPersonValueTransformer : NSValueTransformer {

	ABCardViewLinkedPerson* _lastLinkedPerson;

}

@property (nonatomic,retain) ABCardViewLinkedPerson * lastLinkedPerson;              //@synthesize lastLinkedPerson=_lastLinkedPerson - In the implementation block
+(Class)transformedValueClass;
+(char)allowsReverseTransformation;
-(void)setLastLinkedPerson:(ABCardViewLinkedPerson *)arg1 ;
-(ABCardViewLinkedPerson *)lastLinkedPerson;
-(id)init;
-(void)dealloc;
-(id)transformedValue:(id)arg1 ;
@end

