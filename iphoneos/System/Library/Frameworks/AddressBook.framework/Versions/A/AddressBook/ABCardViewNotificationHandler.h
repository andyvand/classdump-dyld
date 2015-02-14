/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABCardViewController;

@interface ABCardViewNotificationHandler : NSObject {

	ABCardViewController* _cardViewController;

}
-(id)initWithCardViewController:(id)arg1 ;
-(id)identifiersForRecords:(id)arg1 ;
-(void)handleExternalNotification:(id)arg1 ;
-(void)handleLocalNotification:(id)arg1 ;
-(id)updatedRecordsInLocalNotification:(id)arg1 ;
-(char)shouldRefreshCardViewWithIdentifiers:(id)arg1 ;
-(void)dealloc;
@end

