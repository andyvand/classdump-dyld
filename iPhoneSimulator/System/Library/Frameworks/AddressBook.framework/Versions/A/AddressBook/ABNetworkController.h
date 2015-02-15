/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSString, NSTimer;

@interface ABNetworkController : NSObject {

	const SCDynamicStoreRef _store;
	NSString* _domainName;
	unsigned _waitingForDialToFinish : 1;
	unsigned _checkedNetwork : 1;
	unsigned _isNetworkUp : 1;
	NSTimer* _notificationTimer;

}
+(id)sharedNetworkController;
+(char)isHostReachable:(id)arg1 ;
-(void)_postNetworkChangeNotification:(id)arg1 ;
-(void)listenForNetworkChanges;
-(char)canReachAddress:(id)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(void)_triggerDialForHostname:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(char)isNetworkUp;
-(char)isHostReachable:(id)arg1 ;
@end

