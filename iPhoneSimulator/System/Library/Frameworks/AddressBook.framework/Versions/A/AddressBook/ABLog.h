/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABRecord.h>

@class NSString;

@interface ABLog : ABRecord {

	NSString* _deletedUID;

}
+(id)builtInProperties;
-(id)nts_DeletedUID;
-(id)nts_InitWithDeletedUID:(id)arg1 addressBook:(id)arg2 ;
-(id)_deletedUID;
-(void)finalize;
-(void)dealloc;
@end
