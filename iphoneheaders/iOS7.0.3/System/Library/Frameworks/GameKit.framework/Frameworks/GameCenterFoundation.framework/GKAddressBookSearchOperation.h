/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchOperation.h>
#import <EventKit/ABSearchOperationDelegate.h>

@class NSMutableArray;

@interface GKAddressBookSearchOperation : ABSearchOperation <ABSearchOperationDelegate> {

	NSMutableArray* _matches;
	/*^block*/ id _handler;

}

@property (nonatomic,readonly) NSMutableArray * matches;              //@synthesize matches=_matches - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(id)matches;
-(void)dealloc;
-(id)init;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end
