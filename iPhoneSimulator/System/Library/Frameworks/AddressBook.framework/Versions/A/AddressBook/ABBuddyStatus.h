/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABBuddyStatus : NSObject {

	Class IMService;
	NSMutableDictionary* cache;

}
+(char)showStatus;
+(id)sharedBuddyStatus;
-(void)statusUpdate:(id)arg1 ;
-(void)updateStatus:(id)arg1 ;
-(unsigned long long)statusForPerson:(id)arg1 ;
-(id)statusImageForPerson:(id)arg1 ;
-(char)isHandleAvailable:(id)arg1 ;
-(id)abServiceKeyForHandle:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isAvailable:(id)arg1 ;
@end

