/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/Helpers/AddressBookSourceSync.app/Contents/MacOS/AddressBookSourceSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookSourceSync/ABAddressBookChangeWatcher.h>

@protocol ABAddressBookChangeWatcher <NSObject>
@required
-(unsigned long long)countOfInsertedRecords;
-(unsigned long long)countOfUpdatedRecords;
-(unsigned long long)countOfDeletedRecords;
-(void)stopObserving;
-(void)startObserving;

@end


@class ABAddressBook, NSMutableArray, NSString;

@interface ABAddressBookChangeWatcher : NSObject <ABAddressBookChangeWatcher> {

	ABAddressBook* _addressBook;
	unsigned long long _countOfInsertedRecords;
	unsigned long long _countOfUpdatedRecords;
	unsigned long long _countOfDeletedRecords;
	NSMutableArray* _safeObserverTokens;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watcherWithAddressBook:(id)arg1 ;
-(unsigned long long)countOfInsertedRecords;
-(unsigned long long)countOfUpdatedRecords;
-(unsigned long long)countOfDeletedRecords;
-(void)addressBookWillSave:(id)arg1 ;
-(void)stopObserving;
-(void)startObserving;
-(void)dealloc;
-(id)initWithAddressBook:(id)arg1 ;
@end
