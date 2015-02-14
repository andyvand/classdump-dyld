/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class ABAddressBook;

@interface ABKeyedUnarchiver : NSKeyedUnarchiver {

	ABAddressBook* _addressBook;

}

@property (nonatomic,readonly) ABAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
+(id)unarchiveObjectWithData:(id)arg1 addressBook:(id)arg2 ;
-(ABAddressBook *)addressBook;
-(id)initForReadingWithData:(id)arg1 addressBook:(id)arg2 ;
-(void)dealloc;
@end

