/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABAbstractGroupEntriesFactory.h>

@interface ABDefaultGroupEntriesFactory : ABAbstractGroupEntriesFactory {

	char _includeLastImport;

}

@property (assign) char includeLastImport;              //@synthesize includeLastImport=_includeLastImport - In the implementation block
-(id)makeGroupEntries;
-(char)includeLastImport;
-(void)setIncludeLastImport:(char)arg1 ;
-(id)makeGroupEntriesWithHidingPolicy:(id)arg1 ;
@end

