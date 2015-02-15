/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABPersonListSearchController;

@interface ABPersonSearchConfiguration : NSObject {

	ABPersonListSearchController* _controller;
	char _shouldSelectBestEntry;

}

@property (assign) char shouldSelectBestEntry;              //@synthesize shouldSelectBestEntry=_shouldSelectBestEntry - In the implementation block
-(void)searchForString:(id)arg1 ;
-(void)fetchContacts;
-(char)shouldSelectBestEntry;
-(void)setShouldSelectBestEntry:(char)arg1 ;
-(void)searchFieldDidChange:(id)arg1 ;
-(void)incrementSearchCount;
-(id)initWithController:(id)arg1 ;
@end
